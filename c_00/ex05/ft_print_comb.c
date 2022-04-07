#include <unistd.h>
void ft_print_comb(void);
int main (){
	ft_print_comb();
}
void ft_print_comb(void){
    int i, j, k;
    i = 0;
    j = 1;
    k = 2;
    while(i <= 7){
        while(j <= 9){
            if(k > 9){
                i++;
                j = i+1;
                k = j+1;
            }
            while(k <= 9){
                char a = i+'0';
                char b = j+'0';
                char c = k+'0';
                write(1, &a, 1);
                write(1, &b, 1);
                write(1, &c, 1);
                write(1, ",", 1);
                k++;
                if(k > 9){
                    j++;
                    k = j+1;
                }
            }
        }
    }
}
