#include <bits/stdc++.h>
using namespace std;

int main() {
 int x;
 cin>>x;
 cin.ignore();
 int a[x];
 for(int i=0;i<x;i++)
     cin>>a[i];
 int lmax,l[100];
 l[0]=1;
 for(int i=1;i<x;i++) {
     lmax=0;
     for (int j = 0; j < i; j++)
         if (a[i] > a[j])
             if (lmax <l[j])
                 lmax=l[j];
     l[i]=lmax+1;
 }

cout<<l[x-1];


}
