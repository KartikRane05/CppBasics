#include<iostream>
using namespace std;
int main(){
  int age;
  cin>>age;
  if(age<18){
    cout<<"not eligble for job";
  }
  else if(age>=18 && age<55){
    cout<<"eligible for job";
  }
  else if(age<=57){
    cout<<"eligible for jon but retirement soon";
  } 
  else if (age>57){
    cout<<"retirement time";
  }
  return 0;
}