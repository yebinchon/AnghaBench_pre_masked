
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_memstream {char* ptr; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char const) ;
 int * FUNC_3 (char*,char const,int) ;
 scalar_t__ FUNC_4 (char const*,char*,int) ;
 scalar_t__ FUNC_5 (struct vlc_memstream*) ;
 int FUNC_6 (struct vlc_memstream*) ;
 int FUNC_7 (struct vlc_memstream*,int ) ;
 int FUNC_8 (struct vlc_memstream*,char const*,int) ;
 int FUNC_9 (struct vlc_memstream*,int ,char const*) ;

char *FUNC_10(const char *VAR_0)
{
    FUNC_0(VAR_0 != ((void*)0));





    bool VAR_1 = 0;

    for (const char *VAR_2 = VAR_0; *VAR_2 != '\0'; VAR_2++)
        if (VAR_2[0] == '%' && !(FUNC_2(VAR_2[1]) && FUNC_2(VAR_2[2])))
        {
            VAR_1 = 1;
            break;
        }

    struct vlc_memstream VAR_3;
    FUNC_6(&VAR_3);


    const char *VAR_4 = VAR_0;
    bool VAR_5 = 0;
    bool VAR_6 = 1;

    while (FUNC_1(*VAR_4) || FUNC_3("+-.", *VAR_4, 3) != ((void*)0))
        FUNC_7(&VAR_3, *(VAR_4++));

    if (VAR_4 > VAR_0 && *VAR_4 == ':')
    {
        FUNC_7(&VAR_3, *(VAR_4++));
        VAR_5 = 1;
        VAR_6 = 0;
    }


    if ((VAR_5 || VAR_4 == VAR_0) && FUNC_4(VAR_4, "//", 2) == 0)
    {
        FUNC_8(&VAR_3, VAR_4, 2);
        VAR_4 += 2;
        VAR_6 = 1;

        while (FUNC_3("/?#", *VAR_4, 4) == ((void*)0))
            FUNC_9(&VAR_3, *(VAR_4++), &"%:[]@"[VAR_1]);
    }


    const char *VAR_7 = VAR_6 ? "%/?#@" : "%:/?#[]@";

    while (*VAR_4 != '\0')
        FUNC_9(&VAR_3, *(VAR_4++), VAR_7 + VAR_1);

    return FUNC_5(&VAR_3) ? ((void*)0) : VAR_3.ptr;
}
