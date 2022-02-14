
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (char*,size_t) ;
 char* FUNC_2 (size_t) ;
 long FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (int ) ;

char *FUNC_5 (void)
{
    long VAR_3 = FUNC_3 (".", VAR_1);
    size_t VAR_4 = (VAR_3 == -1 || VAR_3 > 4096) ? 4096 : VAR_3;

    for (;; VAR_4 *= 2)
    {
        char *VAR_5 = FUNC_2 (VAR_4);
        if (FUNC_4(VAR_5 == ((void*)0)))
            break;

        if (FUNC_1 (VAR_5, VAR_4) != ((void*)0))
            return VAR_5;
        FUNC_0 (VAR_5);

        if (VAR_2 != VAR_0)
            break;
    }
    return ((void*)0);
}
