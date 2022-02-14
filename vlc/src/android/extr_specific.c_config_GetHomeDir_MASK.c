
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char**,char*,char*,char const*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static char *FUNC_5(const char *VAR_2, const char *VAR_3)
{
    char *VAR_4 = FUNC_2("HOME");
    if (VAR_4 == ((void*)0))
        goto fallback;

    if (VAR_2 == ((void*)0))
        return FUNC_3(VAR_4);

    char *VAR_5;
    if (FUNC_0(&VAR_5, "%s/%s", VAR_4, VAR_2) == -1)
        goto fallback;
    if (FUNC_4(VAR_5, 0700) == -1 && VAR_1 != VAR_0)
    {
        FUNC_1(VAR_5);
        goto fallback;
    }
    return VAR_5;

fallback:
    return VAR_3 != ((void*)0) ? FUNC_3(VAR_3) : ((void*)0);
}
