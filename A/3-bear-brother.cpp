#include <iostream>
using namespace std;
int l,b,n,i=0;
int main() {
    cin >> l >> b;
    do{
        i+=1, 
        l=3*l, 
        b=2*b;
        if(l>b){
            n=i; 
            break;
        }
    } while (l<=b);
    cout<<n;
}