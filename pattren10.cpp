#include <iostream>
using namespace std;
int main(){
    int x=4;
     
    
    for(int i=1;i<=x;i++){
        int y=i;
        for(int j=1;j<=x;j++){
            if(i<j||i==j){
                cout<<y;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}