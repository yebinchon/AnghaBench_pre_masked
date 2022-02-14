
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u_char ;
typedef int ssize_t ;
struct TYPE_11__ {scalar_t__ len; } ;
typedef TYPE_2__ ngx_str_t ;
typedef scalar_t__ ngx_log_intercept_pt ;
struct TYPE_12__ {int requires_capture_log; } ;
typedef TYPE_3__ ngx_http_lua_main_conf_t ;
typedef int ngx_http_lua_log_ringbuf_t ;
struct TYPE_13__ {int * intercept_error_log_data; scalar_t__ intercept_error_log_handler; } ;
typedef TYPE_4__ ngx_cycle_t ;
struct TYPE_14__ {int pool; TYPE_4__* cycle; TYPE_1__* args; } ;
typedef TYPE_5__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_10__ {TYPE_2__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_5__*,int ,char*,TYPE_2__*,...) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,int *,int) ;
 int * FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_2__*) ;

char *
FUNC_4(ngx_conf_t *VAR_5, ngx_command_t *VAR_6,
    void *VAR_7)
{

    return "not found: missing the capture error log patch for nginx";
}
