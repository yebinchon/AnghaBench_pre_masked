
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ ngx_output_chain_filter_pt ;
struct TYPE_17__ {int need_in_memory; int * in; int aio; int thread_handler; int aio_preload; int aio_handler; TYPE_2__* filter_ctx; scalar_t__ output_filter; scalar_t__ tag; int bufs; int pool; int alignment; int need_in_temp; int sendfile; } ;
typedef TYPE_1__ ngx_output_chain_ctx_t ;
typedef int ngx_int_t ;
struct TYPE_18__ {int request_output; int args; int uri; int buffered; int aio; int pool; int filter_need_temporary; scalar_t__ filter_need_in_memory; scalar_t__ main_filter_need_in_memory; TYPE_5__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_19__ {scalar_t__ aio; int directio_alignment; } ;
typedef TYPE_3__ ngx_http_core_loc_conf_t ;
struct TYPE_20__ {int bufs; } ;
typedef TYPE_4__ ngx_http_copy_filter_conf_t ;
struct TYPE_21__ {int log; int sendfile; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_22__ {scalar_t__ buf; } ;
typedef TYPE_6__ ngx_chain_t ;
typedef scalar_t__ ngx_buf_tag_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__* FUNC_1 (TYPE_2__*,int ) ;
 void* FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_4 (int ,int ,int ,char*,int *,int *) ;
 int FUNC_5 (int ,int ,int ,char*,int ,int *,int *) ;
 int FUNC_6 (TYPE_1__*,TYPE_6__*) ;
 TYPE_1__* FUNC_7 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_8(ngx_http_request_t *VAR_12, ngx_chain_t *VAR_13)
{
    ngx_int_t VAR_14;
    ngx_connection_t *VAR_15;
    ngx_output_chain_ctx_t *VAR_16;
    ngx_http_core_loc_conf_t *VAR_17;
    ngx_http_copy_filter_conf_t *VAR_18;

    VAR_15 = VAR_12->connection;

    FUNC_4(VAR_4, VAR_15->log, 0,
                   "http copy filter: \"%V?%V\"", &VAR_12->uri, &VAR_12->args);

    VAR_16 = FUNC_1(VAR_12, VAR_8);

    if (VAR_16 == ((void*)0)) {
        VAR_16 = FUNC_7(VAR_12->pool, sizeof(ngx_output_chain_ctx_t));
        if (VAR_16 == ((void*)0)) {
            return VAR_0;
        }

        FUNC_3(VAR_12, VAR_16, VAR_8);

        VAR_18 = FUNC_2(VAR_12, VAR_8);
        VAR_17 = FUNC_2(VAR_12, VAR_10);

        VAR_16->sendfile = VAR_15->sendfile;
        VAR_16->need_in_memory = VAR_12->main_filter_need_in_memory
                              || VAR_12->filter_need_in_memory;
        VAR_16->need_in_temp = VAR_12->filter_need_temporary;

        VAR_16->alignment = VAR_17->directio_alignment;

        VAR_16->pool = VAR_12->pool;
        VAR_16->bufs = VAR_18->bufs;
        VAR_16->tag = (ngx_buf_tag_t) &VAR_8;

        VAR_16->output_filter = (ngx_output_chain_filter_pt)
                                  VAR_11;
        VAR_16->filter_ctx = VAR_12;
        if (VAR_13 && VAR_13->buf && FUNC_0(VAR_13->buf)) {
            VAR_12->request_output = 1;
        }
    }





    VAR_14 = FUNC_6(VAR_16, VAR_13);

    if (VAR_16->in == ((void*)0)) {
        VAR_12->buffered &= ~VAR_3;

    } else {
        VAR_12->buffered |= VAR_3;
    }

    FUNC_5(VAR_4, VAR_15->log, 0,
                   "http copy filter: %i \"%V?%V\"", VAR_14, &VAR_12->uri, &VAR_12->args);

    return VAR_14;
}
