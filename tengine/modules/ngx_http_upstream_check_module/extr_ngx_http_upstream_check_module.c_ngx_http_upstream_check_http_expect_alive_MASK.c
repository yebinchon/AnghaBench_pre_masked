
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_16__ {scalar_t__ len; int data; } ;
typedef TYPE_4__ ngx_str_t ;
struct TYPE_15__ {size_t status_alive; } ;
struct TYPE_17__ {TYPE_3__ code; } ;
typedef TYPE_5__ ngx_http_upstream_check_srv_conf_t ;
struct TYPE_18__ {TYPE_1__* args; } ;
typedef TYPE_6__ ngx_conf_t ;
struct TYPE_14__ {scalar_t__ len; int data; } ;
struct TYPE_19__ {size_t mask; TYPE_2__ name; } ;
typedef TYPE_7__ ngx_conf_bitmask_t ;
typedef int ngx_command_t ;
struct TYPE_13__ {size_t nelts; TYPE_4__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 TYPE_7__* VAR_3 ;
 int FUNC_0 (int ,TYPE_6__*,int ,char*,int ) ;
 TYPE_5__* FUNC_1 (TYPE_6__*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static char *
FUNC_3(ngx_conf_t *VAR_5, ngx_command_t *VAR_6,
    void *VAR_7)
{
    ngx_str_t *VAR_8;
    ngx_uint_t VAR_9, VAR_10, VAR_11;
    ngx_conf_bitmask_t *VAR_12;
    ngx_http_upstream_check_srv_conf_t *VAR_13;

    VAR_8 = VAR_5->args->elts;
    VAR_12 = VAR_3;

    VAR_13 = FUNC_1(VAR_5,
                                              VAR_4);
    VAR_9 = 0;

    for (VAR_10 = 1; VAR_10 < VAR_5->args->nelts; VAR_10++) {
        for (VAR_11 = 0; VAR_12[VAR_11].name.len != 0; VAR_11++) {

            if (VAR_12[VAR_11].name.len != VAR_8[VAR_10].len
                || FUNC_2(VAR_12[VAR_11].name.data, VAR_8[VAR_10].data) != 0)
            {
                continue;
            }

            if (VAR_9 & VAR_12[VAR_11].mask) {
                FUNC_0(VAR_2, VAR_5, 0,
                                   "duplicate value \"%s\"", VAR_8[VAR_10].data);

            } else {
                VAR_9 |= VAR_12[VAR_11].mask;
            }

            break;
        }

        if (VAR_12[VAR_11].name.len == 0) {
            FUNC_0(VAR_2, VAR_5, 0,
                               "invalid value \"%s\"", VAR_8[VAR_10].data);

            return VAR_0;
        }
    }

    VAR_13->code.status_alive = VAR_9;

    return VAR_1;
}
