#include <iostream>
#include <cmath>
using namespace std;
void inputData(double a[][4]){
    for(int i=0;i<3;i++){
      cout<<"Enter the coefficient of equation "<<i+1<<endl;
        for(int j=0;j<4;j++){
            cin>>a[i][j];
        }
    }
}

void displayResult(double a[][4]){
  cout<<"The answer is :"<<endl;
    for(int i=0;i<3;i++){
        cout<<"x"<<i+1<<" = "<<a[i][3]/a[i][i]<<endl;
    }
}
int main() {
    double a[3][4],temp;
    inputData(a);
    
    
    for(int j=0;j<3;j++){
        if(fabs(a[j][j])<0.00005){
            cout<<"The equations can't be solved."<<endl;
            exit(1);
        }
        for(int i=0;i<3;i++){
            if(i==j) continue ;
            temp=a[i][j];
            for(int k=0;k<4;k++){
                a[i][k]=a[i][k]-(temp/a[j][j])*a[j][k];
            }
        }
    }
    
    displayResult(a);
    return 0;
}