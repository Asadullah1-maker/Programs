#include<iostream>
#include<windows.h>
using namespace std;
int main  ()
{
	   // Get the console handle
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Set text color to white
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    
    
	string j="0", J="0000";// k="0";
	cout<<"Hi! I'm Matrix 2.0.\nI will display infinite number of 1s and 0s.\n";
	//if (J=="0")
//sleep(2000);
	cout<<"Enter passcode to run the program.\n";
	cin>>j;
	//cout<<"Enter passcode to run the program.\n";
//	cin>>j;
if (j==J) {
 while (J==j) {     //while (j==0) {// && (k=="Y"||"Y");){
	cout<<"\a";
	cout<<"1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0\n";
    cout<<"0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1\n";
	
}
}
 else {
   cout<<"Please enter correct passcode"<<endl;
  //cin>>k;
return 0;
}
}



