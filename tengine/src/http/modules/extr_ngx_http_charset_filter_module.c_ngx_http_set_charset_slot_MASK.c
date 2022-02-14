
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {char* data; scalar_t__ len; } ;
typedef TYPE_2__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_15__ {int charsets; } ;
typedef TYPE_3__ ngx_http_charset_main_conf_t ;
struct TYPE_16__ {TYPE_1__* args; } ;
typedef TYPE_4__ ngx_conf_t ;
struct TYPE_17__ {int offset; } ;
typedef TYPE_5__ ngx_command_t ;
struct TYPE_13__ {TYPE_2__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *,TYPE_2__*) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_3__* FUNC_1 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_4__*,TYPE_2__*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static char *
FUNC_5(ngx_conf_t *VAR_9, ngx_command_t *VAR_10, void *VAR_11)
{
    char *VAR_12 = VAR_11;

    ngx_int_t *VAR_13;
    ngx_str_t *VAR_14, VAR_15;
    ngx_http_charset_main_conf_t *VAR_16;

    VAR_13 = (ngx_int_t *) (VAR_12 + VAR_10->offset);

    if (*VAR_13 != VAR_2) {
        return "is duplicate";
    }

    VAR_14 = VAR_9->args->elts;

    if (VAR_10->offset == FUNC_4(VAR_8, VAR_6)
        && FUNC_3(VAR_14[1].data, "off") == 0)
    {
        *VAR_13 = VAR_4;
        return VAR_1;
    }


    if (VAR_14[1].data[0] == '$') {
        VAR_15.len = VAR_14[1].len - 1;
        VAR_15.data = VAR_14[1].data + 1;

        *VAR_13 = FUNC_2(VAR_9, &VAR_15);

        if (*VAR_13 == VAR_3) {
            return VAR_0;
        }

        *VAR_13 += VAR_5;

        return VAR_1;
    }

    VAR_16 = FUNC_1(VAR_9,
                                             VAR_7);

    *VAR_13 = FUNC_0(&VAR_16->charsets, &VAR_14[1]);
    if (*VAR_13 == VAR_3) {
        return VAR_0;
    }

    return VAR_1;
}
