#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;
int main(void){
	
	for(int i=0;i<2;i++){
		for(int j=0;j<6;j++){
			for(int s=0;s<6;s++){
				cout<<"�����ʱ��Ϊ��"<<i<<"Сʱ"<<j<<"����"<<s<<"��"<<endl;
				Sleep(1000);
			}
		}
	}
	system("pause");
	return 0;
}