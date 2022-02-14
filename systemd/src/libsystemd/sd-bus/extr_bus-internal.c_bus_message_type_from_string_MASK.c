
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

int FUNC_1(const char *VAR_5, uint8_t *VAR_6) {
        if (FUNC_0(VAR_5, "signal"))
                *VAR_6 = VAR_4;
        else if (FUNC_0(VAR_5, "method_call"))
                *VAR_6 = VAR_1;
        else if (FUNC_0(VAR_5, "error"))
                *VAR_6 = VAR_2;
        else if (FUNC_0(VAR_5, "method_return"))
                *VAR_6 = VAR_3;
        else
                return -VAR_0;

        return 0;
}
