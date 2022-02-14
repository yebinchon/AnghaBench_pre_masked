
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; int tv_nsec; } ;
typedef int lua_State ;


 double VAR_0 ;
 double FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (struct timespec*,struct timespec*) ;

int FUNC_2(lua_State *VAR_1)
{
    double VAR_2 = FUNC_0(VAR_1, 1);
    struct timespec VAR_3, VAR_4;
    if (VAR_2 < 0.0) VAR_2 = 0.0;
    if (VAR_2 > VAR_0) VAR_2 = VAR_0;
    VAR_3.tv_sec = (int) VAR_2;
    VAR_2 -= VAR_3.tv_sec;
    VAR_3.tv_nsec = (int) (VAR_2 * 1000000000);
    if (VAR_3.tv_nsec >= 1000000000) VAR_3.tv_nsec = 999999999;
    while (FUNC_1(&VAR_3, &VAR_4) != 0) {
        VAR_3.tv_sec = VAR_4.tv_sec;
        VAR_3.tv_nsec = VAR_4.tv_nsec;
    }
    return 0;
}
