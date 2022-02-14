
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_14__ {scalar_t__ len; int data; } ;
typedef TYPE_3__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_13__ {scalar_t__ len; int data; } ;
struct TYPE_15__ {TYPE_2__ host; } ;
typedef TYPE_4__ ngx_http_upstream_srv_conf_t ;
struct TYPE_16__ {scalar_t__ deleted; scalar_t__* ref; TYPE_4__* upstream; int * pool; int idx; int dynamic; } ;
typedef TYPE_5__ ngx_http_dyups_srv_conf_t ;
struct TYPE_12__ {size_t nelts; TYPE_5__* elts; } ;
struct TYPE_17__ {TYPE_1__ dy_upstreams; } ;
typedef TYPE_6__ ngx_http_dyups_main_conf_t ;
struct TYPE_18__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_8__* VAR_5 ;
 int FUNC_0 (int *) ;
 TYPE_6__* FUNC_1 (TYPE_8__*,int ) ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,int ,char*) ;
 int FUNC_3 (int ,int ,int ,char*,size_t,...) ;
 scalar_t__ FUNC_4 (int ,int ,scalar_t__) ;

__attribute__((used)) static ngx_http_dyups_srv_conf_t *
FUNC_5(ngx_str_t *VAR_7, ngx_int_t *VAR_8)
{
    ngx_uint_t VAR_9;
    ngx_http_dyups_srv_conf_t *VAR_10, *VAR_11, *VAR_12;
    ngx_http_dyups_main_conf_t *VAR_13;
    ngx_http_upstream_srv_conf_t *VAR_14;

    VAR_13 = FUNC_1(VAR_5,
                                                VAR_6);
    *VAR_8 = -1;
    VAR_12 = ((void*)0);

    FUNC_2(VAR_3, VAR_5->log, 0,
                   "[dyups] find dynamic upstream");

    VAR_10 = VAR_13->dy_upstreams.elts;
    for (VAR_9 = 0; VAR_9 < VAR_13->dy_upstreams.nelts; VAR_9++) {

        VAR_11 = &VAR_10[VAR_9];
        if (!VAR_11->dynamic) {
            continue;
        }

        if (VAR_11->deleted == VAR_1) {

            FUNC_3(VAR_2, VAR_5->log, 0,
                          "[dyups] find upstream idx: %ui ref: %ui "
                          "on %V deleting",
                          VAR_9, *(VAR_11->ref), &VAR_11->upstream->host);

            if (*(VAR_11->ref) == 0) {
                FUNC_3(VAR_4, VAR_5->log, 0,
                              "[dyups] free dynamic upstream in find upstream"
                              " %ui", VAR_11->idx);

                VAR_11->deleted = VAR_0;

                if (VAR_11->pool) {
                    FUNC_0(VAR_11->pool);
                    VAR_11->pool = ((void*)0);
                }
            }
        }

        if (VAR_11->deleted == VAR_1) {
            continue;
        }

        if (VAR_11->deleted == VAR_0) {
            *VAR_8 = VAR_9;
            VAR_12 = VAR_11;
            continue;
        }

        VAR_14 = VAR_11->upstream;

        if (VAR_14->host.len != VAR_7->len
            || FUNC_4(VAR_14->host.data, VAR_7->data, VAR_14->host.len)
               != 0)
        {
            continue;
        }

        *VAR_8 = VAR_9;

        return VAR_11;
    }

    return VAR_12;
}
