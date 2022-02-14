
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_tls {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,size_t) ;
 scalar_t__ FUNC_3 (int ) ;
 size_t FUNC_4 (char*,size_t) ;
 scalar_t__ FUNC_5 (struct vlc_tls*,char*,size_t,int) ;

__attribute__((used)) static char *FUNC_6(struct vlc_tls *VAR_0, size_t *restrict VAR_1)
{
    size_t VAR_2 = 0, VAR_3 = 0, VAR_4;
    char *VAR_5 = ((void*)0);

    while ((VAR_4 = FUNC_4(VAR_5, VAR_3)) > 0)
    {
        ssize_t VAR_6;

        if (VAR_3 + VAR_4 >= VAR_2)
        {
            VAR_2 += 2048;
            if (VAR_2 > 65536)
                goto fail;

            char *VAR_7 = FUNC_2(VAR_5, VAR_2);
            if (FUNC_3(VAR_7 == ((void*)0)))
                goto fail;

            VAR_5 = VAR_7;
        }

        FUNC_0(VAR_2 - VAR_3 >= VAR_4);

        VAR_6 = FUNC_5(VAR_0, VAR_5 + VAR_3, VAR_4, 1);


        if (VAR_6 != (ssize_t)VAR_4)
            goto fail;

        VAR_3 += VAR_6;
    }

    FUNC_0(VAR_2 - VAR_3 >= 1);
    VAR_5[VAR_3] = '\0';
    if (VAR_1 != ((void*)0))
        *VAR_1 = VAR_3;
    return VAR_5;
fail:
    FUNC_1(VAR_5);
    return ((void*)0);
}
