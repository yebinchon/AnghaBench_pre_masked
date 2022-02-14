
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_13__ {int flag; } ;
typedef TYPE_1__ ngx_http_upstream_ss_srv_conf_t ;
typedef int ngx_http_upstream_srv_conf_t ;
struct TYPE_14__ {int * uscf; } ;
typedef TYPE_2__ ngx_http_ss_loc_conf_t ;
struct TYPE_15__ {TYPE_1__* sscf; } ;
typedef TYPE_3__ ngx_http_ss_ctx_t ;
struct TYPE_16__ {int pool; } ;
typedef TYPE_4__ ngx_http_request_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int *,int ) ;
 TYPE_2__* FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*,int ) ;
 int VAR_4 ;
 TYPE_3__* FUNC_4 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_http_request_t *VAR_5)
{
    ngx_http_ss_ctx_t *VAR_6;
    ngx_http_ss_loc_conf_t *VAR_7;
    ngx_http_upstream_srv_conf_t *VAR_8;
    ngx_http_upstream_ss_srv_conf_t *VAR_9;

    VAR_7 = FUNC_1(VAR_5,
                                    VAR_4);

    if (VAR_7->uscf == VAR_0) {
        return VAR_1;
    }

    VAR_8 = VAR_7->uscf;
    VAR_9 = FUNC_0(VAR_8,
                                    VAR_4);
    if (VAR_9 != ((void*)0) &&
        (VAR_9->flag & VAR_3)) {
        return VAR_1;
    }

    VAR_6 = FUNC_4(VAR_5->pool, sizeof(ngx_http_ss_ctx_t));
    if (VAR_6 == ((void*)0)) {
        return VAR_2;
    }

    FUNC_3(VAR_5, VAR_6, VAR_4);
    VAR_6->sscf = VAR_9;

    return FUNC_2(VAR_5);
}
