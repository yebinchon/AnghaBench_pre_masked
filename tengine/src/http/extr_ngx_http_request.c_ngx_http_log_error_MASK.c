
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_10__ {TYPE_5__* data; int * action; } ;
typedef TYPE_3__ ngx_log_t ;
struct TYPE_11__ {int * (* log_handler ) (TYPE_4__*,int ,int *,size_t) ;} ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_12__ {TYPE_2__* connection; int current_request; TYPE_4__* request; } ;
typedef TYPE_5__ ngx_http_log_ctx_t ;
struct TYPE_9__ {TYPE_1__* listening; int addr_text; } ;
struct TYPE_8__ {int addr_text; } ;


 int * FUNC_0 (int *,size_t,char*,int *) ;
 int * FUNC_1 (TYPE_4__*,int ,int *,size_t) ;

__attribute__((used)) static u_char *
FUNC_2(ngx_log_t *VAR_0, u_char *VAR_1, size_t VAR_2)
{
    u_char *VAR_3;
    ngx_http_request_t *VAR_4;
    ngx_http_log_ctx_t *VAR_5;

    if (VAR_0->action) {
        VAR_3 = FUNC_0(VAR_1, VAR_2, " while %s", VAR_0->action);
        VAR_2 -= VAR_3 - VAR_1;
        VAR_1 = VAR_3;
    }

    VAR_5 = VAR_0->data;

    VAR_3 = FUNC_0(VAR_1, VAR_2, ", client: %V", &VAR_5->connection->addr_text);
    VAR_2 -= VAR_3 - VAR_1;

    VAR_4 = VAR_5->request;

    if (VAR_4) {
        return VAR_4->log_handler(VAR_4, VAR_5->current_request, VAR_3, VAR_2);

    } else {
        VAR_3 = FUNC_0(VAR_3, VAR_2, ", server: %V",
                         &VAR_5->connection->listening->addr_text);
    }

    return VAR_3;
}
