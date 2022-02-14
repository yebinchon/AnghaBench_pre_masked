
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * ops; } ;
typedef TYPE_1__ vlc_tls_t ;
struct TYPE_9__ {int b_handshaked; int b_blocking_send; int b_server_mode; int * p_context; TYPE_1__ tls; int * obj; int lock; TYPE_1__* sock; scalar_t__ i_send_buffered_bytes; int * p_cred; } ;
typedef TYPE_2__ vlc_tls_st_t ;
typedef int vlc_tls_creds_sys_t ;
typedef int vlc_object_t ;
typedef int * SSLContextRef ;
typedef scalar_t__ OSStatus ;


 int * FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 (int,int **) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_4 (int) ;
 int FUNC_5 (int *,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static vlc_tls_t *FUNC_9(vlc_object_t *VAR_7,
                                       vlc_tls_creds_sys_t *VAR_8,
                                       vlc_tls_t *VAR_9, bool VAR_10)
{
    vlc_tls_st_t *VAR_11 = FUNC_4(sizeof (*VAR_11));
    if (FUNC_7(VAR_11 == ((void*)0)))
        return ((void*)0);

    VAR_11->p_cred = VAR_8;
    VAR_11->b_handshaked = 0;
    VAR_11->b_blocking_send = 0;
    VAR_11->i_send_buffered_bytes = 0;
    VAR_11->p_context = ((void*)0);
    VAR_11->sock = VAR_9;
    VAR_11->b_server_mode = VAR_10;
    FUNC_8(&VAR_11->lock);
    VAR_11->obj = VAR_7;

    vlc_tls_t *VAR_12 = &VAR_11->tls;

    VAR_12->ops = &VAR_6;

    SSLContextRef VAR_13 = ((void*)0);







    if (FUNC_1(VAR_10, &VAR_13) != VAR_3) {
        FUNC_5(VAR_7, "error calling SSLNewContext");
        goto error;
    }


    VAR_11->p_context = VAR_13;

    OSStatus VAR_14 = FUNC_3(VAR_13, VAR_4, VAR_5);
    if (VAR_14 != VAR_3) {
        FUNC_5(VAR_7, "cannot set io functions");
        goto error;
    }

    VAR_14 = FUNC_2(VAR_13, VAR_12);
    if (VAR_14 != VAR_3) {
        FUNC_5(VAR_7, "cannot set connection");
        goto error;
    }

    return VAR_12;

error:
    FUNC_6(VAR_12);
    return ((void*)0);
}
