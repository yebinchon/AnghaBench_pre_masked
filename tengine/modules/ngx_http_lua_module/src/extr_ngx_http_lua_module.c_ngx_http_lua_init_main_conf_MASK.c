
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ regex_cache_max_entries; scalar_t__ regex_match_limit; scalar_t__ max_pending_timers; scalar_t__ max_running_timers; scalar_t__ set_sa_restart; int malloc_trim_cycle; int cycle; } ;
typedef TYPE_1__ ngx_http_lua_main_conf_t ;
struct TYPE_5__ {int cycle; } ;
typedef TYPE_2__ ngx_conf_t ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static char *
FUNC_0(ngx_conf_t *VAR_3, void *VAR_4)
{
    ngx_http_lua_main_conf_t *VAR_5 = VAR_4;
    if (VAR_5->max_pending_timers == VAR_1) {
        VAR_5->max_pending_timers = 1024;
    }

    if (VAR_5->max_running_timers == VAR_1) {
        VAR_5->max_running_timers = 256;
    }
    VAR_5->cycle = VAR_3->cycle;

    return VAR_0;
}
