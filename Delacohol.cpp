#include<iostream>
#include <fstream>
#include<string>




	using namespace std;
	int option,age;
	double x,y,z;
	double total;

	struct data{
    std::string name[100];
    std::string c;
    
};
	





int main(){
data input;  //declare the struct
int i=0;	// to start the array from zero

ofstream myfile ("Database.doc",fstream::app);		//to command make a file
  if (myfile.is_open())			//if to open the file
  {
    //top banner
	std::cout<< "\t\t Welcome To Breath Analyzer Calculation Database\t\t\n"		
		 <<"\t\t-------------------------------------------------\n\n\n"
		 <<"Please Select     : "
		 <<"\t1. New Member "<<" 2. List  \n"
		 <<"\t\t\t\t   OR\n"
		 <<"\t\t\tPress Another Key To Close\n\n";
	std::cout<<"Your Chosen Number:  ";
	std::cin>> option;
	cin.ignore();	//to ignore on buffer	
	
	if(option == 2){			//if the program doesnt have any database
	cout<<"Sorry, No list\n\n";
	std::cin.get();		//tweak for .exe
	std::cout<< "\t\t Welcome To Breath Analyzer Calculation Database\t\t\n"
		 <<"\t\t-------------------------------------------------\n\n\n"
		 <<"Please Select     : "
		 <<"\t1. New Member "<<" 2. List  \n"
		 <<"\t\t\t\t   OR\n"
		 <<"\t\t\tPress Another Key To Close\n\n";
	std::cout<<"Your Chosen Number:  ";
	std::cin>> option;
	cin.ignore();	//to ignore on buffer	
	
	}		//close if option == 2

	while(option == 1 ){ //open while to acquire data
	
	
	std::cout<<"Name : ";
	myfile << "Name: ";
	getline(std::cin,input.name[i]);
	myfile << (input.name[i]);
	myfile << "\n";
	
	std::cout<<"Age : ";
	myfile << "Age: ";
	std::cin>>age;
	myfile << (age);
	myfile << "\n";
	
	std::cout<<"Percentage : ";
	myfile<<"Percentage : ";
	cin>>x;
	myfile <<(x);
	myfile << "\n";
	
	
		//information based on inputed BAC data
		
		if(x >= 0.02 && x <=0.05){
			std::cout<<"Indication:\n\n1.Feel relaxed.\n";
			std::cout<<"2.Experience altered mood.\n";
			std::cout<<"3.Feel a little warmer.\n";
			std::cout<<"4.May make poor judgement.";
			myfile<<"Indication:\n1.Feel relaxed.\n";
			myfile<<"2.Experience altered mood.\n";
			myfile<<"3.Feel a little warmer.\n";
			myfile<<"4.May make poor judgement.\n";
			myfile<<"\n";
		}
		else if(x > 0.05 && x <=0.08){
			std::cout<<"Indication:\n1.Behavior become exaggerated.\n";
			std::cout<<"2.Speak louder and gesture more.\n";
			std::cout<<"3.Lose control of small muscle.\n";
			std::cout<<"4.Vision becomes blurry\n";
			std::cout<<"5.Judgement impaired\n";
			std::cout<<"6.Coordination reduced.\n";
			std::cout<<"7.Difficult to track object visually.\n";
			std::cout<<"8.Reduce in ability to respond to emergencies.\n";
			std::cout<<"9.Lower inhibitions.\n";
			myfile<<"Indication:\n1.Behavior become exaggerated.\n";
			myfile<<"2.Speak louder and gesture more.\n";
			myfile<<"3.Lose control of small muscle.\n";
			myfile<<"4.Vision becomes blurry\n";
			myfile<<"5.Judgement impaired\n";
			myfile<<"6.Coordination reduced.\n";
			myfile<<"7.Difficult to track object visually.\n";
			myfile<<"8.Reduce in ability to respond to emergencies.\n";
			myfile<<"9.Lower inhibitions.\n";
			myfile<<"\n";			
		}
		else if(x > 0.08 && x <=0.1){
			std::cout<<"Indication:\n1.Lose more coordination (balance, speech, reaction time, hearing).\n";
			std::cout<<"2.Difficult to stand still.\n";
			std::cout<<"3.Hard to focus on objects.\n";
			std::cout<<"4.Difficult on evading obstacles.\n";
			std::cout<<"5.Reasoning, judgement, self-control, concentration and memory impaired.\n";
			std::cout<<"6.Short term memory loss may start.\n";
			myfile<<"Indication:\n1.Lose more coordination (balance, speech, reaction time, hearing).\n";
			myfile<<"2.Difficult to stand still.\n";
			myfile<<"3.Hard to focus on objects.\n";
			myfile<<"4.Difficult on evading obstacles.\n";
			myfile<<"5.Reasoning, judgement, self-control, concentration and memory impaired.\n";
			myfile<<"6.Short term memory loss may start.\n";
			myfile<<"\n";
		}
		else if(x > 0.1 && x <=0.15){
			std::cout<<"Indication:\n1.Reaction time and control reduced.\n";
			std::cout<<"2.Speech will be slurred\n";
			std::cout<<"3.Thinking and reasoning become slower.\n";
			std::cout<<"4.Poor body coordination.\n";
			myfile<<"Indication:\n1.Reaction time and control reduced.\n";
			myfile<<"2.Speech will be slurred\n";
			myfile<<"3.Thinking and reasoning become slower.\n";
			myfile<<"4.Poor body coordination.\n";			
			myfile<<"\n";
		}
		else if(x > 0.15 && x <=0.2){
			std::cout<<"Indication:\n1.Less control over balance and voluntary muscle.\n";
			std::cout<<"2.Walking and talking are difficult.\n";
			std::cout<<"3.May fall and hurt own self.\n";
			std::cout<<"4.Vomiting.\n";	
			myfile<<"Indication:\n1.Less control over balance and voluntary muscle.\n";
			myfile<<"2.Walking and talking are difficult.\n";
			myfile<<"3.May fall and hurt own self.\n";
			myfile<<"4.Vomiting.\n";			
			myfile<<"\n";
		}
		else if(x > 0.2 && x <=0.25){
			std::cout<<"Indication:\n1.Confusion.\n";
			std::cout<<"2.Feeling dazed.\n";
			std::cout<<"3.Disorientation.\n";
			std::cout<<"4.Need help for standing and walking.\n";	
			std::cout<<"5.Balance and muscle deteriorated.\n";
			std::cout<<"6.Sensation of pain reduced.\n";
			std::cout<<"7.Nausea and vomiting.\n";
			std::cout<<"8.Gag reflex impaired.\n";
			myfile<<"Indication:\n1.Confusion.\n";
			myfile<<"2.Feeling dazed.\n";
			myfile<<"3.Disorientation.\n";
			myfile<<"4.Need help for standing and walking.\n";	
			myfile<<"5.Balance and muscle deteriorated.\n";
			myfile<<"6.Sensation of pain reduced.\n";
			myfile<<"7.Nausea and vomiting.\n";
			myfile<<"8.Gag reflex impaired.\n";
			myfile<<"\n";
		}
		else if(x > 0.25 && x <=0.3){
			std::cout<<"Indication:\n1.Physical, mental, emotional and sensory impaired.\n";
			std::cout<<"2.Feel numb on many levels.\n";
			std::cout<<"3.High risk of choking on vomit.\n";
			std::cout<<"4.Falling and hurting own self.\n";	
			std::cout<<"5.Killing own self unintentionally.\n";
			myfile<<"Indication:\n1.Physical, mental, emotional and sensory impaired.\n";
			myfile<<"2.Feel numb on many levels.\n";
			myfile<<"3.High risk of choking on vomit.\n";
			myfile<<"4.Falling and hurting own self.\n";	
			myfile<<"5.Killing own self unintentionally.\n";
			myfile<<"\n";
		}
		else if(x > 0.3 && x <=0.35){
			std::cout<<"Indication:\n1.Stupor may set in (brain shutting down).\n";
			std::cout<<"2.Unresponsive to nearly all stimuli.\n";
			std::cout<<"3.Very little recognition or understanding people or remembering places.\n";
			myfile<<"Indication:\n1.Stupor may set in (brain shutting down).\n";
			myfile<<"2.Unresponsive to nearly all stimuli.\n";
			myfile<<"3.Very little recognition or understanding people or remembering places.\n";
			myfile<<"\n";
		}
		else if(x > 0.35 && x <=0.4){
			std::cout<<"Indication:\n1.Level of impairment similar to that achieved by surgical anesthesia.\n";
			std::cout<<"2.Very likely to pass out.\n";
			std::cout<<"3.May stop breathing.\n";
			myfile<<"Indication:\n1.Level of impairment similar to that achieved by surgical anesthesia.\n";
			myfile<<"2.Very likely to pass out.\n";
			myfile<<"3.May stop breathing.\n";
			myfile<<"\n";
		}
		else if(x>0.4){
			std::cout<<"Indication:\n1.Coma.\n";
			std::cout<<"2.Cause sudden death.\n";
			std::cout<<"3.Heart or breathing suddenly stop.\n";
			myfile<<"Indication:\n1.Coma.\n";
			myfile<<"2.Cause sudden death.\n";
			myfile<<"3.Heart or breathing suddenly stop.\n";
			myfile<<"\n";
		}
		 else{
			std::cout<<"your data not found";
		}		//close while and if
	
	cin.ignore(); //to ignore on buffer	
	
	//add some comment 
	std::cout << "\nPut your comment: ";
  	getline(std::cin,input.c);
	myfile << "Comment : ";
  	myfile << (input.c);
	myfile << "\n";
	std::cout<<endl<<endl;
	
	
		//repeated command if option == 1
	
	if(option == 1){
	i++;
	std::cout<< "\t\t Welcome To Breath Analyzer Calculation Database\t\t\n"
		 <<"\t\t-------------------------------------------------\n\n\n"
		 <<"Please Select     : "
		 <<"\t1. New Member "<<" 2. List  \n"
		 <<"\t\t\t\t   OR\n"
		 <<"\t\t\tPress Another Key To Close\n\n";
	std::cout<<"Your Chosen Number:  ";
	std::cin>> option;
	cin.ignore();	//to ignore on buffer	
	}
		
		// do the listing if program have a data
		
	if(option == 2){	//open if
		for(int k=0;k<i+1;k++){
			cout<< k+1<<". "<<input.name[k]<<"\n";			
			} //close for
	std::cout<< "\t\t Welcome To Breath Analyzer Calculation Database\t\t\n"
		 <<"\t\t-------------------------------------------------\n\n\n"
		 <<"Please Select     : "
		 <<"\t1. New Member "<<" 2. List  \n"
		 <<"\t\t\t\t   OR\n"
		 <<"\t\t\tPress Another Key To Close\n\n";
	std::cout<<"Your Chosen Number:  ";
	std::cin>> option;
	cin.ignore();	//to ignore on buffer	
	}	//close if
	
	
	
	
	

	


    

	
	std::cout<<endl;
		

	
	myfile<<"\n";
	myfile<<"\n";
	myfile<<"\n";
	
}	
	
	std::cin.get();		//tweak for .exe
	//print before program closed
	
	cout<<"Thank You";
	
	
	

		
	
	
	

     myfile.close(); 		//close the file
  }
  else std::cout << "Unable to open file";
  std::cin.get();		//tweak for .exe
  return 0;

		
}


 
  
  




	
 
