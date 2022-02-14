
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_18__ {scalar_t__ tag; } ;
struct TYPE_21__ {TYPE_5__* input_filter_ctx; int input_filter; int input_filter_init; TYPE_2__* pipe; int buffering; int finalize_request; int abort_request; int process_header; int reinit_request; int create_request; int create_key; int * caches; TYPE_3__* conf; TYPE_1__ output; int schema; } ;
typedef TYPE_4__ ngx_http_upstream_t ;
struct TYPE_22__ {int request_body_no_buffering; int pool; scalar_t__ state; TYPE_4__* upstream; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_23__ {int caches; } ;
typedef TYPE_6__ ngx_http_fastcgi_main_conf_t ;
struct TYPE_20__ {scalar_t__ pass_request_body; int request_buffering; int buffering; } ;
struct TYPE_24__ {TYPE_3__ upstream; scalar_t__ fastcgi_lengths; } ;
typedef TYPE_7__ ngx_http_fastcgi_loc_conf_t ;
typedef int ngx_http_fastcgi_ctx_t ;
typedef int ngx_event_pipe_t ;
typedef scalar_t__ ngx_buf_tag_t ;
struct TYPE_19__ {TYPE_5__* input_ctx; int input_filter; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_5__*,TYPE_7__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_7__* FUNC_1 (TYPE_5__*,int ) ;
 TYPE_6__* FUNC_2 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (TYPE_5__*,int *,int ) ;
 scalar_t__ FUNC_5 (TYPE_5__*) ;
 int VAR_14 ;
 void* FUNC_6 (int ,int) ;
 int FUNC_7 (int *,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_8(ngx_http_request_t *VAR_15)
{
    ngx_int_t VAR_16;
    ngx_http_upstream_t *VAR_17;
    ngx_http_fastcgi_ctx_t *VAR_18;
    ngx_http_fastcgi_loc_conf_t *VAR_19;




    if (FUNC_5(VAR_15) != VAR_3) {
        return VAR_1;
    }

    VAR_18 = FUNC_6(VAR_15->pool, sizeof(ngx_http_fastcgi_ctx_t));
    if (VAR_18 == ((void*)0)) {
        return VAR_1;
    }

    FUNC_4(VAR_15, VAR_18, VAR_10);

    VAR_19 = FUNC_1(VAR_15, VAR_10);

    if (VAR_19->fastcgi_lengths) {
        if (FUNC_0(VAR_15, VAR_19) != VAR_3) {
            return VAR_1;
        }
    }

    VAR_17 = VAR_15->upstream;

    FUNC_7(&VAR_17->schema, "fastcgi://");
    VAR_17->output.tag = (ngx_buf_tag_t) &VAR_10;

    VAR_17->conf = &VAR_19->upstream;
    VAR_17->create_request = VAR_6;
    VAR_17->reinit_request = VAR_13;
    VAR_17->process_header = VAR_12;
    VAR_17->abort_request = VAR_4;
    VAR_17->finalize_request = VAR_7;
    VAR_15->state = 0;

    VAR_17->buffering = VAR_19->upstream.buffering;

    VAR_17->pipe = FUNC_6(VAR_15->pool, sizeof(ngx_event_pipe_t));
    if (VAR_17->pipe == ((void*)0)) {
        return VAR_1;
    }

    VAR_17->pipe->input_filter = VAR_8;
    VAR_17->pipe->input_ctx = VAR_15;

    VAR_17->input_filter_init = VAR_9;
    VAR_17->input_filter = VAR_11;
    VAR_17->input_filter_ctx = VAR_15;

    if (!VAR_19->upstream.request_buffering
        && VAR_19->upstream.pass_request_body)
    {
        VAR_15->request_body_no_buffering = 1;
    }

    VAR_16 = FUNC_3(VAR_15, VAR_14);

    if (VAR_16 >= VAR_2) {
        return VAR_16;
    }

    return VAR_0;
}
