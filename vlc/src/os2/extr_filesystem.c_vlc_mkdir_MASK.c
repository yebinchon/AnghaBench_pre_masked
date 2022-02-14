
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;


 int VAR_0 ;
 char* FUNC_0 (char const*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (int ) ;

int FUNC_4 (const char *VAR_2, mode_t VAR_3)
{
    char *VAR_4 = FUNC_0 (VAR_2);
    if (FUNC_3(VAR_4 == ((void*)0)))
    {
        VAR_1 = VAR_0;
        return -1;
    }

    int VAR_5 = FUNC_2 (VAR_4, VAR_3);
    FUNC_1 (VAR_4);
    return VAR_5;
}
