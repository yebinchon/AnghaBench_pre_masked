
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef int u_char ;
struct rlimit {scalar_t__ rlim_cur; } ;
typedef scalar_t__ ngx_uint_t ;
struct TYPE_15__ {int msec; } ;
typedef TYPE_2__ ngx_time_t ;
typedef int ngx_shmtx_sh_t ;
struct TYPE_16__ {size_t size; int * addr; int log; int name; } ;
typedef TYPE_3__ ngx_shm_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_17__ {scalar_t__ connections; int name; } ;
typedef TYPE_4__ ngx_event_conf_t ;
struct TYPE_14__ {int data; } ;
struct TYPE_18__ {int log; TYPE_1__ lock_file; int conf_ctx; } ;
typedef TYPE_5__ ngx_cycle_t ;
struct TYPE_19__ {scalar_t__ rlimit_nofile; scalar_t__ master; int timer_resolution; } ;
typedef TYPE_6__ ngx_core_conf_t ;
typedef int ngx_atomic_t ;
struct TYPE_20__ {scalar_t__ spin; } ;
struct TYPE_13__ {size_t ctx_index; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,struct rlimit*) ;
 TYPE_8__ VAR_9 ;
 int * VAR_10 ;
 int FUNC_1 (int *,int ,int) ;
 int * VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_11__ VAR_14 ;
 int VAR_15 ;
 void*** FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,char*,int *,int ) ;
 int FUNC_4 (int ,int ,int ,char*,...) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_8__*,int *,int ) ;
 int * VAR_19 ;
 int * VAR_20 ;
 int * VAR_21 ;
 int * VAR_22 ;
 int * VAR_23 ;
 int * VAR_24 ;
 int * VAR_25 ;
 int * VAR_26 ;
 int FUNC_7 (int *,char*) ;
 int * VAR_27 ;
 int VAR_28 ;
 TYPE_2__* FUNC_8 () ;
 int VAR_29 ;

__attribute__((used)) static ngx_int_t
FUNC_9(ngx_cycle_t *VAR_30)
{
    void ***VAR_31;
    u_char *VAR_32;
    size_t VAR_33, VAR_34;
    ngx_shm_t VAR_35;
    ngx_time_t *VAR_36;
    ngx_core_conf_t *VAR_37;
    ngx_event_conf_t *VAR_38;

    VAR_31 = FUNC_2(VAR_30->conf_ctx, VAR_15);
    VAR_38 = (*VAR_31)[VAR_14.ctx_index];

    if (!VAR_28 && VAR_17 <= VAR_7) {
        FUNC_4(VAR_4, VAR_30->log, 0,
                      "using the \"%s\" event method", VAR_38->name);
    }

    VAR_37 = (ngx_core_conf_t *) FUNC_2(VAR_30->conf_ctx, VAR_12);

    VAR_29 = VAR_37->timer_resolution;


    {
    ngx_int_t VAR_39;
    struct rlimit VAR_40;

    if (FUNC_0(VAR_8, &VAR_40) == -1) {
        FUNC_4(VAR_2, VAR_30->log, VAR_13,
                      "getrlimit(RLIMIT_NOFILE) failed, ignored");

    } else {
        if (VAR_38->connections > (ngx_uint_t) VAR_40.rlim_cur
            && (VAR_37->rlimit_nofile == VAR_0
                || VAR_38->connections > (ngx_uint_t) VAR_37->rlimit_nofile))
        {
            VAR_39 = (VAR_37->rlimit_nofile == VAR_0) ?
                         (ngx_int_t) VAR_40.rlim_cur : VAR_37->rlimit_nofile;

            FUNC_4(VAR_5, VAR_30->log, 0,
                          "%ui worker_connections exceed "
                          "open file resource limit: %i",
                          VAR_38->connections, VAR_39);
        }
    }
    }



    if (VAR_37->master == 0) {
        return VAR_6;
    }

    if (VAR_10) {
        return VAR_6;
    }




    VAR_34 = 128;

    VAR_33 = VAR_34
           + VAR_34
           + VAR_34;
    VAR_35.size = VAR_33;
    FUNC_7(&VAR_35.name, "nginx_shared_zone");
    VAR_35.log = VAR_30->log;

    if (FUNC_5(&VAR_35) != VAR_6) {
        return VAR_1;
    }

    VAR_32 = VAR_35.addr;

    VAR_10 = (ngx_atomic_t *) VAR_32;
    VAR_9.spin = (ngx_uint_t) -1;

    if (FUNC_6(&VAR_9, (ngx_shmtx_sh_t *) VAR_32,
                         VAR_30->lock_file.data)
        != VAR_6)
    {
        return VAR_1;
    }

    VAR_11 = (ngx_atomic_t *) (VAR_32 + 1 * VAR_34);

    (void) FUNC_1(VAR_11, 0, 1);

    FUNC_3(VAR_3, VAR_30->log, 0,
                   "counter: %p, %uA",
                   VAR_11, *VAR_11);

    VAR_27 = (ngx_atomic_t *) (VAR_32 + 2 * VAR_34);

    VAR_36 = FUNC_8();

    VAR_18 = (VAR_36->msec << 16) + VAR_16;
    return VAR_6;
}
