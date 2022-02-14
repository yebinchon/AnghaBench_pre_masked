
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char const*) ;
 int VAR_1 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char const*) ;

int FUNC_3 (const char *VAR_2, const char *VAR_3)
{
    const char *VAR_4 = FUNC_0 (VAR_2);
    if (VAR_4 == ((void*)0))
        goto error;

    const char *VAR_5 = FUNC_0 (VAR_3);
    if (VAR_5 == ((void*)0))
    {
        FUNC_1 (VAR_4);
error:
        VAR_1 = VAR_0;
        return -1;
    }

    int VAR_6 = FUNC_2 (VAR_4, VAR_5);
    FUNC_1 (VAR_4);
    FUNC_1 (VAR_5);
    return VAR_6;
}
