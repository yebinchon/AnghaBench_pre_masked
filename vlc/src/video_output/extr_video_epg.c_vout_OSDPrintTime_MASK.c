
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_min; int tm_hour; } ;


 scalar_t__ FUNC_0 (char**,char*,int ,int ) ;
 int FUNC_1 (int *,struct tm*) ;

__attribute__((used)) static char * FUNC_2(time_t VAR_0)
{
    char *VAR_1;
    struct tm VAR_2;
    FUNC_1(&VAR_0, &VAR_2);
    if(FUNC_0(&VAR_1, "%2.2d:%2.2d", VAR_2.tm_hour, VAR_2.tm_min) < 0)
       VAR_1 = ((void*)0);
    return VAR_1;
}
