
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ngx_str_t ;
struct TYPE_7__ {int mutex; } ;
typedef TYPE_1__ ngx_slab_pool_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_8__ {int trylock; } ;
typedef TYPE_2__ ngx_http_dyups_main_conf_t ;
typedef int ngx_event_t ;
struct TYPE_10__ {TYPE_1__* shpool; int msg_timer; } ;
struct TYPE_9__ {int log; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_4__* VAR_7 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 TYPE_5__ VAR_8 ;
 TYPE_2__* FUNC_1 (TYPE_4__*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int ,int ,int ,char*,int **) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*) ;

ngx_int_t
FUNC_9(ngx_str_t *VAR_11, ngx_str_t *VAR_12)
{
    ngx_int_t VAR_13, VAR_14;
    ngx_event_t *VAR_15;
    ngx_slab_pool_t *VAR_16;
    ngx_http_dyups_main_conf_t *VAR_17;

    VAR_17 = FUNC_1(VAR_7,
                                               VAR_10);
    VAR_15 = &VAR_8.msg_timer;
    VAR_16 = VAR_8.shpool;

    if (!VAR_9) {
        FUNC_8(VAR_12, "API disabled\n");
        return VAR_3;
    }

    if (!VAR_17->trylock) {

        FUNC_5(&VAR_16->mutex);

    } else {

        if (!FUNC_6(&VAR_16->mutex)) {
            return VAR_1;
        }

    }

    FUNC_2(VAR_15);

    VAR_13 = FUNC_0(VAR_11, VAR_12);
    if (VAR_13 != VAR_4) {
        goto finish;
    }

    VAR_14 = FUNC_3(VAR_11, ((void*)0), VAR_0);
    if (VAR_14 != VAR_6) {
        FUNC_8(VAR_12, "alert: delte success but not sync to other process");
        FUNC_4(VAR_5, VAR_7->log, 0, "[dyups] %V", &VAR_12);
        VAR_13 = VAR_2;
    }

 finish:

    FUNC_7(&VAR_16->mutex);

    return VAR_13;
}
