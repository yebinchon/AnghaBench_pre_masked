
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char* (*) (int,char const*),int,char const*) ;
 int FUNC_1 (char*,char*,int,char const*) ;
 scalar_t__ VAR_0 ;

char *FUNC_2 (int VAR_1, const char *VAR_2)
{
    if (VAR_0 && VAR_2 != ((void*)0))
    {
        FUNC_1("Blocked", "%d, \"%s\"", VAR_1, VAR_2);
        return ((void*)0);
    }
    return FUNC_0(FUNC_2, VAR_1, VAR_2);
}
