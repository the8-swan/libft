#include "libft.h"


int ft_atoi(const char *str){
        size_t i=0;
        int result =0;
        int sign =1;
            while((str[i]>=9 && str[i]<=13) || str[i]==32)
                i++;
            if(str[i]== '-' || str[i]=='+'){
                if(str[i]=='-')
                    sign = -1;
                i++;
            }
            while(str[i]>='0' && str[i]<='9'){
                result = result *10 + str[i] - '0';
                i++;
            }
            return result*sign;
}