#include<iostream>
#include<cmath>
using namespace std;
#define E 0.00005

double f(double x) {
  return (x*sin(x)+cos(x));
}
double g(double x){
  return (x*cos(x));
}

int main(){
  
  double a,c;
  int counter=0;

  std::cout<<"Enter the initial value of a :"<<std::endl;
  std::cin>>a;

  do
  {
    if(fabs(g(a))<E){
      cout<<"There exist no any roots between the interval "<<endl;
      return 0;
    }
    counter++;
    c=a-(f(a)/g(a));
    a=c;
    if(counter>50){
      std::cout<<"The function is not continuous."<<std::endl;
      return 0;
    }
  }while (fabs(f(c))>E);
  std::cout<<"The root is : "<<c<<" ."<<" It was obtained in "<<counter<<" steps."<<std::endl;
  
  return 0;
}