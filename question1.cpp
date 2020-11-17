//Write a program in C++ to print the following pattern
// 1 2 3 4 5 6 7
//  2 3 4 5 6 7
//   3 4 5 6 7
//    4 5 6 7
//     5 6 7
//      6 7
//       7
//      6 7
//     5 6 7
//    4 5 6 7
//   3 4 5 6 7
//  2 3 4 5 6 7
// 1 2 3 4 5 6 7

#include<iostream>

using namespace std;

void printpattern(int n){

    for(int i=1;i<=n;i++){

        for(int k=1;k<i;k++)cout<<" ";

        for(int j=i;j<=n;j++)
            cout<<j<<" ";
        cout<<"\n";
    }

    for(int i=n-1;i>=1;i--){

        for(int k=1;k<i;k++)cout<<" ";

        for(int j=i;j<=n;j++)
            cout<<j<<" ";
        cout<<"\n";
    }
}
int main(){
    int n=7;

    // remove the comments below to take input from the terminal

    //cin>>n;

    printpattern(n);
    return 0;
}
