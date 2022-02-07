#include <iostream>
#include <string>
using namespace std;

// Function prototype
void WriteHellos(int*,int*);

int main() {

	// First Function call
    int n = 5;
    int lines = 3;
	WriteHellos(&n,&lines);

	cout << endl;

	// Second Function call
    n = 4;
    lines = 3;
	WriteHellos(&n,&lines);
    
	cout << endl;
    
	
	// Third Function call
    n = 5;
    lines = 11;
	WriteHellos(&n,&lines);
    
	cout << endl;
	

	// Last Function call
    n = 0;
    lines = 0;
    WriteHellos(&n,&lines);

    system("PAUSE");
	 return 0;
}

// Function headline and  body
void WriteHellos(int *n, int*lines){
	string row;

	//conditional to check for empty arguments
	if(*n==0 && *lines == 0){
	   cout << "No Hellos for You" << endl;
	}

	// for loop to display the values of the function
	for (int i=0; i<*lines;i++){

		for (int i=0; i<*n;i++){
			row += "hello ";
		}
		cout << row << endl;
		row = " ";
	};
	    

}
