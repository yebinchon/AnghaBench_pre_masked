
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_21__ {int data; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_22__ {int ranges; int proxy_recursive; scalar_t__ tree6; scalar_t__ tree; } ;
typedef TYPE_3__ ngx_http_geo_conf_ctx_t ;
struct TYPE_23__ {int pool; TYPE_1__* args; TYPE_3__* ctx; } ;
typedef TYPE_4__ ngx_conf_t ;
typedef int ngx_command_t ;
typedef int ngx_cidr_t ;
struct TYPE_20__ {int nelts; TYPE_2__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,TYPE_4__*,int ,char*) ;
 char* FUNC_1 (TYPE_4__*,TYPE_3__*,int *) ;
 char* FUNC_2 (TYPE_4__*,TYPE_3__*,TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*,TYPE_2__*,int *) ;
 char* FUNC_4 (TYPE_4__*,TYPE_3__*,TYPE_2__*) ;
 char* FUNC_5 (TYPE_4__*,TYPE_3__*,TYPE_2__*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,char*) ;

__attribute__((used)) static char *
FUNC_8(ngx_conf_t *VAR_4, ngx_command_t *VAR_5, void *VAR_6)
{
    char *VAR_7;
    ngx_str_t *VAR_8;
    ngx_cidr_t VAR_9;
    ngx_http_geo_conf_ctx_t *VAR_10;

    VAR_10 = VAR_4->ctx;

    VAR_8 = VAR_4->args->elts;

    if (VAR_4->args->nelts == 1) {

        if (FUNC_7(VAR_8[0].data, "ranges") == 0) {

            if (VAR_10->tree



               )
            {
                FUNC_0(VAR_2, VAR_4, 0,
                                   "the \"ranges\" directive must be "
                                   "the first directive inside \"geo\" block");
                goto failed;
            }

            VAR_10->ranges = 1;

            VAR_7 = VAR_1;

            goto done;
        }

        else if (FUNC_7(VAR_8[0].data, "proxy_recursive") == 0) {
            VAR_10->proxy_recursive = 1;
            VAR_7 = VAR_1;
            goto done;
        }
    }

    if (VAR_4->args->nelts != 2) {
        FUNC_0(VAR_2, VAR_4, 0,
                           "invalid number of the geo parameters");
        goto failed;
    }

    if (FUNC_7(VAR_8[0].data, "include") == 0) {

        VAR_7 = FUNC_4(VAR_4, VAR_10, &VAR_8[1]);

        goto done;

    } else if (FUNC_7(VAR_8[0].data, "proxy") == 0) {

        if (FUNC_3(VAR_4, &VAR_8[1], &VAR_9) != VAR_3) {
            goto failed;
        }

        VAR_7 = FUNC_1(VAR_4, VAR_10, &VAR_9);

        goto done;
    }

    if (VAR_10->ranges) {
        VAR_7 = FUNC_5(VAR_4, VAR_10, VAR_8);

    } else {
        VAR_7 = FUNC_2(VAR_4, VAR_10, VAR_8);
    }

done:

    FUNC_6(VAR_4->pool);

    return VAR_7;

failed:

    FUNC_6(VAR_4->pool);

    return VAR_0;
}
