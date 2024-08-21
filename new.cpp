#include <string>
#include <iostream>
#include <cstdio> 
#include <cstdlib> 
#include <direct.h>
#include <windows.h>


namespace fs= std::filesystem;


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
    std::cout << "1. To display list of Files" << endl;
    std::cout << "2. To create new directory" << endl;
    std::cout << "3. To change the working directory" << endl;
    std::cout << "4. Exit" << endl;
    std::cout << "Enter a number: ";
    int choice;
    cin >> choice;

    if(choice == 1){
        std::cout << "\nList of all files\n";
        int count = 0;
    }
}

int main(){
    switch(choice){
        case 1:
        std::cout << "\nFile Details\n";
        std::cout << "1. List of files" << endl;
        std::cout << "2. List of extension files" << endl;
        std::cout << "3. list of name wise" << endl;
        break;

        case 2:
        

    }
    
}
