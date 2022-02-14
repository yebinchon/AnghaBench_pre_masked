
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct msghdr {int msg_iovlen; int msg_namelen; struct iovec* msg_iov; struct sockaddr* msg_name; } ;
struct iovec {void* iov_base; size_t iov_len; } ;
typedef scalar_t__ ssize_t ;
typedef int socklen_t ;


 scalar_t__ FUNC_0 (int,struct msghdr*,int) ;

ssize_t FUNC_1(int VAR_0, void *VAR_1, size_t VAR_2, int VAR_3,
                        struct sockaddr *VAR_4, socklen_t *VAR_5)
{
    struct iovec VAR_6 = { .iov_base = VAR_1, .iov_len = VAR_2 };
    struct msghdr VAR_7 = {
        .msg_name = VAR_4,
        .msg_namelen = (VAR_5 != ((void*)0)) ? *VAR_5 : 0,
        .msg_iov = &VAR_6,
        .msg_iovlen = 1,
    };

    ssize_t VAR_8 = FUNC_0(VAR_0, &VAR_7, VAR_3);
    if (VAR_8 >= 0 && VAR_5 != ((void*)0))
        *VAR_5 = VAR_7.msg_namelen;
    return VAR_8;
}
