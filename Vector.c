#include "Vector.h"
#include <malloc.h>

vector CreateVector()
{
	vector vec;
	vec.count = 0;
	vec.size_blocks = SIZE_DEFAULT;
	vec.array = (void**)malloc(vec.size_blocks * sizeof(void*));
	return vec;
}

int getCount(vector * ptr)
{
	return ptr->count;
}

void ** getData(vector * ptr)
{
	return ptr->array;
}

void * at(vector * ptr,int index)
{
	return ptr->array[index];
}

void push_back(vector * ptr, void * value)
{
	if (ptr->size_blocks <= ptr->count)
	{
		//printf("Realloc\n");
		ptr->size_blocks *= 2;
		ptr->array = realloc(ptr->array, ptr->size_blocks * sizeof(void*));
		if (ptr->array == NULL)
		{
			printf("Error Realloc\n");
		}
		ptr->array[ptr->count] = value;

	}
	else
	{
		//printf("Read Memory\n");
		ptr->array[ptr->count] = value;
	}
	ptr->count++;
}

void reserve(vector * ptr, int size)
{
	ptr->size_blocks = size;
	ptr->array = realloc(ptr->array, ptr->size_blocks * sizeof(void*));
	if (ptr->array == NULL)
	{
		printf("Error Realloc\n");
	}
}

void DestroyVector(vector * ptr)
{
	free(ptr->array);
}
