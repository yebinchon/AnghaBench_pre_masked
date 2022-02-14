
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_tls_t ;
struct TYPE_3__ {int session; } ;
typedef TYPE_1__ vlc_tls_gnutls_t ;
struct iovec {size_t iov_len; int iov_base; } ;
typedef scalar_t__ ssize_t ;
typedef int gnutls_session_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,size_t) ;

__attribute__((used)) static ssize_t FUNC_2(vlc_tls_t *VAR_0, struct iovec *VAR_1, unsigned VAR_2)
{
    vlc_tls_gnutls_t *VAR_3 = (vlc_tls_gnutls_t *)VAR_0;
    gnutls_session_t VAR_4 = VAR_3->session;
    size_t VAR_5 = 0;

    while (VAR_2 > 0)
    {
        ssize_t VAR_6 = FUNC_1(VAR_4, VAR_1->iov_base, VAR_1->iov_len);
        if (VAR_6 < 0)
            return VAR_5 ? (ssize_t)VAR_5 : FUNC_0(VAR_3, VAR_6);

        VAR_5 += VAR_6;

        if ((size_t)VAR_6 < VAR_1->iov_len)
            break;

        VAR_1++;
        VAR_2--;
    }

    return VAR_5;
}
