#include <iostream>
#include<string.h>

using namespace std;

int getlength(char name[])
{
  int length = 0;
  int i = 0;

  while(name[i]!='\0')
  {
    i++;
    length++;

  }
  return length;
}

void reverseString(char arr[],int n)
{
int s=0;
int e = n-1; 
while(s<=e)
{
 swap(arr[s],arr[e]);
s++;
e--;

}

cout<<arr;


}



bool checkPalindrom(char word[])
{


  int i =0;
  int n = strlen(word);
  int j = n-1;


  while(i<=j)
  {
    if(word[i]!=word[j])
    {
      return false;
    }


    else
    {
      i++;
      j--;
    }

  }
  return true;


}



void uppercase(char name[])
{
int i = 0;
while(name[i]!='\0')
{

name[i]=name[i]-'a'+'A';
i++;


}
cout<<name;

}
void lowercase(char name[])
{
int i = 0;
while(name[i]!='\0')
{

name[i]=name[i]-'A'+'a';
i++;


}
cout<<name;

}

int main() {
  char arr[100];
  cin>>arr;
  // cin.getline(arr,50);
  // cout<<checkPalindrom(arr);
uppercase(arr);
lowercase(arr);
  

  return 0;
}
