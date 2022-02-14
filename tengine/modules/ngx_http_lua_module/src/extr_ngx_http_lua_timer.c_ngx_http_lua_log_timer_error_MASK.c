
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_9__ {TYPE_4__* data; TYPE_2__* action; } ;
typedef TYPE_3__ ngx_log_t ;
struct TYPE_8__ {scalar_t__ len; } ;
struct TYPE_10__ {TYPE_1__* listening; TYPE_2__ addr_text; } ;
typedef TYPE_4__ ngx_connection_t ;
struct TYPE_7__ {TYPE_2__ addr_text; } ;


 int FUNC_0 (char*,TYPE_4__*) ;
 int * FUNC_1 (int *,size_t,char*,...) ;

__attribute__((used)) static u_char *
FUNC_2(ngx_log_t *VAR_0, u_char *VAR_1, size_t VAR_2)
{
    u_char *VAR_3;
    ngx_connection_t *VAR_4;

    if (VAR_0->action) {
        VAR_3 = FUNC_1(VAR_1, VAR_2, " while %s", VAR_0->action);
        VAR_2 -= VAR_3 - VAR_1;
        VAR_1 = VAR_3;
    }

    VAR_4 = VAR_0->data;

    FUNC_0("ctx = %p", VAR_4);

    VAR_3 = FUNC_1(VAR_1, VAR_2, ", context: ngx.timer");
    VAR_2 -= VAR_3 - VAR_1;
    VAR_1 = VAR_3;

    if (VAR_4->addr_text.len) {
        VAR_3 = FUNC_1(VAR_1, VAR_2, ", client: %V", &VAR_4->addr_text);
        VAR_2 -= VAR_3 - VAR_1;
        VAR_1 = VAR_3;
    }

    if (VAR_4 && VAR_4->listening && VAR_4->listening->addr_text.len) {
        VAR_3 = FUNC_1(VAR_1, VAR_2, ", server: %V", &VAR_4->listening->addr_text);

        VAR_1 = VAR_3;
    }

    return VAR_1;
}
