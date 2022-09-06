/***************
	Anesu Mudzingwa
	David Busch
	C++ Lab 2: Exploring Output
	Due Date: 

****************/

#include <iostream>
#include <string>

using namespace std;

string m = "Monday";
string t = "Tuesday";
string w = "Wednesday";
string th = "Thursday";
string f = "Friday";

string intRel = " International Relations";
string comp = " Composition 1";
string stats = " Statistics";
string cPlus = " C++";
string vEdit = " Video Editing";

int main() 
{
	cout << m << "  8:00" << stats << endl;
	cout << m << "  10:00" << cPlus << endl;
	cout << m << "  11:45" << intRel << endl;
	cout << m << "  13:00" << comp << endl;

	cout << "\n";

	cout << t << "  8:00" << vEdit << endl;
	cout << t << "  10:00" << cPlus << endl;

	cout << "\n";


	cout << w << "  8:00" << stats << endl;
	cout << w << "  10:00" << cPlus << endl;
	cout << w << "  11:45" << intRel << endl;
	cout << w << "  13:00" << comp << endl;

	cout << "\n";


	cout << th << "  8:00" << vEdit << endl;
	cout << th << "  10:00" << cPlus << endl;

	cout << "\n";

	cout << f << "  8:00" << stats << endl;
	cout << f << "  10:00" << cPlus << endl;
	cout << f << "  11:45" << intRel << endl;
	cout << f << "  13:00" << vEdit << endl;

	return 0;
}