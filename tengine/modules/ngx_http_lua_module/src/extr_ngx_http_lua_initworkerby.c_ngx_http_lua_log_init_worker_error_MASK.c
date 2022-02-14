
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {scalar_t__ action; } ;
typedef TYPE_1__ ngx_log_t ;


 int * FUNC_0 (int *,size_t,char*,...) ;

__attribute__((used)) static u_char *
FUNC_1(ngx_log_t *VAR_0, u_char *VAR_1, size_t VAR_2)
{
    u_char *VAR_3;

    if (VAR_0->action) {
        VAR_3 = FUNC_0(VAR_1, VAR_2, " while %s", VAR_0->action);
        VAR_2 -= VAR_3 - VAR_1;
        VAR_1 = VAR_3;
    }

    return FUNC_0(VAR_1, VAR_2, ", context: init_worker_by_lua*");
}
