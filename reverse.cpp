#include <iostream>
#include <cstring>
char* reverse(char*);
int main()
{
	std::cout << "Enter the string : ";
	char s[50] = {};
	std::cin.getline(s, 50);
	std::cout << "Reversed string : " << reverse(s) << std::endl;
	return 0;
}
char* reverse(char* str) 
{
  int size = strlen(str);
	for (int j = 0; j < size / 2; ++j) {
		str[size - 1 - j] += str[j];
		str[j] = str[size - 1 - j] - str[j];
		str[size - 1 - j] -= str[j];
	}
	return str;
} 
