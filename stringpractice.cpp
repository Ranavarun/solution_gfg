#include <iostream>
#include<string>

using namespace std;

int main() {
  char arr[50];

  string str;
  
  getline(cin,str);
 
  cout <<str;
  cout <<"the length is :"<<str.length()<<endl;; 
  cout <<"is empty : "<<str.empty()<<endl;;
  str.push_back('a');
  cout<<str<<endl;;
  str.pop_back();
  cout<<str;
  cout<<str.substr(0,2)<<endl;;

  string a ="varun";
  string b ="vraa";
  string c = "run";


  if(a.compare(b)==0)
  {cout<<"same";}
  if(a.compare(b)<0)
  {
    cout<<"b is bigger ";
  }
  else
  {
    cout<<"a is bigger";
  }
  
  if(a.find(c) == std::string::npos)
  {
    cout << "not found";
  }
  else
  {
    cout <<"found";
  }
  return 0;

 
}
