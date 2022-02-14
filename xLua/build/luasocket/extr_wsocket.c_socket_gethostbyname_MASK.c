
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct hostent* FUNC_1 (char const*) ;

int FUNC_2(const char *VAR_1, struct hostent **VAR_2) {
    *VAR_2 = FUNC_1(VAR_1);
    if (*VAR_2) return VAR_0;
    else return FUNC_0();
}
