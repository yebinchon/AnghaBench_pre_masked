
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* ops; } ;
typedef TYPE_2__ vlc_tls_t ;
typedef int uint8_t ;
struct iovec {size_t iov_len; int * iov_base; } ;
typedef int ssize_t ;
struct TYPE_8__ {TYPE_2__* sock; } ;
typedef TYPE_3__ httpd_client_t ;
struct TYPE_6__ {int (* readv ) (TYPE_2__*,struct iovec*,int) ;} ;


 int FUNC_0 (TYPE_2__*,struct iovec*,int) ;

__attribute__((used)) static
ssize_t FUNC_1 (httpd_client_t *VAR_0, uint8_t *VAR_1, size_t VAR_2)
{
    vlc_tls_t *VAR_3 = VAR_0->sock;
    struct iovec VAR_4 = { .iov_base = VAR_1, .iov_len = VAR_2 };
    return VAR_3->ops->readv(VAR_3, &VAR_4, 1);
}
