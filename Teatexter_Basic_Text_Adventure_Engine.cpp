/*Flyer's text adventure engine/toolkit TeaTexter ver 1.0 
Be sure to pause(); if you ever use cin. You'll find that if you don't it skips one of the text lines.
*/
#include <iostream>
#include <string>
using namespace std;

void pause(){
	int pause;
	pause = getc(stdin);
}

class Member
{
	public:
		string name;
		void say(string msg);
		string ask(string question);
};
void Member::say(string msg)
{
	cout << name << ": " <<msg;
	pause();
}
string Member::ask(string question){
	string answer;
	cout << name << ": " << question << endl;
	cin >> answer;
return answer;
}

/*Chapters. Pass the characters (Members) used for that chapter.
void chapter1(Member example){

}*/

int main(){
	
	
	
return(0);
}
