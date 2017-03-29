#include <stdlib.h>

#define SIZE_DEFAULT 2

typedef struct Vector vector;

struct Vector
{
	void ** array;
	size_t count;
	size_t size_blocks;
};

vector CreateVector();
int getCount(vector * ptr);
void ** getData(vector * ptr);
void * at(vector * ptr,int index);
void push_back(vector * ptr, void * value);
void reserve(vector * ptr, int size);
void DestroyVector(vector  * ptr);

