
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_11__ {char* data; int len; } ;
typedef TYPE_3__ ngx_str_t ;
struct TYPE_10__ {char* data; int len; } ;
struct TYPE_12__ {size_t load; TYPE_2__ load_action; } ;
typedef TYPE_4__ ngx_http_sysguard_conf_t ;
struct TYPE_13__ {TYPE_1__* args; } ;
typedef TYPE_5__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_9__ {int nelts; TYPE_3__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ,TYPE_5__*,int ,char*,TYPE_3__*) ;
 size_t VAR_5 ;
 scalar_t__ FUNC_2 (char*,char*,int) ;

__attribute__((used)) static char *
FUNC_3(ngx_conf_t *VAR_6, ngx_command_t *VAR_7, void *VAR_8)
{
    ngx_http_sysguard_conf_t *VAR_9 = VAR_8;

    ngx_str_t *VAR_10;
    ngx_uint_t VAR_11, VAR_12;

    VAR_10 = VAR_6->args->elts;
    VAR_11 = 1;
    VAR_12 = 1;

    if (FUNC_2(VAR_10[VAR_11].data, "load=", 5) == 0) {

        if (VAR_9->load != VAR_2) {
            return "is duplicate";
        }

        if (VAR_10[VAR_11].len == 5) {
            goto invalid;
        }

        VAR_10[VAR_11].data += 5;
        VAR_10[VAR_11].len -= 5;

        if (FUNC_2(VAR_10[VAR_11].data, "ncpu*", 5) == 0) {
            VAR_10[VAR_11].data += 5;
            VAR_10[VAR_11].len -= 5;
            VAR_12 = VAR_5;
        }

        VAR_9->load = FUNC_0(VAR_10[VAR_11].data, VAR_10[VAR_11].len, 3);
        if (VAR_9->load == VAR_3) {
            goto invalid;
        }

        VAR_9->load = VAR_9->load * VAR_12;

        if (VAR_6->args->nelts == 2) {
            return VAR_1;
        }

        VAR_11++;

        if (FUNC_2(VAR_10[VAR_11].data, "action=", 7) != 0) {
            goto invalid;
        }

        if (VAR_10[VAR_11].len == 7) {
            goto invalid;
        }

        if (VAR_10[VAR_11].data[7] != '/' && VAR_10[VAR_11].data[7] != '@') {
            goto invalid;
        }

        VAR_9->load_action.data = VAR_10[VAR_11].data + 7;
        VAR_9->load_action.len = VAR_10[VAR_11].len - 7;

        return VAR_1;
    }

invalid:

    FUNC_1(VAR_4, VAR_6, 0,
                       "invalid parameter \"%V\"", &VAR_10[VAR_11]);

    return VAR_0;
}
