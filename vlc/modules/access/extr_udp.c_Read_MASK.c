
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pollfd {int events; int fd; } ;
struct msghdr {int msg_iovlen; struct iovec* msg_iov; } ;
struct iovec {void* iov_base; size_t iov_len; } ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
typedef size_t ssize_t ;
struct TYPE_6__ {size_t length; size_t offset; void* buf; int fd; int timeout; } ;
typedef TYPE_2__ access_sys_t ;


 int FUNC_0 (struct iovec*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void*,size_t,size_t) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 size_t FUNC_3 (int ,struct msghdr*,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct pollfd*,int,int ) ;

__attribute__((used)) static ssize_t FUNC_6(stream_t *VAR_2, void *VAR_3, size_t VAR_4)
{
    access_sys_t *VAR_5 = VAR_2->p_sys;

    if (VAR_5->length > 0) {
        if (VAR_4 > VAR_5->length)
            VAR_4 = VAR_5->length;

        FUNC_1(VAR_3, VAR_5->offset, VAR_4);
        VAR_5->offset += VAR_4;
        VAR_5->length -= VAR_4;
        return VAR_4;
    }

    struct pollfd VAR_6[1];

    VAR_6[0].fd = VAR_5->fd;
    VAR_6[0].events = VAR_1;

    switch (FUNC_5(VAR_6, 1, VAR_5->timeout)) {
        case 0:
            FUNC_2(VAR_2, "receive time-out");
            return 0;
        case -1:
            return -1;
    }

    struct iovec VAR_7[] = {
        { .iov_base = VAR_3, .iov_len = VAR_4, },
        { .iov_base = VAR_5->buf, .iov_len = VAR_0, },
    };
    struct msghdr VAR_8 = {
        .msg_iov = VAR_7,
        .msg_iovlen = FUNC_0(VAR_7),
    };
    ssize_t VAR_9 = FUNC_3(VAR_5->fd, &VAR_8, 0);

    if (VAR_9 <= 0)
        return -1;

    if (FUNC_4((size_t)VAR_9 > VAR_4)) {
        VAR_5->offset = VAR_5->buf;
        VAR_5->length = VAR_9 - VAR_4;
        VAR_9 = VAR_4;
    }

    return VAR_9;
}
