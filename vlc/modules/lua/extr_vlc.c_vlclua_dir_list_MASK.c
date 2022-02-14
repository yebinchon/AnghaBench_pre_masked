
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (int ,int *) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 char** FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 char** FUNC_6 (char**,char*,char const*) ;

int FUNC_7(const char *VAR_5, char ***restrict VAR_6)
{
    char **VAR_7 = FUNC_3(4 * sizeof(char *));
    if (FUNC_5(VAR_7 == ((void*)0)))
        return VAR_0;

    *VAR_6 = VAR_7;


    VAR_7 = FUNC_6(VAR_7, FUNC_1(VAR_4),
                                  VAR_5);

    char *VAR_8 = FUNC_0(VAR_2, ((void*)0));
    char *VAR_9 = FUNC_0(VAR_1, ((void*)0));
    bool VAR_10 = VAR_8 != ((void*)0) && VAR_9 != ((void*)0) && FUNC_4(VAR_8, VAR_9);


    VAR_7 = FUNC_6(VAR_7, VAR_8, VAR_5);


    if (VAR_10 || VAR_8 == ((void*)0))
        VAR_7 = FUNC_6(VAR_7, VAR_9, VAR_5);
    else
        FUNC_2(VAR_9);

    *VAR_7 = ((void*)0);
    return VAR_3;
}
