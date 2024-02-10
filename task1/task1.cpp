
#include <fstream>
using namespace std;
#include <iostream>
#include <stdio.h>
#include <fstream>
#include<string>
int Empty(ifstream& t, int emptylines=0) {
	string line;
	if (!getline(t, line)) {
		return emptylines;
	}
	if (line.empty()) {
		return Empty(t, emptylines + 1);
	}
	else {
		return emptylines;
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	ifstream file ("text.txt");
	if (file.is_open()) {
		int emptiLines = Empty(file);
		cout << "Количество пустых строк перед текстом "<< emptiLines << endl;

		file.close();
	}
	else {
		cout<<"Не удалось открыть файл"<< endl;
	}
	return 0;
}

