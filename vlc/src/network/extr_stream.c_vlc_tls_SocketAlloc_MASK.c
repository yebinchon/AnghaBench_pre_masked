
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * p; int * ops; } ;
typedef TYPE_1__ vlc_tls_t ;
struct TYPE_6__ {int fd; int peer; scalar_t__ peerlen; TYPE_1__ tls; } ;
typedef TYPE_2__ vlc_tls_socket_t ;
struct sockaddr {int dummy; } ;
typedef scalar_t__ socklen_t ;


 TYPE_2__* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,struct sockaddr const*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;

__attribute__((used)) static vlc_tls_t *FUNC_3(int VAR_1,
                                      const struct sockaddr *restrict VAR_2,
                                      socklen_t VAR_3)
{
    vlc_tls_socket_t *VAR_4 = FUNC_0(sizeof (*VAR_4) + VAR_3);
    if (FUNC_2(VAR_4 == ((void*)0)))
        return ((void*)0);

    vlc_tls_t *VAR_5 = &VAR_4->tls;

    VAR_5->ops = &VAR_0;
    VAR_5->p = ((void*)0);

    VAR_4->fd = VAR_1;
    VAR_4->peerlen = VAR_3;
    if (VAR_3 > 0)
        FUNC_1(VAR_4->peer, VAR_2, VAR_3);
    return VAR_5;
}
