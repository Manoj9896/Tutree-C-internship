// Find all substrings of a given string that contains all characters of other string.
//  Example
// string str1 = ‘XYYZXZYZXXYZ’;
// string str2 = ‘XYZ’;
 
// substring ‘YZX’ present at index 2
// substring ‘XZY’ present at index 4
// substring ‘YZX’ present at index 6
// substring ‘XYZ’ present at index 9

#include<iostream>

using namespace std;
bool cmp(int freq1[],int freq2[]){

    for(int i=0;i<256;i++)
        if(freq1[i]!=freq2[i])
            return 0;
    return 1;
}

void find_all_substrings(string &str1, string &str2){

    int freq1[256]={0},freq2[256]={0};

    int l1=str1.size(),l2=str2.size();

    if(l1<l2)return ;

    for(int i=0;i<l2;i++){
        freq1[str1[i]]++;
        freq2[str2[i]]++;
    }

    for(int i=l2;i<l1;i++){

        if(cmp(freq1,freq2))cout<<(i-l2)<<" ";
        freq1[str1[i]]++;
        freq1[str1[i-l2]]--;
    }
    if(cmp(freq1,freq2))cout<<(l1-l2);

}

int main(){
    string str1 = "XYYZXZYZXXYZ";
    string str2="XYZ";

    // remove the comments below to take input from the terminal

    //cin>>str1;
    //cin>>str2;

    find_all_substrings(str1,str2);
    return 0;
}