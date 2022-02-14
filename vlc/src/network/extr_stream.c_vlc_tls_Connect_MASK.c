
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_tls_t ;
struct TYPE_2__ {int peerlen; int peer; int fd; } ;
typedef TYPE_1__ vlc_tls_socket_t ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static ssize_t FUNC_3(vlc_tls_t *VAR_3)
{
    const vlc_tls_socket_t *VAR_4 = (vlc_tls_socket_t *)VAR_3;

    if (FUNC_1(VAR_4->fd, VAR_4->peer, VAR_4->peerlen) == 0)
        return 0;

    if (VAR_2 != VAR_0)
        return -1;




    return FUNC_2(VAR_3);
}
