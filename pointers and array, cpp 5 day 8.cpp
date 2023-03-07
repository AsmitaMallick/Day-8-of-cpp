#include<iostream>
using namespace std;
int main(){
	int marks[]= {24, 55, 66, 77};
	int *p= marks;
	cout<<"the value of marks[0]: "<<*p<<endl;
	cout<<"the value of marks[1]: "<<*(p+1)<<endl;
	cout<<"the value of marks[2]: "<<(*p+2)<<endl;
	cout<<"the value of marks[3]: "<<(*p+3)<<endl;
	cout<<*(p++)<<endl;
	cout<<*(++p)<<endl;
	return 0;
}

