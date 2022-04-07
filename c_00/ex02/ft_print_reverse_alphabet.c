#include <unistd.h>
void ft_print_reverse_alphabet(void);
int main(){
	ft_print_reverse_alphabet();
	return 0;
}
void ft_print_reverse_alphabet(void){
	char alph[26] = "zyxwvutsrqponmlkjihgfedcba";
	write(1, &alph, 26);}
