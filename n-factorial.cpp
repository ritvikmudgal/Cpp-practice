# include <iostream>
using namespace std;
int fact(int n){
    int i=1, j=1;
    while (i<n+1){
        j*=i;
        i++;
    }
    return j;
}
int main(){
    cout<<"Enter a number-";
    int n;
    cin>>n;
    cout<<"The value of "<<n<<"! is "<<fact(n)<<endl;
}