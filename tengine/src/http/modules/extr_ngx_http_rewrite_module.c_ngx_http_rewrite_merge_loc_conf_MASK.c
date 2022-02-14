
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * codes; int stack_size; int uninitialized_variable_warn; int log; } ;
typedef TYPE_1__ ngx_http_rewrite_loc_conf_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 uintptr_t* FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static char *
FUNC_3(ngx_conf_t *VAR_2, void *VAR_3, void *VAR_4)
{
    ngx_http_rewrite_loc_conf_t *VAR_5 = VAR_3;
    ngx_http_rewrite_loc_conf_t *VAR_6 = VAR_4;

    uintptr_t *VAR_7;

    FUNC_2(VAR_6->log, VAR_5->log, 0);
    FUNC_2(VAR_6->uninitialized_variable_warn,
                         VAR_5->uninitialized_variable_warn, 1);
    FUNC_1(VAR_6->stack_size, VAR_5->stack_size, 10);

    if (VAR_6->codes == ((void*)0)) {
        return VAR_1;
    }

    if (VAR_6->codes == VAR_5->codes) {
        return VAR_1;
    }

    VAR_7 = FUNC_0(VAR_6->codes, sizeof(uintptr_t));
    if (VAR_7 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_7 = (uintptr_t) ((void*)0);

    return VAR_1;
}
