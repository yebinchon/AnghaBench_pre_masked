
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


 int FUNC_0 (int ,struct msghdr*,int ) ;

__attribute__((used)) static ssize_t FUNC_1(vlc_tls_t *VAR_0, struct iovec *VAR_1,
                                  unsigned VAR_2)
{
    vlc_tls_socket_t *VAR_3 = (struct vlc_tls_socket *)VAR_0;
    struct msghdr VAR_4 =
    {
        .msg_iov = VAR_1,
        .msg_iovlen = VAR_2,
    };

    return FUNC_0(VAR_3->fd, &VAR_4, 0);
}
