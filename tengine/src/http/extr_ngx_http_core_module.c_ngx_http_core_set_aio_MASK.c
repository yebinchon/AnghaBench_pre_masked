
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int ngx_thread_pool_t ;
struct TYPE_15__ {char* data; int len; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_16__ {scalar_t__ aio; int * thread_pool; TYPE_4__* thread_pool_value; } ;
typedef TYPE_3__ ngx_http_core_loc_conf_t ;
struct TYPE_17__ {int * lengths; } ;
typedef TYPE_4__ ngx_http_complex_value_t ;
struct TYPE_18__ {TYPE_4__* complex_value; TYPE_2__* value; TYPE_6__* cf; } ;
typedef TYPE_5__ ngx_http_compile_complex_value_t ;
struct TYPE_19__ {int pool; TYPE_1__* args; } ;
typedef TYPE_6__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_14__ {TYPE_2__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,TYPE_6__*,int ,char*) ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,int) ;
 TYPE_4__* FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 int * FUNC_6 (TYPE_6__*,TYPE_2__*) ;

__attribute__((used)) static char *
FUNC_7(ngx_conf_t *VAR_9, ngx_command_t *VAR_10, void *VAR_11)
{
    ngx_http_core_loc_conf_t *VAR_12 = VAR_11;

    ngx_str_t *VAR_13;

    if (VAR_12->aio != VAR_2) {
        return "is duplicate";
    }






    VAR_13 = VAR_9->args->elts;

    if (FUNC_4(VAR_13[1].data, "off") == 0) {
        VAR_12->aio = VAR_3;
        return VAR_1;
    }

    if (FUNC_4(VAR_13[1].data, "on") == 0) {




        FUNC_0(VAR_6, VAR_9, 0,
                           "\"aio on\" "
                           "is unsupported on this platform");
        return VAR_0;

    }
    if (FUNC_5(VAR_13[1].data, "threads", 7) == 0
        && (VAR_13[1].len == 7 || VAR_13[1].data[7] == '='))
    {
        FUNC_0(VAR_6, VAR_9, 0,
                           "\"aio threads\" "
                           "is unsupported on this platform");
        return VAR_0;

    }

    return "invalid value";
}
