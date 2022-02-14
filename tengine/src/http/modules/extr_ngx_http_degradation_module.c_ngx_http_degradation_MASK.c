
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ data; scalar_t__ len; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_11__ {size_t sbrk_size; } ;
typedef TYPE_3__ ngx_http_degradation_main_conf_t ;
struct TYPE_12__ {TYPE_1__* args; } ;
typedef TYPE_4__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_9__ {TYPE_2__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_4__*,int ,char*,TYPE_2__*) ;
 size_t FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (scalar_t__,char*,int) ;

__attribute__((used)) static char *
FUNC_3(ngx_conf_t *VAR_4, ngx_command_t *VAR_5, void *VAR_6)
{
    ngx_http_degradation_main_conf_t *VAR_7 = VAR_6;

    ngx_str_t *VAR_8, VAR_9;

    VAR_8 = VAR_4->args->elts;

    if (FUNC_2(VAR_8[1].data, "sbrk=", 5) == 0) {

        VAR_9.len = VAR_8[1].len - 5;
        VAR_9.data = VAR_8[1].data + 5;

        VAR_7->sbrk_size = FUNC_1(&VAR_9);
        if (VAR_7->sbrk_size == (size_t) VAR_2) {
            FUNC_0(VAR_3, VAR_4, 0,
                               "invalid sbrk size \"%V\"", &VAR_8[1]);
            return VAR_0;
        }

        return VAR_1;
    }

    FUNC_0(VAR_3, VAR_4, 0,
                       "invalid parameter \"%V\"", &VAR_8[1]);

    return VAR_0;
}
