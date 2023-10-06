#include<iostream>
#include<array>
using namespace std;

int main(){
array<int,3> p={0,1,2};
for(int i=0;i<4;i++) cout << p[i] << '\n';
cout <<p.at(2)<< '\n';
cout << "empty or not : " << p.empty() << '\n';
cout << p.front() << '\n';
cout << p.back();

}