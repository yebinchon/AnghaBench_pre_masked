
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_6__ {char* data; size_t len; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_5__ {size_t nelts; TYPE_2__* elts; } ;
struct TYPE_7__ {TYPE_1__ env; } ;
typedef TYPE_3__ ngx_core_conf_t ;
struct TYPE_8__ {int conf_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (char*,char*,size_t) ;

int
FUNC_2(u_char *VAR_4, u_char **VAR_5, size_t *VAR_6)
{
    ngx_uint_t VAR_7;
    ngx_str_t *VAR_8;
    ngx_core_conf_t *VAR_9;

    VAR_9 = (ngx_core_conf_t *) FUNC_0(VAR_3->conf_ctx,
                                           VAR_2);

    VAR_8 = VAR_9->env.elts;

    for (VAR_7 = 0; VAR_7 < VAR_9->env.nelts; VAR_7++) {
        if (VAR_8[VAR_7].data[VAR_8[VAR_7].len] == '='
            && FUNC_1(VAR_4, VAR_8[VAR_7].data, VAR_8[VAR_7].len) == 0)
        {
            *VAR_5 = VAR_8[VAR_7].data;
            *VAR_6 = VAR_8[VAR_7].len;

            return VAR_1;
        }
    }

    return VAR_0;
}
