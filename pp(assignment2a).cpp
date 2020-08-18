#include <iostream>
using namespace std;

typedef struct comp
{
   float rl,ig;
};
comp add(comp n1, comp n2)
{
   comp t;
   t.rl = n1.rl + n2.rl;
   t.ig = n1.ig + n2.ig;
   return t;
}
int main()
{
	int h;
do{

   	comp n1, n2, s;
   	cout<<"Enter first complex no. real then imaginary part resp.: \n";
   	cin>>n1.rl>>n1.ig;
   
   	cout<<"Enter second complex no. real then imaginary part resp.: \n";
   	cin>>n2.rl>>n2.ig;
   
   	s = add(n1, n2);

   	if(s.ig >= 0)
   	cout<<"Sum of the complex no.: "<<s.rl<<" + "<<s.ig <<"i";
   	else
   	cout<<"Sum of the complex no.: "<<s.rl <<" + ("<<s.ig <<")i";
   	

cout<<"\n\nIF U WANT TO CONTINUE PRESS 1 IF NOT THAN PRESS ANY KEY: \n";
cin>>h;
}
while(h==1);
}
