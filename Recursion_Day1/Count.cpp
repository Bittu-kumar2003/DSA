#include<iostream>
using namespace std;
void print(int n){
    //baswe case
    if(n==0){
        return ;
    }
    
    // recursive relation 
    print(n-1);
    cout << n << endl;
}
int main(){
    int n;
    cin>>n;
    print(n);
    return 0;

}


                  // Output
// Given the number Randomly 
// 4
//1  2  3  4
