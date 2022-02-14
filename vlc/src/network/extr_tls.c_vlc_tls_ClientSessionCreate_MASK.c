
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {struct TYPE_17__* p; } ;
typedef TYPE_2__ vlc_tls_t ;
struct TYPE_18__ {TYPE_1__* ops; } ;
typedef TYPE_3__ vlc_tls_client_t ;
typedef scalar_t__ vlc_tick_t ;
struct pollfd {int events; int fd; } ;
struct TYPE_16__ {int (* handshake ) (TYPE_2__*,char const*,char const*,char**) ;TYPE_2__* (* open ) (TYPE_3__*,TYPE_2__*,char const*,char const* const*) ;} ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_3__*,char*) ;
 TYPE_2__* FUNC_4 (TYPE_3__*,TYPE_2__*,char const*,char const* const*) ;
 int FUNC_5 (TYPE_2__*,char const*,char const*,char**) ;
 int FUNC_6 (TYPE_3__*,char*) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (struct pollfd*,int,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 () ;
 int FUNC_14 (TYPE_2__*,int *) ;
 int FUNC_15 (TYPE_2__*) ;

vlc_tls_t *FUNC_16(vlc_tls_client_t *VAR_3, vlc_tls_t *VAR_4,
                                       const char *VAR_5, const char *VAR_6,
                                       const char *const *VAR_7, char **VAR_8)
{
    int VAR_9;
    int VAR_10 = FUNC_12();
    vlc_tls_t *VAR_11 = VAR_3->ops->open(VAR_3, VAR_4, VAR_5, VAR_7);
    FUNC_11(VAR_10);

    if (VAR_11 == ((void*)0))
        return ((void*)0);

    VAR_11->p = VAR_4;

    VAR_10 = FUNC_12();
    vlc_tick_t VAR_12 = FUNC_13 ();
    VAR_12 += FUNC_1( FUNC_6 (VAR_3, "ipv4-timeout") );

    FUNC_8 (VAR_2, VAR_11);
    while ((VAR_9 = VAR_3->ops->handshake(VAR_11, VAR_5, VAR_6, VAR_8)) != 0)
    {
        struct pollfd VAR_13[1];

        if (VAR_9 < 0 || FUNC_9() )
        {
            if (VAR_9 < 0)
                FUNC_3(VAR_3, "TLS session handshake error");
error:
            FUNC_15 (VAR_11);
            VAR_11 = ((void*)0);
            break;
        }

        vlc_tick_t VAR_14 = FUNC_13 ();
        if (VAR_14 > VAR_12)
           VAR_14 = VAR_12;

        FUNC_2 (VAR_9 <= 2);

        VAR_13[0].events = (VAR_9 == 1) ? VAR_0 : VAR_1;
        VAR_13[0].fd = FUNC_14(VAR_4, &VAR_13->events);

        FUNC_11(VAR_10);
        VAR_9 = FUNC_10(VAR_13, 1, FUNC_0(VAR_12 - VAR_14));
        VAR_10 = FUNC_12();
        if (VAR_9 == 0)
        {
            FUNC_3(VAR_3, "TLS session handshake timeout");
            goto error;
        }
    }
    FUNC_7();
    FUNC_11(VAR_10);
    return VAR_11;
}
