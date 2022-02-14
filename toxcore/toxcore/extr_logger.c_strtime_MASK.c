
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;


 struct tm* FUNC_0 (int *) ;
 int FUNC_1 (char*,size_t,char*,struct tm*) ;
 int FUNC_2 (int *) ;

char *FUNC_3(char *VAR_0, size_t VAR_1)
{
    time_t VAR_2;
    struct tm *VAR_3;

    FUNC_2(&VAR_2);
    VAR_3 = FUNC_0(&VAR_2);

    FUNC_1(VAR_0, VAR_1, "%m:%d %H:%M:%S", VAR_3);
    return VAR_0;
}
