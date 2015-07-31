#include<stdio.h>
#include<ctype.h>

int lengthOfLastWord(char* s) {
	int totalLen = strlen(s);
	int lastLen = 0;
	int count = 0;
	char *cp = s;
	int i;
	for(i = 0; i < totalLen ; i++){
		if(isalpha(*cp)) {
			if(!count) {
				count = 1;
				lastLen = 1;
			} else {
				lastLen++;
			}
		} else count = 0;
		cp++;
	}
	return lastLen;
}

int main() {
	char *s = " fhfrf ";
	printf("%d\n", lengthOfLastWord(s));
	return 0;
}
