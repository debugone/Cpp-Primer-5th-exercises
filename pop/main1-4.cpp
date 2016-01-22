#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int currVal=0,val=0;//currVal is the number we are counting ;we'll read values into val 
	std::cout<<"Enter some numnbers:"<<'\n';
	if (std::cin >> currVal){
		int cnt = 1;//store the count for the current value we are processing 
		while(std::cin>>val){
			if(val == currVal)
				++cnt;
			else{
				std::cout<<currVal<<" occurs "
					     <<cnt<<" times "<<std::endl;
				currVal = val;
				cnt = 1; //reset the count 
				}
		}
		std::cout<< currVal <<" occurs "<< cnt <<" times "<<std::endl;
	}
	return 0;
}
