
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**,char*,...) ;
 char* FUNC_1 (char const*,char) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static char *FUNC_3(const char *VAR_0, const char *VAR_1)
{
    char *VAR_2;
    int VAR_3;

    if (VAR_0 == ((void*)0))
        VAR_3 = FUNC_0(&VAR_2, "/%s", VAR_1);
    else
    {
        const char *VAR_4 = FUNC_1(VAR_0, '/');

        if (VAR_4 != ((void*)0))
            VAR_4++;
        else
            VAR_4 = VAR_0;

        VAR_3 = FUNC_0(&VAR_2, "%.*s%s", (int)(VAR_4 - VAR_0), VAR_0, VAR_1);
    }

    if (FUNC_2(VAR_3 == -1))
        VAR_2 = ((void*)0);
    return VAR_2;
}
