#include <iostream>
#include <string>

using namespace std;

int main()
{
    int age;
	string Beautiful;
	string Friendly;
	string decision;
	char gender;

	cout<< "what's your age ?"<<endl;
	cin>> age;
	cout<< "Gender f/m?"<<endl;
	cin>> gender;

	cout<<"is the person Beautiful? Yes/No"<<endl;
	cin>> Beautiful;
	cout<<"is the person Friendly? Yes/No"<<endl;
	cin>> Friendly;


	if( age >=18 && age <= 30){
	  if(gender == 'male'){
	  	if(Beautiful == "Yes" || Friendly == "Yes"){
	  		cout<< "DO YOU LIKE THIS PERSON?";
	  		cin>>decision;
	  		if( decision == "yes"){
	  			cout<<"YOU ARE MY TYPE";
			  }
			  else if(decision == "no"){
			  	cout<<"TRY ANOTHER PERSON";
		}

		  }
		  else{
		  	cout<<"NOT MY TYPE";
		  }

	  }
	  else if(gender == 'f'){
	  		if(Beautiful == "Yes" || Friendly == "Yes"){
	  		cout<< "DO YOU LIKE THIS PERSON?";
	  		cin>>decision;

	  		if( decision == "yes"){
	  			cout<<"YOU ARE MY TYPE";
			  }
			  else if(decision == "no"){
			  	cout<<"TRY ANOTHER PERSON";
			  }

		  }
		  else{
		  	cout<<"NOT MY TYPE";
		  }

	  }

	}
	else{
		cout<< "YOU ARE UNDER AGE";

	}
    return 0;
}
