#include <iostream>
using namespace std;
int main(){
    int x=4;
    
    for(int i=1;i<=x;i++){
         int y=i;
        for(int j=1;j<=i;j++){
            cout<<y;
            y--;
             

        }
        cout<<endl;
    }
    return 0;
}