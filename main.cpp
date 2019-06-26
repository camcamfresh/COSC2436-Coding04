#include "main.h"

int main(int argc, char ** argv){
	HashTable myTable;
	if(argc != 2){
		cout << "Error: Incorrect Arguments.\nPress any key to continue" << endl;
		cin.get();
	}
	else{
		ifstream file;
		file.open(argv[1]);
		
		if(!file){
			cout << "Error: File Not Found.\nPress any key to continue" << endl;
			cin.get();
		}
		else{
			string line;
			while(!file.eof()){
				getline(file, line);
				int comma = line.find(',');
				if(comma > 0){
					myTable.add(stoi(line.substr(0, comma)), line.substr(comma + 1));
				}
			}
		}
	}
}