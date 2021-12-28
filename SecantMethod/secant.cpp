#include<iostream>
#include<cmath>
using namespace std;
#define E 0.00005

double f(double x){
  return (x*sin(x)+cos(x));
}

int main(){
  
  double a,b,c;
  int counter=0;

  std::cout<<"Enter the initial value of a and b :"<<std::endl;
  std::cin>>a>>b;

  do
  {
    if(fabs(f(b)-f(a))<E){
      cout<<"There exist no any roots between the interval "<<endl;
      return 0;
    }
    counter++;
    c=(a*f(b)-b*f(a))/(f(b)-f(a));
    a=b;
    b=c;
    if(counter>50){
      std::cout<<"The function is not continuous."<<std::endl;
      return 0;
    }
  } while (fabs(f(c))>E);
  std::cout<<"The root is : "<<c<<" ."<<" It was obtained in "<<counter<<" steps."<<std::endl;
  
  return 0;
}