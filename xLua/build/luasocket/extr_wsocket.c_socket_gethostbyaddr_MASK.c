
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {int dummy; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 struct hostent* FUNC_1 (char const*,int ,int ) ;

int FUNC_2(const char *VAR_2, socklen_t VAR_3, struct hostent **VAR_4) {
    *VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_0);
    if (*VAR_4) return VAR_1;
    else return FUNC_0();
}
