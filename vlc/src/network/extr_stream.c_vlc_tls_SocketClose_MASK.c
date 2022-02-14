
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tls_t ;
struct vlc_tls_socket {int fd; } ;
typedef struct vlc_tls_socket vlc_tls_socket_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(vlc_tls_t *VAR_0)
{
    vlc_tls_socket_t *VAR_1 = (struct vlc_tls_socket *)VAR_0;

    FUNC_1(VAR_1->fd);
    FUNC_0(VAR_0);
}
