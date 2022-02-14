
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ enable; scalar_t__ trylock; int read_msg_timeout; int shm_size; } ;
typedef TYPE_1__ ngx_http_dyups_main_conf_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 char* FUNC_0 (int *,void*) ;

__attribute__((used)) static char *
FUNC_1(ngx_conf_t *VAR_5, void *VAR_6)
{
    ngx_http_dyups_main_conf_t *VAR_7 = VAR_6;

    if (VAR_7->enable == VAR_1) {
        VAR_7->enable = 0;
    }

    VAR_7->enable = VAR_7->enable || VAR_4;

    if (VAR_7->trylock == VAR_1) {
        VAR_7->trylock = 0;
    }

    if (!VAR_7->enable) {
        return VAR_0;
    }

    if (VAR_7->read_msg_timeout == VAR_2) {
        VAR_7->read_msg_timeout = 1000;
    }

    if (VAR_7->shm_size == VAR_3) {
        VAR_7->shm_size = 2 * 1024 * 1024;
    }

    return FUNC_0(VAR_5, VAR_6);
}
