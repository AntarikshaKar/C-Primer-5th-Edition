#include <iostream>
int main()
{

int inp=0,sum=0;

std::cout<<"Enter integer values for sum and non integer to close the program"<<std::endl;
while(std::cin>>inp){
	sum+=inp;
}

std::cout<<"sum="<<sum;

return 0;
}