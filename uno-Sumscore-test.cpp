#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
#include<string>
using namespace std;

string CardGame();
void sumscore(vector<string> );

int main(){
	srand(time(0));
	vector<string> HandCard(7);
	for(int i=0; i<7; i++){
		HandCard[i] = CardGame();
	}
	for(int i=0; i<7; i++){
		cout << HandCard[i] <<" ";
	}
	sumscore(HandCard);
	return 0;
}

string CardGame(){
	string card[108] = {"R:0","G:0","Y:0","B:0",
						"R:1","R:1","G:1","G:1","Y:1","Y:1","B:1","B:1","R:2","R:2","G:2","G:2","Y:2","Y:2","B:2","B:2",
						"R:3","R:3","G:3","G:3","Y:3","Y:3","B:3","B:3","R:4","R:4","G:4","G:4","Y:4","Y:4","B:4","B:4",
						"R:5","R:5","G:5","G:5","Y:5","Y:5","B:5","B:6","R:6","R:6","G:6","G:6","Y:6","Y:6","B:6","B:6",
						"R:7","R:7","G:7","G:7","Y:7","Y:7","B:7","B:7","R:8","R:8","G:8","G:8","Y:8","Y:8","B:8","B:8",
						"R:9","R:9","G:9","G:9","Y:9","Y:9","B:9","B:9",
						"R:+2","R:+2","G:+2","G:+2","Y:+2","Y:+2","B:+2","B:+2","R:Skip","R:Skip","G:Skip","G:Skip","Y:Skip","Y:Skip","B:Skip","B:Skip",
						"R:Rev","R:Rev","G:Rev","G:Rev","Y:Rev","Y:Rev","B:Rev","B:Rev","S:Wild","S:Wild","S:Wild","S:Wild","S:Wild4","S:Wild4","S:Wild4","S:Wild4"};
	string C;
	C = card[rand()%108];
    return C;
}
void sumscore(vector<string> HandCard){	
    int sum = 0,score =0;               
        for(int i=0 ; i<HandCard.size() ; i++){
            string card = HandCard[i].substr(2);
            if(card == "0") sum = 0;
            if(card == "1") sum = 1;
            if(card == "2") sum = 2; 
            if(card == "3") sum = 3; 
            if(card == "4") sum = 4; 
            if(card == "5") sum = 5; 
            if(card == "6") sum = 6;
            if(card == "7") sum = 7; 
            if(card == "8") sum = 8; 
            if(card == "9") sum = 9;
            if(card == "Skip") sum = 20;
            if(card == "Rev") sum = 20;
            if(card == "+2") sum = 20;
            if(card == "Wild") sum = 50;
            if(card == "Wild4") sum = 50;
			cout << "\n" << sum << "\t";
			score += sum;              
        }

    cout << "\n" << "score = " << score;
}
