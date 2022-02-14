
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef int ngx_str_t ;
typedef int ngx_int_t ;
typedef int ngx_http_upstream_srv_conf_t ;
struct TYPE_12__ {int nelts; } ;
struct TYPE_13__ {TYPE_11__ upstreams; } ;
typedef TYPE_1__ ngx_http_upstream_main_conf_t ;
struct TYPE_14__ {int idx; int deleted; } ;
typedef TYPE_2__ ngx_http_dyups_srv_conf_t ;
struct TYPE_15__ {TYPE_11__ dy_upstreams; } ;
typedef TYPE_3__ ngx_http_dyups_main_conf_t ;
typedef int ngx_buf_t ;
struct TYPE_16__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (TYPE_11__*) ;
 TYPE_5__* VAR_5 ;
 int FUNC_1 (TYPE_2__*,int *) ;
 TYPE_2__* FUNC_2 (int *,int*) ;
 int FUNC_3 (TYPE_2__*,int *,int) ;
 int FUNC_4 (TYPE_2__*) ;
 void* FUNC_5 (TYPE_5__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ,int ,int ,char*,...) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (int *,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_9(ngx_str_t *VAR_8, ngx_buf_t *VAR_9, ngx_str_t *VAR_10)
{
    ngx_int_t VAR_11, VAR_12;
    ngx_http_dyups_srv_conf_t *VAR_13;
    ngx_http_dyups_main_conf_t *VAR_14;
    ngx_http_upstream_srv_conf_t **VAR_15;
    ngx_http_upstream_main_conf_t *VAR_16;

    VAR_16 = FUNC_5(VAR_5,
                                               VAR_7);
    VAR_14 = FUNC_5(VAR_5,
                                                VAR_6);

    VAR_13 = FUNC_2(VAR_8, &VAR_12);
    if (VAR_13) {
        FUNC_6(VAR_2, VAR_5->log, 0,
                      "[dyups] upstream reuse, idx: [%i]", VAR_12);

        if (!VAR_13->deleted) {
            FUNC_6(VAR_2, VAR_5->log, 0,
                          "[dyups] upstream delete first");
            FUNC_4(VAR_13);

            VAR_13 = FUNC_2(VAR_8, &VAR_12);

            FUNC_6(VAR_2, VAR_5->log, 0,
                          "[dyups] find another, idx: [%i]", VAR_12);
        }
    }

    if (VAR_12 == -1) {


        FUNC_6(VAR_3, VAR_5->log, 0,
                      "[dyups] create upstream %V", VAR_8);

        VAR_13 = FUNC_0(&VAR_14->dy_upstreams);
        if (VAR_13 == ((void*)0)) {
            FUNC_8(VAR_10, "out of memory");
            return VAR_0;
        }

        VAR_15 = FUNC_0(&VAR_16->upstreams);
        if (VAR_15 == ((void*)0)) {
            FUNC_8(VAR_10, "out of memory");
            return VAR_0;
        }

        FUNC_7(VAR_13, sizeof(ngx_http_dyups_srv_conf_t));
        VAR_12 = VAR_16->upstreams.nelts - 1;
    }

    VAR_13->idx = VAR_12;
    VAR_11 = FUNC_3(VAR_13, VAR_8, VAR_12);

    if (VAR_11 != VAR_4) {
        FUNC_8(VAR_10, "init upstream failed");
        return VAR_0;
    }


    VAR_11 = FUNC_1(VAR_13, VAR_9);
    if (VAR_11 != VAR_4) {
        FUNC_8(VAR_10, "add server failed");
        return VAR_0;
    }

    FUNC_8(VAR_10, "success");

    return VAR_1;
}
