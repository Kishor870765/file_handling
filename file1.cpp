/*
WAP to read all characters from a file "myfile.txt"
*/

#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    ifstream ifs("myfile.txt");
    if(!ifs)
    {
        cout<<"The file does not exist"<<endl;
        return 0;
    }
    while(true)
    {
        char ch = ifs.get();
        if(ch == -1)
            break;
        cout<<ch;
    }
    ifs.close();
    return 0;
}

/*
2. WAP to count number of capital letters in the file "myfile.txt";
*/
