
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char**,char const*,char*,char const*,unsigned int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;
 int * FUNC_3 (char const*,char) ;
 char* FUNC_4 (char*) ;

__attribute__((used)) static char *FUNC_5(const char *VAR_0, unsigned VAR_1,
                                 bool VAR_2)
{
    const char *VAR_3;
    char *VAR_4, *VAR_5 = ((void*)0);

    if (FUNC_3(VAR_0, ':') != ((void*)0))
        VAR_3 = VAR_1 ? "http%s://[%s]:%u" : "http%s://[%s]";
    else
        VAR_3 = VAR_1 ? "http%s://%s:%u" : "http%s://%s";

    if (FUNC_2(FUNC_0(&VAR_4, VAR_3, VAR_2 ? "s" : "", VAR_0, VAR_1) >= 0))
    {
        VAR_5 = FUNC_4(VAR_4);
        FUNC_1(VAR_4);
    }
    return VAR_5;
}
