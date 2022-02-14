
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ngx_flag_t ;
typedef int ngx_conf_t ;
struct TYPE_4__ {int offset; } ;
typedef TYPE_1__ ngx_command_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ,char*) ;
 char* FUNC_1 (int *,TYPE_1__*,void*) ;

char *
FUNC_2(ngx_conf_t *VAR_2, ngx_command_t *VAR_3, void *VAR_4)
{
    char *VAR_5 = VAR_4;
    ngx_flag_t *VAR_6;
    char *VAR_7;

    VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4);
    if (VAR_7 != VAR_0) {
        return VAR_7;
    }

    VAR_6 = (ngx_flag_t *) (VAR_5 + VAR_3->offset);

    if (!*VAR_6) {
        FUNC_0(VAR_1, VAR_2, 0,
                           "lua_code_cache is off; this will hurt "
                           "performance");
    }

    return VAR_0;
}
