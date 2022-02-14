
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tls_t ;
struct vlc_tls_socket {int fd; } ;
typedef struct vlc_tls_socket vlc_tls_socket_t ;



__attribute__((used)) static int FUNC_0(vlc_tls_t *VAR_0, short *restrict VAR_1)
{
    vlc_tls_socket_t *VAR_2 = (struct vlc_tls_socket *)VAR_0;

    (void) VAR_1;
    return VAR_2->fd;
}
