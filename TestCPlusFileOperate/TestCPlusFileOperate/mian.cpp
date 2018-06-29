#include <fstream>
#include <iostream>
using namespace std;
void main() {
	fstream file1 = fstream("d:\\file.txt", ios::in | ios::out);
	if (file1.is_open())
		cout << "in out yes" << endl;
	fstream file2 = fstream("d:\\file1.txt", ios::in | ios::out | ios::app);
	if (file2.is_open()) {
		cout << "in out app yes" << endl;
		file2 << "FILE2" << endl;
	}
	fstream file3 = fstream("d:\\file2.txt", ios::in | ios::out | ios::trunc);
	if (file3.is_open()){
		file3 << "FILE3" << endl;
		cout << "in out trunc yes" << endl;
	}
}