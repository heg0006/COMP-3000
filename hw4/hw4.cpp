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

bool Aaron_alive = 0, Bob_alive = 0, Charlie_alive = 0;
const int A_shot = 3, B_shot = 2, runs = 10000;

bool two_alive(bool Aaron_alive, bool Bob_alive, bool Charlie_alive);
void first_aaron(bool& Bob_alive, bool& Charlie_alive);
void bob_shot(bool& Aaron_alive, bool& Charlie_alive);
void charlie_shot(bool& Aaron_alive, bool& Bob_alive);
void second_aaron(bool& Bob_alive, bool& Charlie_alive);

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
	cout << "Unit Testing 3: Function bob_shot(Aaron_alive, Charlie_alive)" << endl << "Case 1: Aaron alive, Charlie alive" << endl << "Bob is shooting at Charlie" << endl;
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
//Test Charlie's shot
void test4(void){
	cout << "Unit Testing 4: Function charlie_shot(Aaron_alive, Bob_alive)" << endl << "Case 1: Aaron alive, Bob alive" << endl << "Charlie is shooting at Bob" << endl;
	Aaron_alive = true;
	Bob_alive = true;
	charlie_shot(Aaron_alive, Bob_alive);
	assert(Aaron_alive == true);
	if(Bob_alive == true)
		cout << "error" << endl;
	else
		cout << "Bob is dead." << endl;
	cout << "Case 2: Aaron dead, Bob alive" << endl << "Charlie is shooting at Bob" << endl;
	Aaron_alive = false;
	Bob_alive = true;
	charlie_shot(Aaron_alive, Bob_alive);
	assert(Aaron_alive == false);
	if(Bob_alive == true)
		cout << "error" << endl;
	else
		cout << "Bob is dead." << endl;
	cout << "Case 3: Aaron alive, Bob dead" << endl << "Charlie is shooting at Aaron" << endl;
	Aaron_alive = true;
	Bob_alive = false;
	charlie_shot(Aaron_alive, Bob_alive);
	assert(Bob_alive == false);
	if(Aaron_alive == true)
		cout << "error" << endl;
	else
		cout << "Aaron is dead." << endl;
press_key();
return;
}
// Test Aaron's second shot
void test5(void){
	cout << "Unit Testing 5: Function second_aaron(Bob_alive, Charlie_alive)" << endl << "Case 1: Bob alive, Charlie alive" << endl << "Aaron intentionally misses his first shot" << endl;
	Bob_alive = true;
	Charlie_alive = true;
	second_aaron(Bob_alive, Charlie_alive);
	assert(Bob_alive == true);
	if(Charlie_alive == false)
		cout << "error" << endl;
	else
		cout << "Both Bob and Charlie are alive." << endl;
	cout << "Case 2: Bob dead, Charlie alive" << endl << "Aaron is shooting at Charlie" << endl;
	Bob_alive = false;
	Charlie_alive = true;
	second_aaron(Bob_alive, Charlie_alive);
	assert(Charlie_alive == false);
	if(Bob_alive == true)
		cout << "Aaron missed." << endl;
	else 
		cout << "Bob is dead." << endl;
press_key();
return;
}
bool two_alive(bool Aaron_alive, bool Bob_alive, bool Charlie_alive){

	if((Aaron_alive && Bob_alive) || (Aaron_alive && Charlie_alive) || (Bob_alive && Charlie_alive))
		return true;
	else
 		return false;
}
void first_aaron(bool& Bob_alive, bool& Charlie_alive){
	if(Charlie_alive)
		Charlie_alive = rand()%A_shot != 1;
	else
		B_alive = rand()%A_shot != 1;
return;
}
void bob_shot(bool& Aaron_alive, bool& Charlie_alive){
	if(Charlie_alive)
		Charlie_alive = rand()%B_shot != 1;
	else
		Aaron_alive = rand()%B_shot != 1;
return;
}
void charlie_shot(bool& Aaron_alive, bool& Bob_alive){
	if(Bob_alive)
		Bob_alive = false;
	else
		Aaron_alive = false;
return;
}
void second_aaron(bool& Bob_alive, bool& Charlie_alive){
	if((Bob_alive == true) && (Charlie_alive))
return;
	if(Charlie_alive)
		Charlie_alive = rand()%A_shot != 1;
	else
		Bob_alive = rand()%A_shot != 1;
return;
}	

int main(){
srand(time(0));
cout << "*** Welcome to Hannah Gladish's Duel Simulator ***" << endl;
two_alive();
test2();
test3();
test4();
test5();

double aaron_wins = 0;
double bob_wins = 0;
double charlie_wins = 0;
double strategy1;
double strategy2;

int i = 0;

cout << "Ready to test strategy 1(run " << runs << " times):" << endl;
press_key();
cout << ". . ." << endl << ". . ." << endl << ". . ." << endl;
while(i < runs){
	i = i + 1;
	Aaron_alive = true;
	Bob_alive = true;
	Charlie_alive = true;
while(two_alive(Aaron_alive, Bob_alive, Charlie_alive)){
	if(Aaron_alive == true)
		first_aaron(Bob_alive, Charlie_alive);
	if(Bob_alive == true)
		bob_shot(Aaron_alive, Charlie_alive);
	if(Charlie_alive == true)
		charlie_shot(Aaron_alive, Bob_alive);
}
	if(Aaron_alive == true)
		aaron_wins = aaron_wins + 1;
	if(Bob_alive == true)
		bob_wins = bob_wins +1;
	if(Charlie_alive == true)
		charlie_wins = charlie_wins + 1;
}

strategy1 = 100*aaron_wins/runs;
cout << "Aaron won " << aaron_wins << "/" << runs << " duels or " << strategy 1 << "%" << endl;
cout << "Bob won " << bob_wins << "/" << runs << " duels or " << 100*bob_wins/runs << "%" << endl;
cout << "Charlie won " << charlie_wins << "/" << runs << " duels or " << 100*charlie_wins/runs << "%" << endl;

aaron_wins = 0;
bob_wins = 0;
charlie_wins = 0;
i = 0;
cout << "Ready to test strategy 2 (run " << runs << " times):" << endl;
press_key();

cout << ". . ." << endl << ". . ." << endl << ". . ." << endl; 
while(i < runs){
i = i + 1;
Aaron_alive = true;
Bob_alive = true;
Charlie_alive = true;

while(two_alive(aaron_alive, bob_alive, charlie_alive)){
	if(Aaron_alive == true)
		second_aaron(Bob_alive, Charlie_alive);
	if(Bob_alive == true)
		bob_shot(Aaron_alive, Charlie_alive);
	if(Charlie_alive == true)
		charlie_shot(Aaron_alive, Bob_alive);
}
	if(Aaron_alive == true)
		aaron_wins = aaron_wins + 1;
	if(Bob_alive == true)
		bob_wins = bob_wins + 1;
	if(Charlie_alive == true)
		charlie_wins = charlie_wins + 1;
}
strategy2 = 100*aaron_wins/runs;
cout << "Aaron won " << aaron_wins << "/" << runs << " duels or " << strategy2 << "%" << endl;
cout << "Bob won " << bob_wins << "/" << runs << " duels or " << 100*bob_wins/runs << "%" << endl;
cout << "Charlie won " << charlie_wins << "/" << runs << " duels or " << 100*charlie_wins/runs << "%" << endl;
if (strategy1 > strategy2)
	cout << "Strategy 1 is better that strategy 2." << endl;
else
	cout << "Strategy 2 is better than strategy 1." << endl;
return 0;
}
