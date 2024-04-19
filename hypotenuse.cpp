#include<iostream>
#include<cmath>
using namespace std;
int hypotenuse(){
	int perpendicular;
	int base;
	cout<<"Enter the perpenducular of your right triangle ";
	cin>>perpendicular;
	cout<<"Enter the base of your right triangle ";
	cin>>base;
	int sqofperpendicular = pow(perpendicular,2);
	int sqofbase = pow(base,2);
	int sumofsides = sqofperpendicular + sqofbase ;
	int sqrtofsides = sqrt(sumofsides);
	cout<<"Hypotenuse of right triangle is "<< sqrtofsides<<endl; 
}
int main(){
	hypotenuse();
}
