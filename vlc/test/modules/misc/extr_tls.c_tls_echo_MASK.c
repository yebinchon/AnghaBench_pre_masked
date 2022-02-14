
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void vlc_tls_t ;
struct pollfd {int events; int fd; } ;
typedef int ssize_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pollfd*,int,int) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*,int *) ;
 int FUNC_4 (void*,char*,int,int) ;
 int FUNC_5 (int ,void*) ;
 scalar_t__ FUNC_6 (void*,int) ;
 int FUNC_7 (void*,char*,int) ;

__attribute__((used)) static void *FUNC_8(void *VAR_3)
{
    vlc_tls_t *VAR_4 = VAR_3;
    ssize_t VAR_5;
    char VAR_6[256];

    while ((VAR_5 = FUNC_5(VAR_2, VAR_4)) > 0)
    {
        struct pollfd VAR_7;

        switch (VAR_5)
        {
            case 1: VAR_7.events = VAR_0; break;
            case 2: VAR_7.events = VAR_1; break;
            default: FUNC_1();
        }

        VAR_7.fd = FUNC_3(VAR_4, &VAR_7.events);
        FUNC_0(&VAR_7, 1, -1);
    }

    if (VAR_5 < 0)
        goto error;

    while ((VAR_5 = FUNC_4(VAR_4, VAR_6, sizeof (VAR_6), 0)) > 0)
        if (FUNC_7(VAR_4, VAR_6, VAR_5) < VAR_5)
            goto error;

    if (VAR_5 < 0 || FUNC_6(VAR_4, 0))
        goto error;

    FUNC_2(VAR_4);
    return VAR_4;
error:
    FUNC_2(VAR_4);
    return ((void*)0);
}
