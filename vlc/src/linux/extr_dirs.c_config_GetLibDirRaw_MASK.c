
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int FILE ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char**,size_t*,int *) ;
 int FUNC_4 (char*,char*,void**,void**) ;
 char* FUNC_5 (char*,char) ;
 char* FUNC_6 (char*) ;
 char* FUNC_7 (char*,char) ;

__attribute__((used)) static char *FUNC_8(void)
{
    char *VAR_2 = ((void*)0);

    FILE *VAR_3 = FUNC_1 ("/proc/self/maps", "rte");
    if (VAR_3 == ((void*)0))
        goto error;

    char *VAR_4 = ((void*)0);
    size_t VAR_5 = 0;
    uintptr_t VAR_6 = (uintptr_t)VAR_1;

    for (;;)
    {
        ssize_t VAR_7 = FUNC_3 (&VAR_4, &VAR_5, VAR_3);
        if (VAR_7 == -1)
            break;

        void *VAR_8, *VAR_9;
        if (FUNC_4 (VAR_4, "%p-%p", &VAR_8, &VAR_9) < 2)
            continue;

        if (VAR_6 < (uintptr_t)VAR_8 || (uintptr_t)VAR_9 <= VAR_6)
            continue;

        char *VAR_10 = FUNC_5 (VAR_4, '/');
        if (VAR_10 == ((void*)0))
            continue;

        char *VAR_11 = FUNC_7 (VAR_4, '/');
        if (VAR_9 == ((void*)0))
            continue;
        *VAR_11 = '\0';

        VAR_2 = FUNC_6(VAR_10);
        break;
    }

    FUNC_2 (VAR_4);
    FUNC_0 (VAR_3);
error:
    if (VAR_2 == ((void*)0))
        VAR_2 = FUNC_6(VAR_0);
    return VAR_2;
}
