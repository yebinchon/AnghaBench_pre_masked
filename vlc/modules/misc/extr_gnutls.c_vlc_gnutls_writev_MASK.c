
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* ops; } ;
typedef TYPE_2__ vlc_tls_t ;
struct iovec {int iov_len; int iov_base; } ;
typedef int ssize_t ;
typedef TYPE_2__* gnutls_transport_ptr_t ;
struct TYPE_10__ {int iov_len; int iov_base; } ;
typedef TYPE_4__ giovec_t ;
struct TYPE_8__ {int (* writev ) (TYPE_2__*,struct iovec*,int) ;} ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,struct iovec*,int) ;
 long FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static ssize_t FUNC_3(gnutls_transport_ptr_t VAR_4,
                                 const giovec_t *VAR_5, int VAR_6)
{



    const long VAR_7 = FUNC_1(VAR_2);

    if (FUNC_2(VAR_6 > VAR_7))
    {
        VAR_3 = VAR_0;
        return -1;
    }
    if (FUNC_2(VAR_6 == 0))
        return 0;

    vlc_tls_t *VAR_8 = VAR_4;
    struct iovec VAR_9[VAR_6];

    for (int VAR_10 = 0; VAR_10 < VAR_6; VAR_10++)
    {
        VAR_9[VAR_10].iov_base = VAR_5[VAR_10].iov_base;
        VAR_9[VAR_10].iov_len = VAR_5[VAR_10].iov_len;
    }

    return VAR_8->ops->writev(VAR_8, VAR_9, VAR_6);
}
