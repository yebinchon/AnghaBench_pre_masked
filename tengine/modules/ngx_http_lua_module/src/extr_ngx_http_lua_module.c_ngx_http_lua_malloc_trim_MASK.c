
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
struct TYPE_8__ {int len; int data; } ;
typedef TYPE_2__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_9__ {int requires_log; scalar_t__ malloc_trim_cycle; } ;
typedef TYPE_3__ ngx_http_lua_main_conf_t ;
struct TYPE_10__ {TYPE_1__* args; } ;
typedef TYPE_4__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_7__ {TYPE_2__* elts; } ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,TYPE_4__*,int ,char*) ;

__attribute__((used)) static char *
FUNC_2(ngx_conf_t *VAR_3, ngx_command_t *VAR_4, void *VAR_5)
{
    FUNC_1(VAR_2, VAR_3, 0, "lua_malloc_trim is not supported "
                       "on this platform, ignored");


    return VAR_0;
}
