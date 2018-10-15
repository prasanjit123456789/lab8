/* Write a program to find sum of all elements of an array. (Use functions)*/
//define library
#include<iostream>
using namespace std;
//define sum fuction
int sum(int ar[]){
	//define variable
	int sum=0;int *p=ar;
	//addition by loop
	
	for(int i=0;i<5;i++){
		sum=sum+ * (p+i);	
	}
	cout<<"The sum is "<<sum;
	return sum;
}

//define main function
int main(){
	//define variables
	int a,b,c,d,e;
	//ask the user
	cout<<"Give 5 numbers for sum."<<endl;
	cin>>a>>b>>c>>d>>e;
	int ar[]={a,b,c,d,e};
	//calling a function for sum
	sum(ar);
	return 0;
}
