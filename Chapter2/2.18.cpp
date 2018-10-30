#include<iostream>

int main()
{

int i=3;

int *j=&i;

*j=*j*2;

std::cout<<*j;

return 0;
}