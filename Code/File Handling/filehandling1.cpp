#include <iostream>
#include <fstream>
using namespace std;
int main(){
    fstream FileHandle;
    FileHandle.open("test/FileName", ios::out);
    if (!FileHandle){
        cout<<"Error while writing the file";
    }
    else{
        cout<<"File created successfully";
        FileHandle.close();
    }
    return 0;
}
