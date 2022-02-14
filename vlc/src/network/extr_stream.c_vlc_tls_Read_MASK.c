
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* ops; } ;
typedef TYPE_2__ vlc_tls_t ;
struct pollfd {int events; int fd; } ;
struct iovec {char* iov_base; size_t iov_len; } ;
typedef int ssize_t ;
struct TYPE_6__ {int (* readv ) (TYPE_2__*,struct iovec*,int) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*,struct iovec*,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct pollfd*,int,int) ;
 int FUNC_3 (TYPE_2__*,int *) ;

ssize_t FUNC_4(vlc_tls_t *VAR_4, void *VAR_5, size_t VAR_6, bool VAR_7)
{
    struct pollfd VAR_8;
    struct iovec VAR_9;

    VAR_8.events = VAR_2;
    VAR_8.fd = FUNC_3(VAR_4, &VAR_8.events);
    VAR_9.iov_base = VAR_5;
    VAR_9.iov_len = VAR_6;

    for (size_t VAR_10 = 0;;)
    {
        if (FUNC_1())
        {
            VAR_3 = VAR_1;
            return -1;
        }

        ssize_t VAR_11 = VAR_4->ops->readv(VAR_4, &VAR_9, 1);
        if (VAR_11 > 0)
        {
            if (!VAR_7)
                return VAR_11;
            VAR_9.iov_base = (char *)VAR_9.iov_base + VAR_11;
            VAR_9.iov_len -= VAR_11;
            VAR_10 += VAR_11;
        }
        if (VAR_9.iov_len == 0 || VAR_11 == 0)
            return VAR_10;
        if (VAR_11 == -1)
        {
            if (FUNC_1())
                return -1;
            if (VAR_3 != VAR_1 && VAR_3 != VAR_0)
                return VAR_10 ? (ssize_t)VAR_10 : -1;
        }

        FUNC_2(&VAR_8, 1, -1);
    }
}
