
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_7__ {char* data; scalar_t__ len; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_8__ {int priority; } ;
typedef TYPE_3__ ngx_proc_conf_t ;
struct TYPE_9__ {TYPE_1__* args; } ;
typedef TYPE_4__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_6__ {TYPE_2__* elts; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;

__attribute__((used)) static char *
FUNC_1(ngx_conf_t *VAR_2, ngx_command_t *VAR_3, void *VAR_4)
{
    ngx_proc_conf_t *VAR_5 = VAR_4;

    ngx_str_t *VAR_6;
    ngx_uint_t VAR_7, VAR_8;

    if (VAR_5->priority != 0) {
        return "is duplicate";
    }

    VAR_6 = VAR_2->args->elts;

    if (VAR_6[1].data[0] == '-') {
        VAR_7 = 1;
        VAR_8 = 1;

    } else if (VAR_6[1].data[0] == '+') {
        VAR_7 = 1;
        VAR_8 = 0;

    } else {
        VAR_7 = 0;
        VAR_8 = 0;
    }

    VAR_5->priority = FUNC_0(&VAR_6[1].data[VAR_7], VAR_6[1].len - VAR_7);
    if (VAR_5->priority == VAR_1) {
        return "invalid number";
    }

    if (VAR_8) {
        VAR_5->priority = -VAR_5->priority;
    }

    return VAR_0;
}
