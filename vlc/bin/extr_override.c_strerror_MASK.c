
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char* (*) (int),int) ;
 int FUNC_1 (char*,char*,int) ;
 scalar_t__ VAR_0 ;

char *FUNC_2 (int VAR_1)
{
    if (VAR_0)
    {
        static const char VAR_2[] =
            "Error message unavailable (use strerror_r instead of strerror)!";
        FUNC_1("Blocked", "%d", VAR_1);
        return (char *)VAR_2;
    }
    return FUNC_0(FUNC_2, VAR_1);
}
