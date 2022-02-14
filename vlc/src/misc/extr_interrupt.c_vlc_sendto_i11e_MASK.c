
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct msghdr {int msg_iovlen; struct iovec* msg_iov; int msg_namelen; struct sockaddr* msg_name; } ;
struct iovec {void* iov_base; size_t iov_len; } ;
typedef int ssize_t ;
typedef int socklen_t ;


 int FUNC_0 (int,struct msghdr*,int) ;

ssize_t FUNC_1(int VAR_0, const void *VAR_1, size_t VAR_2, int VAR_3,
                      const struct sockaddr *VAR_4, socklen_t VAR_5)
{
    struct iovec VAR_6 = { .iov_base = (void *)VAR_1, .iov_len = VAR_2 };
    struct msghdr VAR_7 = {
        .msg_name = (struct sockaddr *)VAR_4,
        .msg_namelen = VAR_5,
        .msg_iov = &VAR_6,
        .msg_iovlen = 1,
    };

    return FUNC_0(VAR_0, &VAR_7, VAR_3);
}
