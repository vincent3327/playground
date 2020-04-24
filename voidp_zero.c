#include<stdio.h>
#define __ARRAY_EMPTY 7
int main()
{
	//int* ip = 5
	int i = 49,a = 56;
	void * p = (void*)226;
	void* a1 = p ;//= (void*)0;
	//error
	void* cp = (char*)78;
	char* c = (char*)cp;
	//char* c = (void*)76;
	
	void * vp = &i;
	printf("content of p is %X\n",p);
	printf("address of p is %x\n",&p);
	printf("c's value is  %c\n",c);
	printf("vp points at %d\n",*(int*)vp);
	printf("__ARRAY_EMPTY is %d\n",__ARRAY_EMPTY);
	
	//printf("addr of constant pointer (void*)0 is %x\n",&((void*)0));
}