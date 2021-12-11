#include<iostream>
#include<cmath>
#define E 0.00005

double f(double x){
  double temp;
  temp=pow(x,3)+3*pow(x,2)-5;
  return temp;
}

int main(){
  
  double a,b,c;
  int counter=0;

  std::cout<<"Enter the initial value of a and b :"<<std::endl;
  std::cin>>a>>b;

  if(f(a)*f(b)>0){
    std::cout<<"There exist no any roots between the interval "<<a<<" and "<<b<<" ."<<std::endl;
    return 0;
  }
  else if(f(a)*f(b)==0){
    if(f(a)==0)
      std::cout<<"The root is :"<<a<<" ."<<std::endl;
    if(f(b)==0)
      std::cout<<"The root is :"<<b<<" ."<<std::endl;
  }
  else{
    do
    {
      counter++;
      c=(a+b)/2;
      if(f(c)*f(a)<0)
        b=c;
      else
        a=c;
      if(counter>50){
        std::cout<<"The function is not continuous."<<std::endl;
        return 0;
      }
    } while (fabs(f(c))>E||fabs(b-a)>E);
    std::cout<<"The root is : "<<c<<" ."<<" It was obtained in "<<counter<<" steps."<<std::endl;
  }
  return 0;
}