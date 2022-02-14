
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int units ;


 char* FUNC_0 (long double,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;

char *FUNC_1(long double VAR_2) {
    units *VAR_3 = &VAR_1;
    if (VAR_2 >= 1000000.0) {
        VAR_2 /= 1000000.0;
        VAR_3 = &VAR_0;
    }
    return FUNC_0(VAR_2, VAR_3, 2);
}
