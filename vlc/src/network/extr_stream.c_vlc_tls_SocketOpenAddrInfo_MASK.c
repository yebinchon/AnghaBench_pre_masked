
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * ops; } ;
typedef TYPE_1__ vlc_tls_t ;
struct addrinfo {int dummy; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (struct addrinfo const*) ;
 int VAR_0 ;

vlc_tls_t *FUNC_3(const struct addrinfo *restrict VAR_1,
                                      bool VAR_2)
{
    vlc_tls_t *VAR_3 = FUNC_2(VAR_1);
    if (VAR_3 == ((void*)0))
        return ((void*)0);

    if (VAR_2)
    {

        VAR_3->ops = &VAR_0;
    }
    else
    {
        if (FUNC_0(VAR_3))
        {
            FUNC_1(VAR_3);
            VAR_3 = ((void*)0);
        }
    }
    return VAR_3;
}
