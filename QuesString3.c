#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
 
bool checkvowel(char ch){
        if(ch=='a' || ch =='e' || ch=='i' || ch=='o' || ch=='u') return true;
        return false;
}
 
int main(){
        char str[100];
        int count=0,cn=0,ccn=0;
        printf("enter a string: ");
        scanf("%s", str);
        for(int i=0;i<strlen(str);i++){
                if(!checkvowel(str[i])) cn++;
        }
 
        int i=0;
        while(i<strlen(str) && i!= strlen(str)-1){
                if(checkvowel(str[i])){
                        if(ccn>cn) count++;
 
                }else{
                        ccn++;
                        cn--;
                        if(ccn>cn) count++;
                }
 
                i++;
        }
        printf("partiotions are: %d\n", count);
        return 0;
 
}
