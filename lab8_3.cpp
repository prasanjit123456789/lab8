/* Write a program for kth largest, kth smallest element of an array. (Use functions : e.g. klarge (int array[], int size, int k), similarly for smallest)*/
#include<iostream>
#include<algorithm>
using namespace std;
void klarge(int ar[],int size,int k){
	//sort the value from largest to smallest
	sort(ar+size,ar);
	//print the kth largest value
	cout<<"The kth largest value is "<<ar[k-1]<<endl;
}
//define ksmall function
void ksmall(int ar[],int size,int k){
	//sort the value from smallest to largest
	sort(ar,ar+size);
	//print that kth smallest value
	cout<<"The kth smallest value is "<<ar[k-1]<<endl;
}
int main(){
	int a,b,c,d,e,f,g;
	//ask the user to give five values to know highest or lowest
	cout<<"Give five values to know the highest or lowest "<<endl;
	cin>>a>>b>>c>>d>>e;
	//define array
	int ar[]={a,b,c,d,e};
	//the size of the array
	f=sizeof(ar)/sizeof(ar[0]);
	//ask the user to give the the k to know the kth value
	cout<<"Which kth value do you want to know."<<endl;
	cin>>g;
			//call by klarge function
			klarge(ar,f,g);
			//call by ksmall function
			ksmall(ar,f,g);	
	return 0;
}
