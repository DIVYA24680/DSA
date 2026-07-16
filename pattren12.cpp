#include <iostream>
using namespace std;
int main(){
    int x=5;
     
    
    for(int i=1;i<=x;i++){
         
        for(int j=1;j<=x;j++){
            if(i-j==2 || j-i==2){
                cout<<" * ";
            }
            else if (i%2==0 && i==j)
            {
                cout<<" * ";
                 
            }
             
            else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }
    return 0;
}