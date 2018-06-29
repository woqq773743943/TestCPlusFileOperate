#include <fstream>
#include <iostream>
using namespace std;
void main() {
	ofstream out = ofstream("d:\\test.txt",ios::in | ios::out | ios::app);
	cout << "app" << ios::app << endl << "out" << ios::out << endl << "in"
		<< ios::in << endl << "trunc" << ios::trunc << endl << "binary"
		<< ios::binary << endl<<"ate" << ios::ate << endl;
	if (out.is_open())
		cout << "yes" << endl;
	out << "testone" << endl;
	ofstream outtest;
	outtest.open("d:\\test.txt",ios::in | ios::out | ios::app);
	if (outtest.is_open())
		cout << "test open" << endl;
	outtest << "testtwo" << endl;
	outtest.close();
	out.clear();
	getchar();
}