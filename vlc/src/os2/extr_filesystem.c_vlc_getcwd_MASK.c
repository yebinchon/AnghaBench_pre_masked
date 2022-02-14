
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_dev; scalar_t__ st_ino; } ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (char const*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (char*,size_t) ;
 char* FUNC_3 (char*) ;
 char* FUNC_4 (size_t) ;
 long FUNC_5 (char*,int ) ;
 scalar_t__ FUNC_6 (char const*,struct stat*) ;
 scalar_t__ FUNC_7 (int ) ;

char *FUNC_8 (void)
{

    const char *VAR_3 = FUNC_3 ("PWD");
    if (VAR_3 != ((void*)0))
    {
        struct stat VAR_4, VAR_5;

        if (FUNC_6 (VAR_3, &VAR_4) == 0 && FUNC_6 (".", &VAR_5) == 0
         && VAR_4 == VAR_5 && VAR_4 == VAR_5)
            return FUNC_0 (VAR_3);
    }


    long VAR_6 = FUNC_5 (".", VAR_1);
    size_t VAR_7 = (VAR_6 == -1 || VAR_6 > 4096) ? 4096 : VAR_6;

    for (;; VAR_7 *= 2)
    {
        char *VAR_8 = FUNC_4 (VAR_7);
        if (FUNC_7(VAR_8 == ((void*)0)))
            break;

        if (FUNC_2 (VAR_8, VAR_7) != ((void*)0))
        {
            char *VAR_9 = FUNC_0 (VAR_8);
            FUNC_1 (VAR_8);
            return VAR_9;
        }
        FUNC_1 (VAR_8);

        if (VAR_2 != VAR_0)
            break;
    }
    return ((void*)0);
}
