#include <stdio.h>
#include <string.h>

int find(char *str,char c, char *sub) {
	int a = strchr(str,c)?strchr(str,c)-str:-1;
	int b=strstr(str,sub)?strstr(str,sub)-str:-1;

	return a+b;
}

int main(){
	char str[100];
	fgets(str,100,stdin);
	char c;
	scanf("%c",&c);
	char sub[20];
	scanf("%s",sub);
	int a = find(str,c,sub);
	printf("%d",a);
	return 0;
}
