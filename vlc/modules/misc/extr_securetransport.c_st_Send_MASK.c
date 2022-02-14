
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_tls_t ;
struct TYPE_2__ {size_t i_send_buffered_bytes; int lock; int p_context; scalar_t__ b_server_mode; } ;
typedef TYPE_1__ vlc_tls_st_t ;
struct iovec {size_t iov_len; int * iov_base; } ;
typedef int ssize_t ;
typedef scalar_t__ OSStatus ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,size_t,size_t*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5 (vlc_tls_t *VAR_5, const struct iovec *VAR_6,
                        unsigned VAR_7)
{
    vlc_tls_st_t *VAR_8 = (vlc_tls_st_t *)VAR_5;
    OSStatus VAR_9 = VAR_4;

    if (FUNC_2(VAR_7 == 0))
        return 0;

    FUNC_3(&VAR_8->lock);
    int VAR_10 = VAR_8->b_server_mode ? VAR_0 : VAR_1;

    size_t VAR_11;
    if (VAR_8->i_send_buffered_bytes > 0) {
        VAR_9 = FUNC_0(VAR_8->p_context, ((void*)0), 0, &VAR_11);

        if (VAR_9 == VAR_4) {

            VAR_11 = VAR_8->i_send_buffered_bytes;
            VAR_8->i_send_buffered_bytes = 0;

        } else if (VAR_9 == VAR_2) {
            FUNC_4(&VAR_8->lock);
            VAR_3 = VAR_10;
            return -1;
        }

    } else {
        VAR_9 = FUNC_0(VAR_8->p_context, VAR_6->iov_base, VAR_6->iov_len,
                       &VAR_11);

        if (VAR_9 == VAR_2) {
            VAR_8->i_send_buffered_bytes = VAR_6->iov_len;
            VAR_3 = VAR_10;
            FUNC_4(&VAR_8->lock);
            return -1;
        }
    }

    FUNC_4(&VAR_8->lock);
    return VAR_9 != VAR_4 ? FUNC_1(VAR_5, VAR_9) : VAR_11;
}
