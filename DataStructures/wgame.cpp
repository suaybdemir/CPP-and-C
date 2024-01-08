#include <iostream>

using namespace std;

#include <string.h>

class Word{
	private:
	char * word;
	
	public:
	Word(char * w)
	{
		word = w;
	}
	void setWord(char *w)
	{
		this->word = w;
	}
	char *getWord()
	{
		return word;
	}
};
class Utility
{
	public :
	bool Output(Word w){
		int count = 0;
		
		char *ptr = w.getWord();
		
	
		while(*ptr != '\0')
		{
			count++;
			ptr++;
		}
		int i = 0;
		
		ptr =  w.getWord();	
		while(i<count-1)
		{
			char ch = *ptr;
			ptr;
			i += 1;
			if(ch==*ptr)
			{
				cout<<w.getWord()<<" is a incorrect input";
				return false;
			}
		}
		if(count%2==0)
		{
			cout<<w.getWord()<<" is a valid string";
			return true;
		}
		else
		{
			cout<<w.getWord()<<" is not a valid string";
			return true;
		}
		
		return true;
	}
};

int main(void)
{
	char text[20];
	cout<<"enter the string:"<<endl;
	cin>>text;
	
	Word obj(text);
	
	Utility u1;
	
	u1.Output(obj);
	
	
	return 0;
}
