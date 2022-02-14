
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_tls_t ;
struct TYPE_2__ {int obj; int p_context; scalar_t__ b_handshaked; int lock; } ;
typedef TYPE_1__ vlc_tls_st_t ;
typedef scalar_t__ OSStatus ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5 (vlc_tls_t *VAR_1, bool VAR_2) {

    vlc_tls_st_t *VAR_3 = (vlc_tls_st_t *)VAR_1;

    FUNC_2(VAR_3->obj, "shutdown TLS session");

    FUNC_4(&VAR_3->lock);

    OSStatus VAR_4 = VAR_0;
    FUNC_1(VAR_2);

    if (VAR_3->b_handshaked) {
        VAR_4 = FUNC_0(VAR_3->p_context);
    }

    if (VAR_4 != VAR_0) {
        FUNC_3(VAR_3->obj, "Cannot close ssl context (%i)", (int)VAR_4);
        return VAR_4;
    }

    return 0;
}
