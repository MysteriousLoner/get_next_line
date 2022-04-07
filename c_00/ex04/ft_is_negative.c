#include <unistd.h>
void ft_is_negative(int n);
int main(){
	int n = 1;
	ft_is_negative(n);
}
void ft_is_negative(int n){
	char result;
	result = (n >= 0) ? 'P' : 'N';
	write(1, &result, 1);
}

