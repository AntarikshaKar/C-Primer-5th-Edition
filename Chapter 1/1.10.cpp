#include<iostream>
int main(){
int num;

std::cout<<"Please enter the desired number!";
std::cin>>num;

while(num!=0){
    std::cout<<"The number is ="<<num<<std::endl;
    --num;
}
    std::cout<<"The number is ="<<num;

return 0;

}
