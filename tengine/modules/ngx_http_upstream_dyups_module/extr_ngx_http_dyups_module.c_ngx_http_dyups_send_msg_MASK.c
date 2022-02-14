
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;
typedef struct TYPE_15__ TYPE_12__ ;


typedef int ngx_uint_t ;
struct TYPE_18__ {int len; int data; } ;
typedef TYPE_2__ ngx_str_t ;
typedef int ngx_slab_pool_t ;
typedef int ngx_pid_t ;
typedef int ngx_int_t ;
struct TYPE_19__ {int version; int msg_queue; } ;
typedef TYPE_3__ ngx_dyups_shctx_t ;
struct TYPE_23__ {int len; int * data; } ;
struct TYPE_17__ {int len; int * data; } ;
struct TYPE_20__ {int queue; scalar_t__ count; TYPE_9__ name; TYPE_1__ content; struct TYPE_20__* pid; int flag; } ;
typedef TYPE_4__ ngx_dyups_msg_t ;
struct TYPE_21__ {int worker_processes; } ;
typedef TYPE_5__ ngx_core_conf_t ;
struct TYPE_22__ {int last; int pos; } ;
typedef TYPE_6__ ngx_buf_t ;
struct TYPE_16__ {int log; int conf_ctx; } ;
struct TYPE_15__ {int * shpool; TYPE_3__* sh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_14__* VAR_4 ;
 int FUNC_0 (int *,TYPE_4__*) ;
 TYPE_12__ VAR_5 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,char*,TYPE_9__*,scalar_t__,int) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (TYPE_4__*,int) ;
 TYPE_4__ VAR_6 ;
 int FUNC_5 (int *,int *) ;
 void* FUNC_6 (int *,int) ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_str_t *VAR_7, ngx_buf_t *VAR_8, ngx_uint_t VAR_9)
{
    ngx_core_conf_t *VAR_10;
    ngx_slab_pool_t *VAR_11;
    ngx_dyups_msg_t *VAR_12;
    ngx_dyups_shctx_t *VAR_13;

    VAR_10 = (ngx_core_conf_t *) FUNC_1(VAR_4->conf_ctx,
                                           VAR_3);

    VAR_13 = VAR_5.sh;
    VAR_11 = VAR_5.shpool;

    VAR_12 = FUNC_6(VAR_11, sizeof(ngx_dyups_msg_t));
    if (VAR_12 == ((void*)0)) {
        goto failed;
    }

    FUNC_4(VAR_12, sizeof(ngx_dyups_msg_t));

    VAR_12->flag = VAR_9;
    VAR_12->count = 0;
    VAR_12->pid = FUNC_6(VAR_11,
                                     sizeof(ngx_pid_t) * VAR_10->worker_processes);

    if (VAR_12->pid == ((void*)0)) {
        goto failed;
    }

    FUNC_4(VAR_12->pid, sizeof(ngx_pid_t) * VAR_10->worker_processes);
    VAR_12->pid[0] = VAR_6;
    VAR_12->count++;

    VAR_12->name.data = FUNC_6(VAR_11, VAR_7->len);
    if (VAR_12->name.data == ((void*)0)) {
        goto failed;
    }

    FUNC_3(VAR_12->name.data, VAR_7->data, VAR_7->len);
    VAR_12->name.len = VAR_7->len;

    if (VAR_8) {
        VAR_12->content.data = FUNC_6(VAR_11,
                                                  VAR_8->last - VAR_8->pos);
        if (VAR_12->content.data == ((void*)0)) {
            goto failed;
        }

        FUNC_3(VAR_12->content.data, VAR_8->pos, VAR_8->last - VAR_8->pos);
        VAR_12->content.len = VAR_8->last - VAR_8->pos;

    } else {
        VAR_12->content.data = ((void*)0);
        VAR_12->content.len = 0;
    }

    VAR_13->version++;

    if (VAR_13->version == 0) {
        VAR_13->version = 1;
    };

    FUNC_2(VAR_1, VAR_4->log, 0,
                   "[dyups] send msg %V count %ui version: %ui",
                   &VAR_12->name, VAR_12->count, VAR_13->version);

    FUNC_5(&VAR_13->msg_queue, &VAR_12->queue);

    return VAR_2;

failed:

    if (VAR_12) {
        FUNC_0(VAR_11, VAR_12);
    }

    return VAR_0;
}
