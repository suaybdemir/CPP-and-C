
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
	
	string str = "some string";
	
	str = str.substr(5,2);
	
	/*const char *cstr = str.c_str();
	
	printf("%s\n",str.c_str());
	
	printf("%ld\n",str.length());
	*/
	
	/*string str2 = str;
	
	str[0]='4';
	
	printf("%s",str2.c_str());*/
	
	return 0;
}
