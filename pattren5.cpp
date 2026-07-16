#include <iostream>
using namespace std;
int main(){
    int x=3;
    char ch='A';
    for(int i=1;i<=x;i++){
         
        for(int j=1;j<=i;j++){
            cout<<ch;
             

        }
        ch=ch+1;
        cout<<endl;
    }
    return 0;
}