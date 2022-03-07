#include <iostream>
#define p(x) cout << x 
#define pendl(x) cout << x << endl
#include <chrono>
#include <thread>
#include<cstring>
#include <string>
#include<dos.h> 
#include <chrono>
#include <thread>
#include<windows.h>
using namespace std;
using namespace std::chrono;
int randomindex = rand() % 7;
//INSERT YOUR ANSWER ON LINE 18 
//INSERT YOUR ANSWER ON LINE 18 
//INSERT YOUR ANSWER ON LINE 18 
string ans = "shit";
int tries = 10;
char corchar;
char guess;
int stringlen = ans.length();
string underscores;
int tempindex = NULL;
bool correct = false;
int oddnums[] = { 1,3,5,7,9,11,13,15,17,19,21,23,25,29,31,33,35,37,39 };
char attemptedchars[];
int correctattempts = 0;
int boolcorrect = 0; // 0 is false, 1 is true
bool initialised = false;
int cornum = 0;
void underscoreverb() {
	for (int i = 1; i <= stringlen; i++) {
		underscores.append("_");
	}
}
void findnhunt() {
	for (int i = 0; i <= stringlen; i++) {
		if (ans[i] != guess) {
			bool correct = false;
		}
		else {
			bool correct = true;
			underscores[i] = guess;
			corchar = underscores[i];
			cornum++;
		}
	}
}
void coratmp() {
	if (true) {
		cout << "Correct attempts: " << cornum << endl;
	}
}
void ask() {
	cout << "Enter your guess: ";
	cin >> guess;
}
void drawman() {
	cout << endl;
	cout << "  +---+" << endl;
	if (tries < 8) cout << "  |   |" << endl; else cout << "  |    " << endl;
	if (tries < 6) cout << "  |   O" << endl; else cout << "  |   " << endl;
	if (tries < 4) cout << "  |  /|\\" << endl; else cout << "  |  " << endl;
	if (tries < 2) cout << "  |   |" << endl; else cout << "  |  " << endl;
	if (tries == 0) cout << "  |  / \\" << endl; else cout << "  |  " << endl;
	cout << "  |   " << endl;
	cout << " _|________" << endl;
	cout << endl;
}
//INSERT YOUR ANSWER ON LINE 16 
//INSERT YOUR ANSWER ON LINE 16 
int main() {
	string failedattempts;
	cout << correct;
	underscoreverb();
	initialised = true;
	while (tries != 0) {
		if (cornum == ans.length()) {
			system("cls");
			cout << " O" << endl;
			cout << "\\|/" << endl;
			cout << " | " << endl;
			cout << " | " << endl;
			cout << "/ \\" << endl;
			p("BOB IS SAAAAVED!!!!!!!!!!");
			Sleep(5);
			exit(0);
		}
		system("cls");
		coratmp();
		//cout << "Incorrect guesses: ";
		//cout << failedattempts << endl;
		cout << "Length:" << ans.length() << endl;
		cout << "The word -----> "; cout << underscores << endl;
		cout << tries; cout << " tries remaining." << endl << endl;
		drawman();
		ask();
		findnhunt();
		if (guess != corchar) {
			tries--;
			p("Wrong guess :(");
			//failedattempts.append(guess + ", ");
			Sleep(100);
		}
		else if (guess = corchar) {
			cout << "You got one right!";
			correctattempts++;
			Sleep(1000);

		}
	}
	//INSERT YOUR ANSWER ON LINE 16 
	//INSERT YOUR ANSWER ON LINE 16 
	if (tries == 0) {
		system("cls");
		drawman();
		cout << endl; cout << endl;
		cout << " x x" << endl;
		cout << "  - " << endl;
		p("Oh no Bob died.");
		exit(0);
	}
}
