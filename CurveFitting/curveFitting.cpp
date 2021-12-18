#include<iostream>
#include<cmath>
using namespace std;

void input(double *a,int size){
  for(int i=0;i<size;i++){
    cin>>a[i];
  }
}

double sum(double *a,int size){
  double temp=0;
  for(int i=0;i<size;i++){
    temp+=a[i];
  }
  return temp;
}


double sum(double *a,double *a1,int size){
  double temp=0;
  for(int i=0;i<size;i++)
    temp+=a[i]*a1[i];
  return temp;
}



int main(){
  int n;
  cout<<"enter the number of data you want to enter"<<endl;
  cin>>n;
  double x[n],y[n],a,b,sumX,sumY,sumX2,sumXY;
  cout<<"Enter the value of x."<<endl;
  input(x,n);
  cout<<"Enter the value of y."<<endl;
  input(y,n);
  sumX=sum(x,n);
  sumY=sum(y,n);
  sumXY=sum(x,y,n);
  sumX2=sum(x,x,n);
  a=((sumY*sumX2)-(sumXY*sumX))/((n*sumX2)-(sumX*sumX));
  b=((n*sumXY)-(sumX*sumY))/((n*sumX2)-(sumX*sumX));
  if(b<0)
    cout<<"The linear best fit is: "<<a<<" - "<<fabs(b)<<"x ."<<endl;
  else
    cout<<"The linear best fit is: "<<a<<" + "<<b<<"x ."<<endl;

  return 0;
}