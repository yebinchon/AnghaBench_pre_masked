
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int dummy; } ;
struct hostent {int dummy; } ;
typedef int addr ;


 scalar_t__ FUNC_0 (char const*,struct in_addr*) ;
 int FUNC_1 (char*,int,struct hostent**) ;
 int FUNC_2 (char const*,struct hostent**) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0, struct hostent **VAR_1) {
    struct in_addr VAR_2;
    if (FUNC_0(VAR_0, &VAR_2))
        return FUNC_1((char *) &VAR_2, sizeof(VAR_2), VAR_1);
    else
        return FUNC_2(VAR_0, VAR_1);
}
