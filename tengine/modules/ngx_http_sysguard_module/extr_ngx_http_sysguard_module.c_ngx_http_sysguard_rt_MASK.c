
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_12__ {char* data; int len; } ;
typedef TYPE_3__ ngx_str_t ;
struct TYPE_11__ {char* data; int len; } ;
struct TYPE_13__ {scalar_t__ rt; scalar_t__ rt_period; TYPE_2__ rt_action; } ;
typedef TYPE_4__ ngx_http_sysguard_conf_t ;
struct TYPE_14__ {TYPE_1__* args; } ;
typedef TYPE_5__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_10__ {size_t nelts; TYPE_3__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ,TYPE_5__*,int ,char*,TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

__attribute__((used)) static char *
FUNC_4(ngx_conf_t *VAR_5, ngx_command_t *VAR_6, void *VAR_7)
{
    ngx_http_sysguard_conf_t *VAR_8 = VAR_7;

    ngx_str_t *VAR_9, VAR_10;
    ngx_uint_t VAR_11;

    VAR_9 = VAR_5->args->elts;

    for (VAR_11 = 1; VAR_11 < VAR_5->args->nelts; VAR_11++) {
        if (FUNC_3(VAR_9[VAR_11].data, "rt=", 3) == 0) {

            if (VAR_8->rt != VAR_2) {
                return "is duplicate";
            }

            VAR_8->rt = FUNC_0(VAR_9[VAR_11].data + 3, VAR_9[VAR_11].len - 3, 3);
            if (VAR_8->rt == VAR_3) {
                goto invalid;
            }

            continue;
        }

        if (FUNC_3(VAR_9[VAR_11].data, "period=", 7) == 0) {

            VAR_10.data = VAR_9[VAR_11].data + 7;
            VAR_10.len = VAR_9[VAR_11].len - 7;

            VAR_8->rt_period = FUNC_2(&VAR_10, 1);
            if (VAR_8->rt_period == VAR_3) {
                goto invalid;
            }

            continue;
        }

        if (FUNC_3(VAR_9[VAR_11].data, "action=", 7) == 0) {

            if (VAR_9[VAR_11].len == 7) {
                goto invalid;
            }

            if (VAR_9[VAR_11].data[7] != '/' && VAR_9[VAR_11].data[7] != '@') {
                goto invalid;
            }

            VAR_8->rt_action.data = VAR_9[VAR_11].data + 7;
            VAR_8->rt_action.len = VAR_9[VAR_11].len - 7;

            continue;
        }
    }

    return VAR_1;

invalid:

    FUNC_1(VAR_4, VAR_5, 0,
                       "invalid parameter \"%V\"", &VAR_9[VAR_11]);

    return VAR_0;
}
