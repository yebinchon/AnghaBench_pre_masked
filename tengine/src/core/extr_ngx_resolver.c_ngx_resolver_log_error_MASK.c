
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_4__ {int server; } ;
typedef TYPE_1__ ngx_resolver_connection_t ;
struct TYPE_5__ {TYPE_1__* data; int * action; } ;
typedef TYPE_2__ ngx_log_t ;


 int * FUNC_0 (int *,size_t,char*,int *) ;

__attribute__((used)) static u_char *
FUNC_1(ngx_log_t *VAR_0, u_char *VAR_1, size_t VAR_2)
{
    u_char *VAR_3;
    ngx_resolver_connection_t *VAR_4;

    VAR_3 = VAR_1;

    if (VAR_0->action) {
        VAR_3 = FUNC_0(VAR_1, VAR_2, " while %s", VAR_0->action);
        VAR_2 -= VAR_3 - VAR_1;
    }

    VAR_4 = VAR_0->data;

    if (VAR_4) {
        VAR_3 = FUNC_0(VAR_3, VAR_2, ", resolver: %V", &VAR_4->server);
    }

    return VAR_3;
}
