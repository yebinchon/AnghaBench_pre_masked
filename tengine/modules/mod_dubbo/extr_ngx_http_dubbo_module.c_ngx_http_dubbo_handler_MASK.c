
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_15__ {scalar_t__ tag; } ;
struct TYPE_17__ {int multi_mode; TYPE_6__* input_filter_ctx; int input_filter; int input_filter_init; scalar_t__ buffering; int * pipe; int finalize_request; int abort_request; int process_header; int reinit_request; int create_request; TYPE_2__* conf; TYPE_1__ output; int schema; } ;
typedef TYPE_3__ ngx_http_upstream_t ;
struct TYPE_18__ {scalar_t__ request_body_no_buffering; int pool; scalar_t__ state; TYPE_3__* upstream; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_16__ {scalar_t__ buffering; } ;
struct TYPE_19__ {TYPE_2__ upstream; } ;
typedef TYPE_5__ ngx_http_dubbo_loc_conf_t ;
struct TYPE_20__ {TYPE_4__* request; } ;
typedef TYPE_6__ ngx_http_dubbo_ctx_t ;
typedef int ngx_event_pipe_t ;
typedef scalar_t__ ngx_buf_tag_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_5__* FUNC_0 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_6__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int VAR_13 ;
 void* FUNC_5 (int ,int) ;
 int FUNC_6 (int *,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_http_request_t *VAR_14)
{
    ngx_int_t VAR_15;
    ngx_http_upstream_t *VAR_16;
    ngx_http_dubbo_ctx_t *VAR_17;
    ngx_http_dubbo_loc_conf_t *VAR_18;

    if (FUNC_4(VAR_14) != VAR_4) {
        return VAR_1;
    }

    VAR_17 = FUNC_5(VAR_14->pool, sizeof(ngx_http_dubbo_ctx_t));
    if (VAR_17 == ((void*)0)) {
        return VAR_1;
    }

    VAR_17->request = VAR_14;

    FUNC_3(VAR_14, VAR_17, VAR_10);

    VAR_16 = VAR_14->upstream;

    FUNC_6(&VAR_16->schema, "dubbo://");
    VAR_16->output.tag = (ngx_buf_tag_t) &VAR_10;

    VAR_18 = FUNC_0(VAR_14, VAR_10);

    VAR_16->conf = &VAR_18->upstream;

    if (FUNC_2(VAR_14) != VAR_4) {
        return VAR_1;
    }

    VAR_16->create_request = VAR_6;
    VAR_16->reinit_request = VAR_12;
    VAR_16->process_header = VAR_11;
    VAR_16->abort_request = VAR_5;
    VAR_16->finalize_request = VAR_9;

    VAR_14->state = 0;
    VAR_16->buffering = 0;


    VAR_16->input_filter_init = VAR_8;
    VAR_16->input_filter = VAR_7;
    VAR_16->input_filter_ctx = VAR_17;


    VAR_14->request_body_no_buffering = 0;

    VAR_16->multi_mode = VAR_3;

    VAR_15 = FUNC_1(VAR_14, VAR_13);

    if (VAR_15 >= VAR_2) {
        return VAR_15;
    }

    return VAR_0;
}
