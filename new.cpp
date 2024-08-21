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

    std::cout << "1. step by step backward\n";
    std::cout << "2. goto root directory\n";
    std::cout << "3. forward directory\n";
    std::cout << "Enter the number: ";
    int choice;
    std::cin >> choice;

        if(choice == 1) {
            _chdir("..");
        } else if (choice == 2){
            _chdir("\\");
        } else if (choice == 3) {
            std::cout << "Please enter the directory name: ";
            std::string dirName;
            std::cin >> dirName;
            _chdir(dirName.c_str());
        }
}

   
    


int main(){
    switch(choice){
        case 1:
      

        

    }
    
}
