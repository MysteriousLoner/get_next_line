#include <unistd.h>
#include <stdio.h>
void ft_print_alphabet(void){
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	write(1, &alph, 26);
}

int main(){
	ft_print_alphabet();
	return 0;
}
