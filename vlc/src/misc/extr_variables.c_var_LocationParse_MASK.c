
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (char*,size_t,char*,char const*,char const*) ;
 size_t FUNC_5 (char const*,char*) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char const*,char*) ;
 int FUNC_8 (int *,char*,int) ;

int (FUNC_9)(vlc_object_t *VAR_2, const char *VAR_3, const char *VAR_4)
{
    int VAR_5 = VAR_1;
    size_t VAR_6 = FUNC_6 (VAR_4) + 1;

    FUNC_0(VAR_3 != ((void*)0));
    while (*VAR_3 != '\0')
    {
        VAR_3 += FUNC_7 (VAR_3, ":;");

        size_t VAR_7 = FUNC_5 (VAR_3, ":;");
        char *VAR_8 = FUNC_3 (VAR_6 + VAR_7);

        if (FUNC_2(VAR_8 != ((void*)0)))
        {


            FUNC_4 (VAR_8, VAR_6 + VAR_7, "%s%s", VAR_4, VAR_3);
            FUNC_8 (VAR_2, VAR_8, 0);
            FUNC_1 (VAR_8);
        }
        else
            VAR_5 = VAR_0;
        VAR_3 += VAR_7;
    }

    return VAR_5;
}
