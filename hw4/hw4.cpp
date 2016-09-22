// Name: Hannah Gladish
// filename: hw4.cpp
// Development environment: vim, g++, Linux
// Compile: g++ -o hw4 hw4.cpp
// Sample usage: ./hw4


#include <iostream> 
#include <iomanip>
#include <stdlib.h>
#include <assert.h>
#include <ctime>

using namespace std;

int main(){

bool Aaron_alive = 0, Bob_alive = 0, Charlie_alive = 0;
const int A_shot = 3, B_shot = 2, runs = 10000;
const bool 

bool two_alive(bool Aaron_alive, bool Bob_alive, bool Charlie_alive);
void first_aaron(bool& Bob_alive, bool& Charlie_alive);
void bob_shot(bool& Aaron_alive, bool& Charlie_alive);
void charlie_shot(bool& Aaron_alive, bool& Bob_alive);
void second_aaorn(bool& Bob_alive, bool& Charlie_alive);

void press_key(void){

cout << "Press any key to continue...";
cin.ignore().get();
cout << endl << endl;
return;
}

void two_alive(void){
	cout << "Unit Testing 1: Function - two_alive()" << endl;
	cout << "Case 1: Aaron alive, Bob alive, Charlie alive" << endl;
	assert(true == two_alive(true, true, true));
	cout << "Case passed ..." << endl;
	cout << "Case 2: Aaron dead, Bob alive, Charlie alive" << endl;
	assert(true == two_alive(false, true, true));
	cout << "Case passed ..." << endl;
	cout << "Case 3: Aaron alive, Bob dead, Charlie alive" << endl;
	assert(true == two_alive(true, false, true));
	cout << "Case passed ..." << endl;
	cout << "Case 4: Aaron alive, Bob alive, Charlie dead" << endl;
	assert(true == two_alive(true, true, false));
	cout << "Case passed..." << endl;
	cout << "Case 5: Aaron dead, Bob dead, Charlie alive" << endl;
	assert(true == two_alive(false, false, true));
	cout << "Case passed ..." << endl;
	cout << "Case 6: Aaron dead, Bob alive, Charlie dead" << endl;
	assert(true == two_alive(false, true, false));
	cout << "Case passed ..." << endl;
	cout << "Case 7: Aaron alive, Bob dead, Charlie dead" << endl;
	assert(true == two_alive(true, false, false));
	cout << "Case passed ..." << endl;
	cout << "Case 8: Aaron dead, Bob dead, Charlie dead" << endl;
	assert(true == two_alive(false, false, false));
	cout << "Case passed ..." << endl;
press_key();
return;
}
//Testing Aaron's first shot
void test2(void){
	cout << "Unit Testing 2: Function first_aaron(Bob_alive, Charlie_alive" << endl << "Case 1: Bob alive, Charlie alive" << "Aaron is shooting at Charlie" << endl;
	Bob_alive = true;
	Charlie_alive = true;
	first_aaron(Bob_alive, Charlie_alive);
	assert(Bob_alive == true);

	if(Charlie_alive == true)
		cout << "Aaron missed." << endl;
	else	
		cout << "Charlie is dead." << endl;
	cout << "Case 2: Bob dead, Charlie alive" << endl << "Aaron is shooting at Charlie" << endl;
	Bob_alive = false;
	Charlie_alive = true;
	first_aaron(Bob_alive, Charlie_alive);
	assert(Bob_alive == false);
	if(Charlie_alive == true);
		cout << "Aaron missed." << endl;
	else	
		cout << "Charlie is dead" << endl;
	cout << "Case 3: Bob alive, Charlie dead" << endl << "Aaron is shooting at Charlie" << endl;
	Bob_alive = true;
	Charlie_alive = false;
	first_aaron(Bob_alive, Charlie_alive);
	assert(Charlie_alive == false);
	if(Bob_alive == true)
		cout << "Aaron missed" << endl;
	else
		cout << "Charlie is dead" << endl;
press_key();
return;
}
//Test Bob's shot
void test3(void){
	cout << "Unit Testing 3: Function(bob_shot(Aaron_alive, Charlie_alive)" << endl << "Case 1: Aaron alive, Charlie alive" << endl << "Bob is shooting at Charlie" << endl;
	Aaron_alive = true;
	Charlie_alive = true;
	bob_shot(Aaron_alive, Charlie_alive);
	assert(Aaron_alive == true);
	if(Charlie_alive == true)
		cout << "Bob missed." << endl;
	else
		cout << "Charlie is dead" << endl;
	cout << "Case 2: Aaron dead, Charlie alive" << endl << "Bob is shooting at Charlie" << endl;
	Aaron_alive = false;
	Charlie_alive = true;
	bob_shot(Aaron_alive, Charlie_alive);
	assert(Aaron_alive == false);
	if(Charlie_alive == true)
		cout << "Bob missed." << endl;
	else
		cout << "Charlie is dead." << endl;
	cout << "Case 3: Aaron alive, Charlie dead" << endl << "Bob is shooting at Aaron" << endl;
	Aaron_alive = true;
	Charlie_alive = false;
	bob_shot(Aaron_alive, Charlie_alive);
	assert(Charlie_alive == false);
	if(Aaron_alive == true)
		cout << "Bob missed." << endl;
	else
		cout << "Aaron is dead." << endl;
press_key();
return;
}
