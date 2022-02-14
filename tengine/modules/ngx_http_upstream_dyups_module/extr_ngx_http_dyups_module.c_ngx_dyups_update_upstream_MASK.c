
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_str_t ;
struct TYPE_5__ {int mutex; } ;
typedef TYPE_1__ ngx_slab_pool_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_6__ {int trylock; } ;
typedef TYPE_2__ ngx_http_dyups_main_conf_t ;
typedef int ngx_event_t ;
typedef int ngx_buf_t ;
struct TYPE_7__ {TYPE_1__* shpool; int msg_timer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *,int *,int *) ;
 TYPE_4__ VAR_6 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 TYPE_2__* FUNC_2 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*) ;

ngx_int_t
FUNC_9(ngx_str_t *VAR_9, ngx_buf_t *VAR_10, ngx_str_t *VAR_11)
{
    ngx_int_t VAR_12;
    ngx_event_t *VAR_13;
    ngx_slab_pool_t *VAR_14;
    ngx_http_dyups_main_conf_t *VAR_15;

    VAR_15 = FUNC_2(VAR_5,
                                               VAR_8);
    VAR_13 = &VAR_6.msg_timer;
    VAR_14 = VAR_6.shpool;

    if (!VAR_7) {
        FUNC_8(VAR_11, "API disabled\n");
        return VAR_3;
    }

    if (!VAR_15->trylock) {

        FUNC_5(&VAR_14->mutex);

    } else {

        if (!FUNC_6(&VAR_14->mutex)) {
            VAR_12 = VAR_1;
            FUNC_8(VAR_11, "wait and try again\n");
            goto finish;
        }
    }

    FUNC_3(VAR_13);

    VAR_12 = FUNC_1(VAR_10, VAR_11);
    if (VAR_12 != VAR_4) {
        goto finish;
    }

    VAR_12 = FUNC_0(VAR_9, VAR_10, VAR_11);
    if (VAR_12 == VAR_4) {

        if (FUNC_4(VAR_9, VAR_10, VAR_0)) {
            FUNC_8(VAR_11, "alert: update success "
                        "but not sync to other process");
            VAR_12 = VAR_2;
        }
    }

 finish:

    FUNC_7(&VAR_14->mutex);

    return VAR_12;
}
