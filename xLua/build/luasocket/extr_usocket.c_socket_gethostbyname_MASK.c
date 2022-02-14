
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hostent* FUNC_0 (char const*) ;
 int VAR_3 ;

int FUNC_1(const char *VAR_4, struct hostent **VAR_5) {
    *VAR_5 = FUNC_0(VAR_4);
    if (*VAR_5) return VAR_0;
    else if (VAR_3) return VAR_3;
    else if (VAR_2) return VAR_2;
    else return VAR_1;
}
