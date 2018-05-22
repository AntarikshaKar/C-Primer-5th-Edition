#include<iostream>
#include "Sales_item.h"
int main(){
	
	int cnt=0;
	char c;
	Sales_item h1,tmp,h2;
	
	if (std::cin>>tmp);
	{
		cnt=1;
	}
	while(std::cin>>h1){
		

		if (h1.isbn()==tmp.isbn()){
			cnt++;
			h2+=h1;
		}
		else{
     	std::cout<<"The number of entries for the ISBN number is ="<<cnt<<std::endl;
     	std::cout<<"The sum of  for the ISBN number is ="<<h2<<std::endl;
		cnt=1;
		std::cout<<"Do you want to proceed further?(y/n)"<<std::endl;
		std::cin>>c;
		if (c=='y'){

			continue;
		}
		else{
			std::cout<<"Program terminated! Good Bye!";
			break;
		}

	}
	}
    return 0;
  }
