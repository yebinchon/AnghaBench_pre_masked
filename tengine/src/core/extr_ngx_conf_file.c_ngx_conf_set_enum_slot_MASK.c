
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
struct TYPE_12__ {scalar_t__ len; int data; } ;
typedef TYPE_3__ ngx_str_t ;
struct TYPE_13__ {TYPE_1__* args; } ;
typedef TYPE_4__ ngx_conf_t ;
struct TYPE_11__ {scalar_t__ len; int data; } ;
struct TYPE_14__ {scalar_t__ value; TYPE_2__ name; } ;
typedef TYPE_5__ ngx_conf_enum_t ;
struct TYPE_15__ {int offset; TYPE_5__* post; } ;
typedef TYPE_6__ ngx_command_t ;
struct TYPE_10__ {TYPE_3__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_4__*,int ,char*,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

char *
FUNC_2(ngx_conf_t *VAR_4, ngx_command_t *VAR_5, void *VAR_6)
{
    char *VAR_7 = VAR_6;

    ngx_uint_t *VAR_8, VAR_9;
    ngx_str_t *VAR_10;
    ngx_conf_enum_t *VAR_11;

    VAR_8 = (ngx_uint_t *) (VAR_7 + VAR_5->offset);

    if (*VAR_8 != VAR_2) {
        return "is duplicate";
    }

    VAR_10 = VAR_4->args->elts;
    VAR_11 = VAR_5->post;

    for (VAR_9 = 0; VAR_11[VAR_9].name.len != 0; VAR_9++) {
        if (VAR_11[VAR_9].name.len != VAR_10[1].len
            || FUNC_1(VAR_11[VAR_9].name.data, VAR_10[1].data) != 0)
        {
            continue;
        }

        *VAR_8 = VAR_11[VAR_9].value;

        return VAR_1;
    }

    FUNC_0(VAR_3, VAR_4, 0,
                       "invalid value \"%s\"", VAR_10[1].data);

    return VAR_0;
}
