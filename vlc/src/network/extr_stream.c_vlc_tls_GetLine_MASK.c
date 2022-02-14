
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tls_t ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,size_t) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,char*,int,int) ;

char *FUNC_4(vlc_tls_t *VAR_0)
{
    char *VAR_1 = ((void*)0);
    size_t VAR_2 = 0, VAR_3 = 0;

    do
    {
        if (VAR_2 == VAR_3)
        {
            VAR_3 += 1024;

            char *VAR_4 = FUNC_1(VAR_1, VAR_3);
            if (FUNC_2(VAR_4 == ((void*)0)))
                goto error;
            VAR_1 = VAR_4;
        }

        if (FUNC_3(VAR_0, VAR_1 + VAR_2, 1, 0) <= 0)
            goto error;
    }
    while (VAR_1[VAR_2++] != '\n');

    if (VAR_2 >= 2 && VAR_1[VAR_2 - 2] == '\r')
        VAR_1[VAR_2 - 2] = '\0';
    return VAR_1;

error:
    FUNC_0(VAR_1);
    return ((void*)0);
}
