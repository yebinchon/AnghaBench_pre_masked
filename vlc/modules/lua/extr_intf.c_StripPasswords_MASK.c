
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (unsigned int) ;
 int FUNC_1 (char*,char const*) ;
 char* FUNC_2 (char const*) ;
 unsigned int FUNC_3 (char const*) ;
 int FUNC_4 (char*,char const*,int) ;
 char* FUNC_5 (char const*,char*) ;
 char* FUNC_6 (char const*,char*) ;

__attribute__((used)) static char *FUNC_7( const char *VAR_0 )
{
    unsigned VAR_1 = 0;
    const char *VAR_2 = VAR_0;
    while ((VAR_2 = FUNC_6(VAR_2, "password=")) != ((void*)0))
    {
        VAR_1++;
        VAR_2++;
    }
    if (VAR_1 == 0)
        return FUNC_2(VAR_0);

    char *VAR_3 = FUNC_0(FUNC_3(VAR_0) + VAR_1 * FUNC_3("******") + 1);
    if (VAR_3 == ((void*)0))
        return ((void*)0);
    VAR_3[0] = '\0';

    for (VAR_2 = VAR_0; ; )
    {
        const char *VAR_4 = FUNC_6(VAR_2, "password=");
        if (VAR_4 == ((void*)0))
        {

            FUNC_1(VAR_3, VAR_2);
            break;
        }
        VAR_4 += FUNC_3("password=");

        char VAR_5[3] = ",}";
        if (*VAR_4 == '\'' || *VAR_4 == '"')
        {
            VAR_5[0] = *VAR_4++;
            VAR_5[1] = '\0';
        }

        FUNC_4(VAR_3, VAR_2, VAR_4 - VAR_2);
        FUNC_1(VAR_3, "******");


        VAR_2 = VAR_4 - 1;
        do
        {
            VAR_2 = FUNC_5(VAR_2 + 1, VAR_5);
            if (VAR_2 == ((void*)0))

                return VAR_3;
        }
        while (*(VAR_2 - 1) == '\\');
    }
    return VAR_3;
}
