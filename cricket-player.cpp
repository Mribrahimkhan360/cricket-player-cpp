#include<bits/stdc++.h>
using namespace std;

class cricket__palyer
{
public:
	string name;
	float score;
	int boll;
	int over;
	void display(){
		
		cout << "Name   : " <<name <<endl;
		cout<< "Score	: " <<score <<endl;
		cout<< "Boll 	: " <<boll <<endl;
		cout<< "Over 	: " <<over <<endl<<endl;
	}

};

int main()
{
	 //firstBlock
	 cricket__palyer objFirst;

	 objFirst.name = "Sakib All Hassa"; //good manner
	 objFirst.score = 58;
	 objFirst.boll = 24;
	 objFirst.over = 4;
	 objFirst.display();

	 //secondBlock
	 cricket__palyer objSecond;

	 objSecond.name = "Mashrafe Bin Mortaza"; //Good player
	 objSecond.score = 68;
	 objSecond.boll = 30;
	 objSecond.over = 5;
	 objSecond.display();

	 //thirdBlock
	 cricket__palyer objThird;

	 objThird.name = "Tamim Iqbal"; //respect him 
	 objThird.score = 43;
	 objThird.boll = 6;
	 objThird.over = 5;
	 objThird.display();
	 //thirdBlock
	 cricket__palyer objFourth;

	 objFourth.name = "Nasir Hossain ";//Third class and charset less player
	 objFourth.score = 0;
	 objFourth.boll = 0;
	 objFourth.over = 0;
	 objFourth.display();
	 //thirdBlock
	 cricket__palyer objFifth;

	 objFifth.name = "Mahmudullah ";//Good player
	 objFifth.score = 40;
	 objFifth.boll = 30;
	 objFifth.over = 7;
	 objFifth.display();

	 cricket__palyer objSix;

	 objSix.name = "Rubel Hossain ";//Good player
	 objSix.score = 10;
	 objSix.boll = 40;
	 objSix.over = 8;
	 objSix.display();


}