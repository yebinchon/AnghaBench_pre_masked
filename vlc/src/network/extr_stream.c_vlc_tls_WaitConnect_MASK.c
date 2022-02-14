
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tls_t ;
typedef int val ;
struct pollfd {int fd; int events; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int const,int ,int ,int*,int*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (struct pollfd*,int,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(vlc_tls_t *VAR_5)
{
    const int VAR_6 = FUNC_3(VAR_5);
    struct pollfd VAR_7;

    VAR_7.fd = VAR_6;
    VAR_7.events = VAR_1;

    do
    {
        if (FUNC_1())
        {
            VAR_4 = VAR_0;
            return -1;
        }
    }
    while (FUNC_2(&VAR_7, 1, -1) <= 0);

    int VAR_8;
    socklen_t VAR_9 = sizeof (VAR_8);

    if (FUNC_0(VAR_6, VAR_2, VAR_3, &VAR_8, &VAR_9))
        return -1;

    if (VAR_8 != 0)
    {
        VAR_4 = VAR_8;
        return -1;
    }
    return 0;
}
