#include <string>
#include <iostream>
#include <cstdio> 
#include <cstdlib> 
#include <direct.h>
#include <windows.h>


    void displayFiles(){
        system("dir);   
        system("pause"); //mag pause kadyot ang screen
    }
void createDirectory(){
    std::cout << "\nEnter the directory name: ";
    std::string dirName;
    std::cin >> dirName;

        if(_mkdir(dirName.c_str()) == 0){
            std::cout << "\nDirectory " << dirName << " Successfully Created\n";
        }else {
            std::cout << "\nFailed to created directory " << dirName << "\n";
        }
    system("pause");
}

void changeDirectory(){
    char currentDir[FILENAME_MAX];
    _getcwd(currentDir, sizeof(currentDir));
    std::cout << "\nCurrent directory: " << currentDir << "\n";
    
}

   
    


int main(){
    switch(choice){
        case 1:
        std::cout << "\nFile Details\n";
        std::cout << "1. List of files" << endl;
        std::cout << "2. List of extension files" << endl;
        std::cout << "3. list of name wise" << endl;
        break;

        

    }
    
}
