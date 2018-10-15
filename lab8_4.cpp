#include<iostream>
using namespace std;
//define klrg function
void klrg(int ar[],int br[]){
	int l=ar[0];int r=br[0];
	//loop for finding highest
	for(int i =0;i<3;i++){
		if(l<ar[i]){l=ar[i];}
		else{}
	}
	for(int n=0;n<3;n++){
		if(r<br[n]){r=br[n];}
		else{}
	}
	//printing the values
	cout<<"The largest in first array "<<l<<endl;
	cout<<"The largest in second array "<<r<<endl;
}
//define ksmal function
void ksmal(int ar[],int br[]){
	int s=ar[0];int m=br[0];
	//loop for finding smallest
	for(int i=0;i<3;i++){
		if(s>ar[i]){s=ar[i];}
		else{}
	}
	for(int n=0;n<3;n++){
		if(m>br[n]){m=br[n];}
		else{}
	}
	//printing the smallest values for the two arrays
	cout<<"The smallest in the first array "<<s<<endl;
	cout<<"The smallest in the second array "<<m<<endl;
}
//define kmrg function
void kmrg(int ar[],int br[]){
	int array[6];
	//loop for merging two arrays
	for(int i=0;i<3;i++){
		array[i]=ar[i];
		array[i+3]=br[i];
	}
	//cout the values
	for(int n=0;n<6;n++){
		cout<<"The "<<n+1<<" element of the new array"<<array[n]<<endl;
	}
}
int main(){
	int a,b,c,d,e,f;
	//ask the user for the first array
	cout<<"For the first array."<<endl;
	cin>>a>>b>>c;
	//ask the user for the second array
	cout<<"For the second array."<<endl;
	cin>>d>>e>>f;
	//defining two arrays 
	int ar[]={a,b,c};int br[]={d,e,f};
	//call by klrj function
	klrg(ar,br);
	//call by ksmal function
	ksmal(ar,br);
	//call by kmrg function
	kmrg(ar,br);
	return 0;
}
