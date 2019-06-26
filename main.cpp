#include "main.h"

int main(int argc, char ** argv){
	HashTable myTable;
	cout << "Beginning Test..." << endl;
	if(argc != 2){
		cout << "ERROR: Incorrect Arguments.\nPress any key to continue" << endl;
		cin.get();
	}
	else{
		ifstream file;
		file.open(argv[1]);
		
		if(!file){
			cout << "ERROR: File Not Found.\nPress any key to continue" << endl;
			cin.get();
		}
		else{
			cout << "\nIs table empty?... ";
			myTable.isEmpty() ? cout << "NOOOO?????" : cout << "yes";
			
			cout << "\nReading size of table: " << myTable.getCount() << endl;
			
			cout << "\nTransversing table...." << endl;
			myTable.transverse();
			
			cout << "\nAttempting to clear table... ";
			myTable.clear() ? cout << "SUCCESS???\n" << endl : cout << "failed (intentional)\n" << endl;
			
			cout << "Attempting to remove ID of 100... ";
			myTable.remove(100) ? cout << "SUCCESS??\n\n" : cout << "failed (intentional)\n\n";
			
			cout << "Reading Data From File..." << endl;
			string line;
			while(!file.eof()){
				getline(file, line);
				int comma = line.find(',');
								
				if(comma > 0){
					int id = stoi(trim(line.substr(0, comma)));
					string data = trim(line.substr(comma + 1));
					cout << "Inserting ID: " << id << " into table... ";
					myTable.add(id, data) ? cout << "success" << endl
					: cout << "FAILED" << endl;
				}
			}
			
			cout << "\nReading size of table: " << myTable.getCount() << endl;
			
			cout << "\nAdding ID 123 to the table... ";
			myTable.add(123, "testing") ? cout << "success" << endl : cout << "FAILED" << endl;
			cout << "Reading size of table: " << myTable.getCount() << endl;
			
			cout << "\nAdding ID 123 to the table AGAIN... ";
			myTable.add(123, "testing") ? cout << "SUCCESS??" << endl : cout << "failed (intentional)" << endl;
			cout << "Reading size of table: " << myTable.getCount() << endl;
			
			cout << "\nAdding ID 142 to the table (also remainder of 9)...";
			myTable.add(142, "testing") ? cout << "success" << endl : cout << "FAILED" << endl;
			cout << "Reading size of table: " << myTable.getCount() << endl;
			
			cout << "\nTransversing table..." << endl;
			myTable.transverse();
			
			cout << "\nRemoving ID 123...";
			myTable.remove(123) ? cout << "sucess\n" : cout << "FAILED";
			
			cout << "\nTable contains ID 142: ";
			myTable.contains(142) ? cout << "yes it does" : cout << "NO IT DOESN'T";
			cout << "\nRemoving ID 142...";
			myTable.remove(142) ? cout << "success\n" : cout << "FAILED";
			cout << "Table contains ID 142: ";
			myTable.contains(142) ? cout << "YES IT DOES???\n" : cout << "no it doesn't\n";
			
			cout << "\nReading size of table: " << myTable.getCount() << endl;
			
			cout << "\nIs table empty?... ";
			myTable.isEmpty() ? cout << "no" : cout << "YES?????";
			
			
			
		}
	}
}

string trim(string input){
	return input.substr(input.find_first_not_of(" \t"),
		input.find_last_not_of(" \t") + 1);
}