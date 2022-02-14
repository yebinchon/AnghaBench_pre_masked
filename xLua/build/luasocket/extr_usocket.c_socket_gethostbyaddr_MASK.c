
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {int dummy; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct hostent* FUNC_0 (char const*,int ,int ) ;
 int VAR_4 ;

int FUNC_1(const char *VAR_5, socklen_t VAR_6, struct hostent **VAR_7) {
    *VAR_7 = FUNC_0(VAR_5, VAR_6, VAR_0);
    if (*VAR_7) return VAR_1;
    else if (VAR_4) return VAR_4;
    else if (VAR_3) return VAR_3;
    else return VAR_2;
}
