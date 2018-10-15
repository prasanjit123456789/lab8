/*Write a program to find the largest, smallest, mean, median, elements with highest frequency of the elements of all elements of an array. (Use functions for each of the task in the question)*/
//define library
#include<iostream>
#include<algorithm>
using namespace std;
//define larg function
void larg(int ar[]){
	//define variable
	int *p=ar;int l=*p;
	//looping to find the largest
	for(int i=0;i<3;i++){
		//cndition for l to assign the largest
		if(l<*(p+i)){l=*(p+i);}
		else{}
	}
	//print the largest
	cout<<"The largest is "<<l<<endl;
}
//define small function
void small(int ar[]){
	//define variable
	int *p=ar;int s=*p;
	//looping to find largest
	for(int i=0;i<3;i++){
		//condition for s to assign the smallest
		if(s>*(p+i)){s=*(p+i);}
		else{}
	}
	cout<<"The smallest is "<<s<<endl;
}
//define mean function
void mean(int ar[]){
	//define variable
	int s=0;int *p=ar;
	//addition by using loop
	for(int i=0;i<3;i++){
		s=s+*(p+i);
	}
	cout<<"The mean is "<<s/3<<endl;
}
//define median function
void median(int ar[]){
	//sort from smallest to largest
	sort(ar,ar+3);
	//there are only 3 numbers. So the median is3+1/2 th i.e 2nd term. So in array 2nd term is written in 1.
	cout<<"The median is "<<ar[1]<<endl;
}
//define frq function
int frq(int ar[]){
	for(int i=0;i<3;i++){int k=0;
		for(int n=0;n<3;n++){
			if(ar[i]==ar[n]){k=k+1;}
		}
	cout<<"The frequency of "<<ar[i]<<" is "<<k<<endl;
	}
}
//define main function
int main(){
	//define variables
	int a,b,c,d,e;
	//ask the user
	cout<<"GIVE 3 NUMBERS ";
	cin>>a>>b>>c;
	//define array
	int ar[]={a,b,c};
	//call by larg function
	larg(ar);
	//call by small function
	small(ar);
	//call by mean function
	mean(ar);
	//call by median function
	median(ar);
	//call by frq function
	frq(ar);
	return 0;
}
