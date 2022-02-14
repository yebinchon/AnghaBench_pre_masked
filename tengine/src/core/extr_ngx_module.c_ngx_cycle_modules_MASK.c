
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_module_t ;
typedef int ngx_int_t ;
struct TYPE_3__ {int modules_n; int * modules; int pool; } ;
typedef TYPE_1__ ngx_cycle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (int ,int) ;

ngx_int_t
FUNC_2(ngx_cycle_t *VAR_5)
{





    VAR_5->modules = FUNC_1(VAR_5->pool, (VAR_2 + 1)
                                              * sizeof(ngx_module_t *));
    if (VAR_5->modules == ((void*)0)) {
        return VAR_0;
    }

    FUNC_0(VAR_5->modules, VAR_3,
               VAR_4 * sizeof(ngx_module_t *));

    VAR_5->modules_n = VAR_4;

    return VAR_1;
}
