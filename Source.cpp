
#include <windows.h>
#include <iostream>
//setColor

void SetColor(int ForgC);
void menuAdmin();
void menuEmployee();

using namespace std;
int main() {
	menuAdmin();
	//menuEmployee();
	system("pause");
	return 0;
}

void menuEmployee() {
	int iOption;
	SetColor(10);
	cout << "\t\t*************************************************" << endl;
	cout << "\t\t*                                               *" << endl;
	cout << "\t\t*                 ";
	SetColor(14);
	cout << "EMPLOYEE LOGIN";
	SetColor(10);
	cout <<"                *" << endl;
	cout << "\t\t*                                               *" << endl;
	cout << "\t\t*************************************************" << endl;
	cout << endl;
	SetColor(12);
	cout << "\t\t=================================================" << endl;
	cout << "\t\t= "; SetColor(13); cout << "\t\t1. View my profile";SetColor(12); cout << "              =" << endl;
	cout << "\t\t= "; SetColor(13); cout << "\t\t2. Change password";SetColor(12); cout << "              =" << endl;
	cout << "\t\t= "; SetColor(13); cout << "\t\t3. Exit Application";SetColor(12); cout << "             =" << endl;
	SetColor(12);
	cout << "\t\t=================================================" << endl;
	SetColor(11);
	cout << "\n\t\t-Choose service: ";
	cin >> iOption;
}

void menuAdmin() {
	int iOption;
	SetColor(10);
	cout << "\t\t*************************************************" << endl;
	cout << "\t\t*                                               *" << endl;
	cout << "\t\t*                   ";
	SetColor(14);
	cout << "ADMIN LOGIN";
	SetColor(10);
	cout <<"                 *" << endl;
	cout << "\t\t*                                               *" << endl;
	cout << "\t\t*************************************************" << endl;
	cout << endl;
	SetColor(12);
	cout << "\t\t=================================================" << endl;
	cout << "\t\t= "; SetColor(13); cout << "\t\t1. Create new employee";SetColor(12); cout << "          =" << endl;
	cout << "\t\t= "; SetColor(13); cout << "\t\t2. Find employee";SetColor(12); cout << "                =" << endl;
	cout << "\t\t= "; SetColor(13); cout << "\t\t3. Edit employee";SetColor(12); cout << "                =" << endl;
	cout << "\t\t= "; SetColor(13); cout << "\t\t4. View employee";SetColor(12); cout << "                =" << endl;
	cout << "\t\t= "; SetColor(13); cout << "\t\t5. Exit Application";SetColor(12); cout << "             =" << endl;
	SetColor(12);
	cout << "\t\t=================================================" << endl;
	SetColor(11);
	cout << "\n\t\t-Choose service: ";
	cin >> iOption;
}

void SetColor(int ForgC) 
{ 
    WORD wColor; 

     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE); 
     CONSOLE_SCREEN_BUFFER_INFO csbi; 

         //We use csbi for the wAttributes word. 
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi)) 
    { 
       //Mask out all but the background attribute, and add in the forgournd  color 
      wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F); 
      SetConsoleTextAttribute(hStdOut, wColor); 
    } 
    return; 
} 