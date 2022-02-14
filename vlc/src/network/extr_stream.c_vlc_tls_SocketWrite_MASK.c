
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tls_t ;
struct vlc_tls_socket {int fd; } ;
typedef struct vlc_tls_socket vlc_tls_socket_t ;
struct msghdr {unsigned int msg_iovlen; struct iovec* msg_iov; } ;
struct iovec {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct msghdr const*,int ) ;

__attribute__((used)) static ssize_t FUNC_1(vlc_tls_t *VAR_1, const struct iovec *VAR_2,
                                   unsigned VAR_3)
{
    vlc_tls_socket_t *VAR_4 = (struct vlc_tls_socket *)VAR_1;
    const struct msghdr VAR_5 =
    {
        .msg_iov = (struct iovec *)VAR_2,
        .msg_iovlen = VAR_3,
    };

    return FUNC_0(VAR_4->fd, &VAR_5, VAR_0);
}
