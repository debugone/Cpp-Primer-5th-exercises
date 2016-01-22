#include <iostream>
//#include <fstream> 
#include "Sales_item.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int main() {
	
	Sales_item item1,item2;
	std::cin>>item1>>item2;
	if(item1.isbn() == item2.isbn()) {
		std::cout<<item1+item2<<std::endl;	
	} else{
		std::cerr << "Data must refer to same ISBN"
				  << std::endl;
		return -1;
	}

}*/
int main() {
	//Write a program that reads several transactions and counts how many transactions occur each ISBN
	//Sales_item item;
	//fstream fin("input.txt"); // 已有输入文件
	Sales_item item1,item2;
	if(std::cin>>item1){
		int cnt = 1;
		while(std::cin>>item2){
			if( item2.isbn() == item1.isbn() ){
			++cnt;			
		} else {
			std::cout << item1<<" occurs " << cnt << " times " <<std::endl;
			item1 = item2;
			cnt = 1;
			}
		}
			std::cout << item1<<"occurs"
					  << cnt << "times" <<std::endl;
		
	}
		return 0;
}
