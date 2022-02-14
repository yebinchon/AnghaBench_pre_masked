
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
typedef scalar_t__ ssize_t ;
struct TYPE_6__ {scalar_t__ (* readv ) (TYPE_2__*,struct iovec*,int) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct pollfd*,int,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,struct iovec*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_2__*,int *) ;

__attribute__((used)) static ssize_t FUNC_5(vlc_tls_t *VAR_4, void *VAR_5, size_t VAR_6)
{
    struct iovec VAR_7;
    size_t VAR_8 = 0;

    VAR_7.iov_base = VAR_5;
    VAR_7.iov_len = VAR_6;

    while (VAR_7.iov_len > 0)
    {
        int VAR_9 = FUNC_3();
        ssize_t VAR_10 = VAR_4->ops->readv(VAR_4, &VAR_7, 1);

        FUNC_2(VAR_9);

        if (VAR_10 == 0)
            break;

        if (VAR_10 >= 0)
        {
            VAR_7.iov_base = (char *)VAR_7.iov_base + VAR_10;
            VAR_7.iov_len -= VAR_10;
            VAR_8 += VAR_10;
            continue;
        }

        if (VAR_3 != VAR_1 && VAR_3 != VAR_0)
            return VAR_8 ? (ssize_t)VAR_8 : -1;

        struct pollfd VAR_11;

        VAR_11.events = VAR_2;
        VAR_11.fd = FUNC_4(VAR_4, &VAR_11.events);
        FUNC_0(&VAR_11, 1, -1);
    }

    return VAR_8;
}
