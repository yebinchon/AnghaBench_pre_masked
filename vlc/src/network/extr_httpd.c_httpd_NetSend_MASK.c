
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
struct iovec {void* iov_base; size_t iov_len; } ;
typedef int ssize_t ;
struct TYPE_8__ {TYPE_2__* sock; } ;
typedef TYPE_3__ httpd_client_t ;
struct TYPE_6__ {int (* writev ) (TYPE_2__*,struct iovec const*,int) ;} ;


 int FUNC_0 (TYPE_2__*,struct iovec const*,int) ;

__attribute__((used)) static
ssize_t FUNC_1 (httpd_client_t *VAR_0, const uint8_t *VAR_1, size_t VAR_2)
{
    vlc_tls_t *VAR_3 = VAR_0->sock;
    const struct iovec VAR_4 = { .iov_base = (void *)VAR_1, .iov_len = VAR_2 };
    return VAR_3->ops->writev(VAR_3, &VAR_4, 1);
}
