#include<bits/stdc++.h>
using namespace std;
int main(){
	cout<<"\n\t\t----------Welcome to theNumber Guessing Game----------\n"<<endl;
	cout<<"\n\t\t-->>You will have to guess a number between 1 to 100."<<endl;
	cout<<"\n\t\t-->>Lets start playing and Best of Luck."<<endl;
	int randNumber = ( rand() %100) + 1;
	cout<<"\n## You will have a total of 5 chances to guess the correct number ##"<<endl;
	int chanceLeft = 5;
	int playerInput;
	
	for(int i=1;i<=5;i++){
		cout<<"\n--> Enter the Number : ";
		cin>>playerInput;
		
		if(playerInput == randNumber){
			
			cout<<"\n Congrats!!. Tou have successfully guessed tyhe right number."<<endl;
			cout<<"\n Thanks for playing. Have a Nice Day."<<endl;
			break;
		}
		else{
			if(playerInput > randNumber){
				cout<<"\n Please Insert a Smaller Number. Try Again."<<endl;
			}
			else{
				cout<<"\n Please Insert a Larger Number. Try Again."<<endl;
			}
		}
		chanceLeft--;
		cout<<"\n Chances left to guess the Random Number : "<<chanceLeft<<endl;
		
		if(chanceLeft ==0){
			cout<<"Sorry! Your chance has been finished to guess the random number."<<endl;
			cout<<"The Random Number was : "<<randNumber<<endl;
			cout<<"Thank for Playing have a nice day."<<endl;
		}
	}
	
	return 0;
}