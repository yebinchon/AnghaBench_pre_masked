
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_14__ {char* data; int len; } ;
typedef TYPE_4__ ngx_str_t ;
struct TYPE_13__ {char* data; int len; } ;
struct TYPE_11__ {char* data; int len; } ;
struct TYPE_15__ {scalar_t__ swap; size_t free; TYPE_3__ free_action; TYPE_1__ swap_action; } ;
typedef TYPE_5__ ngx_http_sysguard_conf_t ;
struct TYPE_16__ {TYPE_2__* args; } ;
typedef TYPE_6__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_12__ {int nelts; TYPE_4__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ,TYPE_6__*,int ,char*,TYPE_4__*) ;
 size_t FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

__attribute__((used)) static char *
FUNC_4(ngx_conf_t *VAR_6, ngx_command_t *VAR_7, void *VAR_8)
{
    ngx_http_sysguard_conf_t *VAR_9 = VAR_8;

    ngx_str_t *VAR_10, VAR_11;
    ngx_uint_t VAR_12;

    VAR_10 = VAR_6->args->elts;
    VAR_12 = 1;

    if (FUNC_3(VAR_10[VAR_12].data, "swapratio=", 10) == 0) {

        if (VAR_9->swap != VAR_2) {
            return "is duplicate";
        }

        if (VAR_10[VAR_12].data[VAR_10[VAR_12].len - 1] != '%') {
            goto invalid;
        }

        VAR_9->swap = FUNC_0(VAR_10[VAR_12].data + 10, VAR_10[VAR_12].len - 11, 2);
        if (VAR_9->swap == VAR_4) {
            goto invalid;
        }

        if (VAR_6->args->nelts == 2) {
            return VAR_1;
        }

        VAR_12++;

        if (FUNC_3(VAR_10[VAR_12].data, "action=", 7) != 0) {
            goto invalid;
        }

        if (VAR_10[VAR_12].len == 7) {
            goto invalid;
        }

        if (VAR_10[VAR_12].data[7] != '/' && VAR_10[VAR_12].data[7] != '@') {
            goto invalid;
        }

        VAR_9->swap_action.data = VAR_10[VAR_12].data + 7;
        VAR_9->swap_action.len = VAR_10[VAR_12].len - 7;

        return VAR_1;

    } else if (FUNC_3(VAR_10[VAR_12].data, "free=", 5) == 0) {

        if (VAR_9->free != VAR_3) {
            return "is duplicate";
        }

        VAR_11.data = VAR_10[VAR_12].data + 5;
        VAR_11.len = VAR_10[VAR_12].len - 5;

        VAR_9->free = FUNC_2(&VAR_11);
        if (VAR_9->free == (size_t) VAR_4) {
            goto invalid;
        }

        if (VAR_6->args->nelts == 2) {
            return VAR_1;
        }

        VAR_12++;

        if (FUNC_3(VAR_10[VAR_12].data, "action=", 7) != 0) {
            goto invalid;
        }

        if (VAR_10[VAR_12].len == 7) {
            goto invalid;
        }

        if (VAR_10[VAR_12].data[7] != '/' && VAR_10[VAR_12].data[7] != '@') {
            goto invalid;
        }

        VAR_9->free_action.data = VAR_10[VAR_12].data + 7;
        VAR_9->free_action.len = VAR_10[VAR_12].len - 7;

        return VAR_1;
    }

invalid:

    FUNC_1(VAR_5, VAR_6, 0,
                       "invalid parameter \"%V\"", &VAR_10[VAR_12]);

    return VAR_0;
}
