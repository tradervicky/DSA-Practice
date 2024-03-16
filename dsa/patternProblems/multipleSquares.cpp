#include<iostream>
using namespace std;
int main(){
    int row = 5;
    int col = 9;
    for (int i = 1; i<=row; i++){
        for(int j = 1; j<=col; j++){
            if(i%2!=0){
                cout<<"*";
            }
            else{
                if(j%2!=0){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}