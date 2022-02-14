
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_11__ {int sin_addr; } ;
struct TYPE_9__ {int local_addr_text; TYPE_6__ local_addr; } ;
typedef TYPE_2__ ngx_http_tfs_upstream_t ;
struct TYPE_10__ {TYPE_1__* args; } ;
typedef TYPE_3__ ngx_conf_t ;
struct TYPE_8__ {int nelts; int * elts; } ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,TYPE_3__*,int ,char*,...) ;
 scalar_t__ FUNC_1 (int ,TYPE_6__*) ;
 int FUNC_2 (int ,int *,int ,int ) ;

__attribute__((used)) static char *
FUNC_3(ngx_conf_t *VAR_6, ngx_http_tfs_upstream_t *VAR_7)
{
    ngx_int_t VAR_8;
    ngx_str_t *VAR_9;

    if (VAR_6->args->nelts != 2) {
        FUNC_0(VAR_5, VAR_6, 0,
                           "invalid number of arguments in "
                           "\"rcs_interface\" directive");
        return VAR_1;
    }

    VAR_9 = VAR_6->args->elts;
    VAR_8 = FUNC_1(VAR_9[1], &VAR_7->local_addr);
    if (VAR_8 == VAR_3) {
        FUNC_0(VAR_5, VAR_6, 0, "device is invalid(%V)",
                           &VAR_9[1]);
        return VAR_1;
    }

    FUNC_2(VAR_0, &VAR_7->local_addr.sin_addr, VAR_7->local_addr_text,
                  VAR_4);
    return VAR_2;
}
