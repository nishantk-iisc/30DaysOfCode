#include <iostream>
#include <map>
using namespace std;

int main(){
	int n;
	cin >> n;
	string name;
	long num;
	map<string, long>phnbook;
	for(int i=0; i<n; i++){
		cin >> name;
		cin >> num;
		phnbook.insert(pair<string, long>(name, num));
	}
	while(cin >> name){
		if(phnbook.find(name) != phnbook.end()){
			cout << phnbook.find(name)->second << endl;
		}else{
			cout << "Not found" << endl;
		}
	}
	return 0;
}
