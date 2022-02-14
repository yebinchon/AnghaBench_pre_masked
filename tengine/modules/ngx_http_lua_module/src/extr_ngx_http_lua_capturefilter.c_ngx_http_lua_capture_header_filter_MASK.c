
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_14__ {int filter_need_in_memory; int header_sent; scalar_t__ method; int header_only; TYPE_1__* connection; TYPE_3__* post_subrequest; int uri; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_15__ {scalar_t__ handler; TYPE_4__* data; } ;
typedef TYPE_3__ ngx_http_post_subrequest_t ;
struct TYPE_16__ {TYPE_5__* ctx; } ;
typedef TYPE_4__ ngx_http_lua_post_subrequest_data_t ;
struct TYPE_17__ {int header_sent; scalar_t__ capture; int * body; int ** last_body; int index; } ;
typedef TYPE_5__ ngx_http_lua_ctx_t ;
struct TYPE_13__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,TYPE_5__*) ;
 TYPE_5__* FUNC_1 (TYPE_2__*,int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (TYPE_2__*,TYPE_5__*,int ) ;
 int FUNC_4 (int ,int ,int ,char*) ;
 int FUNC_5 (int ,int ,int ,char*,int *) ;
 int FUNC_6 (int ,int ,int ,char*,scalar_t__,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_http_request_t *VAR_5)
{
    ngx_http_post_subrequest_t *VAR_6;
    ngx_http_lua_ctx_t *VAR_7;
    ngx_http_lua_ctx_t *VAR_8;

    ngx_http_lua_post_subrequest_data_t *VAR_9;

    FUNC_5(VAR_1, VAR_5->connection->log, 0,
                   "lua capture header filter, uri \"%V\"", &VAR_5->uri);

    VAR_8 = FUNC_1(VAR_5, VAR_3);

    FUNC_0("old ctx: %p", VAR_8);

    if (VAR_8 == ((void*)0) || ! VAR_8->capture) {

        VAR_6 = VAR_5->post_subrequest;

        if (VAR_6 != ((void*)0)
            && VAR_6->handler == VAR_4
            && VAR_6->data != ((void*)0))
        {



            VAR_9 = VAR_6->data;

            VAR_7 = VAR_9->ctx;

            if (VAR_8 == ((void*)0)) {
                VAR_8 = VAR_7;
                FUNC_3(VAR_5, VAR_8, VAR_3);

            } else {
                FUNC_6(VAR_1, VAR_5->connection->log, 0,
                               "lua restoring ctx with capture %d, index %d",
                               VAR_7->capture, VAR_7->index);

                VAR_8->capture = VAR_7->capture;
                VAR_8->index = VAR_7->index;
                VAR_8->body = ((void*)0);
                VAR_8->last_body = &VAR_8->body;
                VAR_9->ctx = VAR_8;
            }
        }
    }

    if (VAR_8 && VAR_8->capture) {
        FUNC_4(VAR_1, VAR_5->connection->log, 0,
                       "lua capturing response body");


        VAR_5->filter_need_in_memory = 1;
        VAR_5->header_sent = 1;
        VAR_8->header_sent = 1;

        if (VAR_5->method == VAR_0) {
            VAR_5->header_only = 1;
        }

        return VAR_2;
    }

    return FUNC_2(VAR_5);
}
