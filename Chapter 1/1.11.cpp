#include<iostream>
int main()
{
 int a,b;

 std::cout<<"Enter the two integers"<<std::endl;
 std::cin>>a>>b;

if (a-b<0){
	while(a<b){
		++a;
		std::cout<<"the number is= "<<a<<std::endl;
		
	}
}

else{	while(b<a){
		++b;
		std::cout<<"the number is= "<<b<<std::endl;
		
	}
}


 return 0;

}
