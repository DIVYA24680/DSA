#include <iostream>
using namespace std;
int main(){
    int x=100;
    int rem=1;
    int num=1;
    int n=0;
    int sum=0;  
    while(x>0){
        rem=x%10;
        x=x/10;
        num=rem*(2*n);
        sum=sum+num;
        n++;
        cout<<sum;
        
    }
}
