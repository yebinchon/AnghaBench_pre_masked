
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_22__ {int data; } ;
typedef TYPE_5__ ngx_str_t ;
typedef int ngx_int_t ;
typedef int ngx_in6_cidr_t ;
struct TYPE_23__ {int * tree; int * tree6; int pool; } ;
typedef TYPE_6__ ngx_http_geo_conf_ctx_t ;
typedef int ngx_conf_t ;
struct TYPE_20__ {void* mask; void* addr; } ;
struct TYPE_19__ {int s6_addr; } ;
struct TYPE_18__ {int s6_addr; } ;
struct TYPE_25__ {TYPE_2__ mask; TYPE_1__ addr; } ;
struct TYPE_21__ {TYPE_3__ in; TYPE_8__ in6; } ;
struct TYPE_24__ {int family; TYPE_4__ u; } ;
typedef TYPE_7__ ngx_cidr_t ;


 int VAR_0 ;

 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int *,int ,char*,TYPE_5__*) ;
 char* FUNC_1 (int *,TYPE_6__*,TYPE_7__*,TYPE_5__*,TYPE_5__*) ;
 scalar_t__ FUNC_2 (int *,TYPE_5__*,TYPE_7__*) ;
 int FUNC_3 (TYPE_8__*,int) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,void*,void*) ;
 void* FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (int ,char*) ;
 void* FUNC_8 (void*) ;

__attribute__((used)) static char *
FUNC_9(ngx_conf_t *VAR_5, ngx_http_geo_conf_ctx_t *VAR_6,
    ngx_str_t *VAR_7)
{
    char *VAR_8;
    ngx_int_t VAR_9, VAR_10;
    ngx_str_t *VAR_11;
    ngx_cidr_t VAR_12;

    if (VAR_6->tree == ((void*)0)) {
        VAR_6->tree = FUNC_6(VAR_6->pool, -1);
        if (VAR_6->tree == ((void*)0)) {
            return VAR_1;
        }
    }
    if (FUNC_7(VAR_7[0].data, "default") == 0) {
        VAR_12.family = VAR_0;
        VAR_12.u.in.addr = 0;
        VAR_12.u.in.mask = 0;

        VAR_8 = FUNC_1(VAR_5, VAR_6, &VAR_12, &VAR_7[1], &VAR_7[0]);

        if (VAR_8 != VAR_2) {
            return VAR_8;
        }
        return VAR_2;
    }

    if (FUNC_7(VAR_7[0].data, "delete") == 0) {
        VAR_11 = &VAR_7[1];
        VAR_10 = 1;

    } else {
        VAR_11 = &VAR_7[0];
        VAR_10 = 0;
    }

    if (FUNC_2(VAR_5, VAR_11, &VAR_12) != VAR_4) {
        return VAR_1;
    }

    if (VAR_12.family == VAR_0) {
        VAR_12.u.in.addr = FUNC_8(VAR_12.u.in.addr);
        VAR_12.u.in.mask = FUNC_8(VAR_12.u.in.mask);
    }

    if (VAR_10) {
        switch (VAR_12.family) {
        default:
            VAR_9 = FUNC_5(VAR_6->tree, VAR_12.u.in.addr,
                                        VAR_12.u.in.mask);
            break;
        }

        if (VAR_9 != VAR_4) {
            FUNC_0(VAR_3, VAR_5, 0,
                               "no network \"%V\" to delete", VAR_11);
        }

        return VAR_2;
    }

    return FUNC_1(VAR_5, VAR_6, &VAR_12, &VAR_7[1], VAR_11);
}
