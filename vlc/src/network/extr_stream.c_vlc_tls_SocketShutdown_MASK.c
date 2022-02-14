
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tls_t ;
struct vlc_tls_socket {int fd; } ;
typedef struct vlc_tls_socket vlc_tls_socket_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(vlc_tls_t *VAR_2, bool VAR_3)
{
    vlc_tls_socket_t *VAR_4 = (struct vlc_tls_socket *)VAR_2;

    return FUNC_0(VAR_4->fd, VAR_3 ? VAR_0 : VAR_1);
}
