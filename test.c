#include<iostream>

using namespace std;

class Test{
	private:
		string id;
	public:
		Test(string id){
			this->id = id;
		}
		void print(){
			cout<<id<<"\n";
		}
};
