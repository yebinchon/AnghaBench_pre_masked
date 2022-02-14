
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_tls_t ;
struct TYPE_2__ {int lock; int obj; int p_context; } ;
typedef TYPE_1__ vlc_tls_st_t ;
struct iovec {int iov_len; int iov_base; } ;
typedef size_t ssize_t ;
typedef scalar_t__ OSStatus ;


 scalar_t__ FUNC_0 (int ,int ,int ,size_t*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ VAR_3 ;
 size_t FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ssize_t FUNC_6 (vlc_tls_t *VAR_4, struct iovec *VAR_5, unsigned VAR_6)
{
    vlc_tls_st_t *VAR_7 = (vlc_tls_st_t *)VAR_4;

    if (FUNC_3(VAR_6 == 0))
        return 0;

    FUNC_4(&VAR_7->lock);

    size_t VAR_8;
    OSStatus VAR_9 = FUNC_0(VAR_7->p_context, VAR_5->iov_base, VAR_5->iov_len,
                           &VAR_8);

    if (VAR_9 == VAR_2 && VAR_8) {
        FUNC_5(&VAR_7->lock);
        return VAR_8;
    }


    if (VAR_9 == VAR_1 || VAR_9 == VAR_0) {
        FUNC_1(VAR_7->obj, "Got close notification with code %i", (int)VAR_9);
        FUNC_5(&VAR_7->lock);
        return 0;
    }

    FUNC_5(&VAR_7->lock);
    return VAR_9 != VAR_3 ? FUNC_2(VAR_4, VAR_9) : VAR_8;
}
