#include <iostream>
using namespace std;
int main() 
{int boyut=0;
char word[100],rword[100];
cin>>word;
for(int a=0;;a++){
	if(word[a]!='\0'){
		boyut++;
	}
	else{break;
	}
}//cout<<"boyutu:"<<boyut<<endl;
//-------------
int bob=boyut;
boyut--;
bool d=true;
for(int i=0;;++i){
	if(boyut==-1){break;
	}
	rword[i]=word[boyut];
	boyut--;
	
	
}//cout<<"kelimenin tersi sudur:"<<rword<<endl;
int b;
for( b=0;bob>b;b++){
	if(word[b]!=rword[b]){
	cout<<"polindrom degildir";
	break;
	}
}
if(word[b]==rword[b]){
	cout<<"polindromdur";
}


    return 0;
}
