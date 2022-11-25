#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  char name[210];
  int i;
  ofstream ofs("file1.txt");
  cout<<"Enter the sentence"<<endl;
  
  cin.getline(name,210);
  ofs<<name<<endl;
  ofs.close();
  ifstream ifs("file1.txt");
  if(!ofs)
  {
    cout<<"The file does not exist."<<endl;
    return 0;
  }
  while(true)
  {
    char ch=ifs.get();
    if(ch== -1)
    break;
    cout<<ch;
  }
  ifs.close();
  return 0;
}