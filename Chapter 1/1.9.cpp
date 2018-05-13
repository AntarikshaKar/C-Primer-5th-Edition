#include<iostream>
//for the question in the book please enter a=50 and b=100
int main(){
int a,b,num=0,counter=0;

std::cout<<"Enter the start value="<<std::endl;
std::cin>>a;

std::cout<<"Enter the end value";
std::cin>>b;

counter=a;
while(counter<=b){

    num+=a;
    ++a;;
    ++counter;
}
std::cout<<"The counter value is ="<<counter<<std::endl<<"The sum is ="<<num;
return 0;
}
