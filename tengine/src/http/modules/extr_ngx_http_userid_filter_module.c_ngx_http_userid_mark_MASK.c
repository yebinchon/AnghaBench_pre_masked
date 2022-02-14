
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char u_char ;
struct TYPE_7__ {char* data; int len; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_8__ {char mark; } ;
typedef TYPE_3__ ngx_http_userid_conf_t ;
struct TYPE_9__ {TYPE_1__* args; } ;
typedef TYPE_4__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_6__ {TYPE_2__* elts; } ;


 char* VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*) ;

__attribute__((used)) static char *
FUNC_1(ngx_conf_t *VAR_1, ngx_command_t *VAR_2, void *VAR_3)
{
    ngx_http_userid_conf_t *VAR_4 = VAR_3;

    ngx_str_t *VAR_5;

    if (VAR_4->mark != (u_char) '\xFF') {
        return "is duplicate";
    }

    VAR_5 = VAR_1->args->elts;

    if (FUNC_0(VAR_5[1].data, "off") == 0) {
        VAR_4->mark = '\0';
        return VAR_0;
    }

    if (VAR_5[1].len != 1
        || !((VAR_5[1].data[0] >= '0' && VAR_5[1].data[0] <= '9')
              || (VAR_5[1].data[0] >= 'A' && VAR_5[1].data[0] <= 'Z')
              || (VAR_5[1].data[0] >= 'a' && VAR_5[1].data[0] <= 'z')
              || VAR_5[1].data[0] == '='))
    {
        return "value must be \"off\" or a single letter, digit or \"=\"";
    }

    VAR_4->mark = VAR_5[1].data[0];

    return VAR_0;
}
