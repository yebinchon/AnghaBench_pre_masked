
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef void* ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_16__ {scalar_t__ uri_changes; int internal; TYPE_3__* main; scalar_t__ add_uri_to_alias; scalar_t__ valid_unparsed_uri; int * cache; int loc_conf; int ctx; void* args; TYPE_1__* connection; void* uri; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_17__ {TYPE_2__* ctx; } ;
typedef TYPE_5__ ngx_http_core_srv_conf_t ;
struct TYPE_15__ {int count; } ;
struct TYPE_14__ {int loc_conf; } ;
struct TYPE_13__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 TYPE_5__* FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ,int ,int ,char*,void**,void**) ;
 int FUNC_6 (int ,int ,int ,char*,void**) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (void**) ;

ngx_int_t
FUNC_9(ngx_http_request_t *VAR_6,
    ngx_str_t *VAR_7, ngx_str_t *VAR_8)
{
    ngx_http_core_srv_conf_t *VAR_9;

    VAR_6->uri_changes--;

    if (VAR_6->uri_changes == 0) {
        FUNC_6(VAR_3, VAR_6->connection->log, 0,
                      "rewrite or internal redirection cycle "
                      "while internally redirecting to \"%V\"", VAR_7);

        VAR_6->main->count++;
        FUNC_0(VAR_6, VAR_1);
        return VAR_0;
    }

    VAR_6->uri = *VAR_7;

    if (VAR_8) {
        VAR_6->args = *VAR_8;

    } else {
        FUNC_8(&VAR_6->args);
    }

    FUNC_5(VAR_2, VAR_6->connection->log, 0,
                   "internal redirect: \"%V?%V\"", VAR_7, &VAR_6->args);

    FUNC_3(VAR_6);


    FUNC_7(VAR_6->ctx, sizeof(void *) * VAR_5);

    VAR_9 = FUNC_1(VAR_6, VAR_4);
    VAR_6->loc_conf = VAR_9->ctx->loc_conf;

    FUNC_4(VAR_6);





    VAR_6->internal = 1;
    VAR_6->valid_unparsed_uri = 0;
    VAR_6->add_uri_to_alias = 0;
    VAR_6->main->count++;

    FUNC_2(VAR_6);

    return VAR_0;
}
