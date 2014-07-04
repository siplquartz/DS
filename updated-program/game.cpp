/*
Our tradition for these milestone exercises is to have a party, which means we need a game: so we write one. Today's exercise is to write an interactive rock-paper-scissors game: rock blunts scissors, paper wraps rock, scissors cut paper.
Your task is to write a program to play rock-paper-scissors with a human player, keeping score as you go.
*/
#include <iostream>
using namespace std;
class game{

  public:
           // Function for play game and give results
  	       playGame(){
                char robot[]= {'S','R','P'};
				int robotChoice = 0;
				int gameCount = 10;
				int count=1;
				char userChoice;
				int result=0;
                
                cout << "How many time you want to play game (in number) \n";
				
				if(cin >> gameCount){
				}else{
    	         cout << "Provide integer only";
                 std::exit(EXIT_FAILURE); 
                }  
				
				while(count <= gameCount){
				  cout << "Please give your choice from 'S' for scissors, 'R' for rock, 'P' for paper and 'X' for Exit \n";
				  cin >> userChoice;  
				 // cout<<  userChoice;
				  //std::exit(EXIT_FAILURE); 
                      

				  if(userChoice == 'S' || userChoice == 'R' || userChoice == 'P' || userChoice == 'X' ){
				   
					   if(userChoice == 'X')
					   	break;
					   if(robot[robotChoice] == userChoice)
					    result;
					   else if(robot[robotChoice] == 'S' && userChoice == 'R')
					   	result--;
					   else if(robot[robotChoice] == 'S' && userChoice == 'P')
					   	result++;
					   else if(robot[robotChoice] == 'R' && userChoice == 'S')
					    result--;
					   else if(robot[robotChoice] == 'R' && userChoice == 'P') 
					   result++;
					   else if(robot[robotChoice] == 'P' && userChoice == 'S') 
					   result++; 
					   else if(robot[robotChoice] == 'P' && userChoice == 'R') 
					   result--;
				 }else{

				 	cout<< "You provided wrong input \n";
				 }	

				cout<< "Robot choice is '" << robot[robotChoice] <<" ' and your result is ' "<< result << "'  \n";


				count ++;
				robotChoice++;
				if (robotChoice == 3)
				 robotChoice = 0;


				}

				cout << "\n Your result is " << result;


  	}


};




int main() {

   game g1;

   g1.playGame();

   return 0;
}
