#include <unistd.h>
void ft_print_numbers(void);
int main(){
	ft_print_numbers();
	return 0;
}
void ft_print_numbers(void){
	write(1, "1234567890", 10);
}
