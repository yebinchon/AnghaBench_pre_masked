
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int DIR ;



 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int,struct stat*) ;
 int * FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int) ;

DIR *FUNC_6 (int VAR_7)
{
    struct stat VAR_8;
    if (FUNC_3 (VAR_7, &VAR_8))
        return ((void*)0);

    if (!FUNC_0 (VAR_8.st_mode))
    {
        VAR_6 = VAR_2;
        return ((void*)0);
    }



    char VAR_9[sizeof ("/proc/self/fd/") + 3 * sizeof (int)];
    FUNC_5 (VAR_9, "/proc/self/fd/%u", VAR_7);

    DIR *VAR_10 = FUNC_4 (VAR_9);
    if (VAR_10 != ((void*)0))
    {
        FUNC_1 (VAR_7);
        return VAR_10;
    }


    switch (VAR_6)
    {
        case 133:

        case 132:

        case 130:
        case 128:
        case 131:
        case 129:
            VAR_6 = VAR_1;
    }
    return ((void*)0);
}
