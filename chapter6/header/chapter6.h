#ifndef CHAPTER6_H
#define CHAPTER6_H

int fact(int val);
int returnAbsoluteValue(int val);

template <typename T> T abs(T i)
{
	return i >= 0 ? i : -i;
}


#endif