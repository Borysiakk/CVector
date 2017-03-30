# CVector
This is an implementation of a vector

Vector Creation
```
vector vec = CreateVector();
```

Add an item
```
push_back(vector * ptr,void * value);
```

At returns a reference to the element at position n in the vector.
```
void * at(vector * ptr,int index);
```
Change in capacity
```
void reserve(vector * ptr,int size);
```
Release of memory
```
DestroyVector(vector * ptr);
```

