#include<iostream>
#include<fstream>
#include<cstring>
#include<string>
#include<conio.h>
using namespace std;

class parent{
	public:
		string parent_name;
		string father_name;
		string mother_name;
		string husband_name;
		string wife_name;
		string alive_or_dead;
		string employee;
		string discribtion;
		string child_name;
		string boy_name;
		string daughter_name;
		string status;
		string education;

	
		void mainmenu(){
			cout<<"========================welcome======================="<<endl<<endl;
			cout<<"\t1.create family."<<endl;
			cout<<"\t2.search family."<<endl;
			
		}
		
		void data_to_create_family(){
			parent child;
			cout<<"\nenter husband name = ";
			getline(cin,child.husband_name);
			cout<<"\nenter wife name = ";
			getline(cin,child.wife_name);
			cout<<"\nenter paren name = ";
			cout<<"\n\tenter father name = ";
			getline(cin,child.father_name);
			cout<<"\n\tenter mother name = ";
			getline(cin,child.mother_name);
			
			
		}
		void creatfamily(){
			parent child;
			fstream f;
			f.open("family_timeline" , ios::binary);
			cout<<"\nFeed Information...";
			child.data_to_create_family();
			f.write((char*)&child , sizeof(child));
			f.close();
			
			
		}
		
};




int main(){
	parent parill;

	parill.mainmenu();
	int ch;
	cout<<"\nwhat would you like ???...";
	cin>>ch;
	cin.ignore();
	if(ch==1){
		parill.creatfamily();
	}
	
	
	
	
}
