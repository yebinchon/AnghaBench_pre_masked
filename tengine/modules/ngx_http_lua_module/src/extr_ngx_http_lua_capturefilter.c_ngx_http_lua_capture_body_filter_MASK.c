
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_14__ {int data; scalar_t__ len; } ;
struct TYPE_12__ {int pool; struct TYPE_12__* main; TYPE_4__ uri; TYPE_1__* connection; struct TYPE_12__* parent; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_13__ {int seen_last_for_subreq; int last_body; scalar_t__ run_post_subrequest; int capture; } ;
typedef TYPE_3__ ngx_http_lua_ctx_t ;
typedef int ngx_chain_t ;
struct TYPE_11__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int) ;
 TYPE_3__* FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*,int *,int *,int*) ;
 int FUNC_3 (int ,int *) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (int ,int ,int ,char*) ;
 int FUNC_6 (int ,int ,int ,char*,TYPE_4__*) ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_http_request_t *VAR_4, ngx_chain_t *VAR_5)
{
    int VAR_6;
    ngx_int_t VAR_7;
    ngx_http_lua_ctx_t *VAR_8;
    ngx_http_lua_ctx_t *VAR_9;

    FUNC_6(VAR_1, VAR_4->connection->log, 0,
                   "lua capture body filter, uri \"%V\"", &VAR_4->uri);

    if (VAR_5 == ((void*)0)) {
        return FUNC_4(VAR_4, ((void*)0));
    }

    VAR_8 = FUNC_1(VAR_4, VAR_3);

    if (!VAR_8 || !VAR_8->capture) {
        FUNC_0("no ctx or no capture %.*s", (int) VAR_4->uri.len, VAR_4->uri.data);

        return FUNC_4(VAR_4, VAR_5);
    }

    if (VAR_8->run_post_subrequest) {
        FUNC_5(VAR_1, VAR_4->connection->log, 0,
                       "lua body filter skipped because post subrequest "
                       "already run");
        return VAR_2;
    }

    if (VAR_4->parent == ((void*)0)) {
        FUNC_5(VAR_1, VAR_4->connection->log, 0,
                       "lua body filter skipped because no parent request "
                       "found");

        return VAR_0;
    }

    VAR_9 = FUNC_1(VAR_4->parent, VAR_3);
    if (VAR_9 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_6(VAR_1, VAR_4->connection->log, 0,
                   "lua capture body filter capturing response body, uri "
                   "\"%V\"", &VAR_4->uri);

    VAR_6 = FUNC_2(VAR_4, VAR_9, &VAR_8->last_body, VAR_5, &VAR_7);
    if (VAR_6 != VAR_2) {
        return VAR_0;
    }

    FUNC_0("add copy chain eof: %d, sr: %d", (int) VAR_7, VAR_4 != VAR_4->main);

    if (VAR_7) {
        VAR_8->seen_last_for_subreq = 1;
    }

    FUNC_3(VAR_4->pool, VAR_5);

    return VAR_2;
}
