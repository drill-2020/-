#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;
int main(void){
	
	for(int i=0;i<2;i++){
		for(int j=0;j<6;j++){
			for(int s=0;s<6;s++){
				cout<<"想你的时间为："<<i<<"小时"<<j<<"分钟"<<s<<"秒"<<endl;
				Sleep(1000);
			}
		}
	}
	system("pause");
	return 0;
}