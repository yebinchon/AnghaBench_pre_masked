
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_12__ {size_t len; int valid; int not_found; scalar_t__ no_cacheable; int * data; } ;
typedef TYPE_1__ ngx_http_variable_value_t ;
struct TYPE_13__ {int pool; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_14__ {int * org; scalar_t__ org_v6; } ;
typedef TYPE_3__ ngx_http_geoip_conf_t ;


 char* FUNC_0 (int *,int ) ;
 char* FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*) ;
 int VAR_2 ;
 TYPE_3__* FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (int *,char*,size_t) ;
 int * FUNC_7 (int ,size_t) ;
 size_t FUNC_8 (char*) ;

__attribute__((used)) static ngx_int_t
FUNC_9(ngx_http_request_t *VAR_3,
    ngx_http_variable_value_t *VAR_4, uintptr_t VAR_5)
{
    size_t VAR_6;
    char *VAR_7;
    ngx_http_geoip_conf_t *VAR_8;

    VAR_8 = FUNC_5(VAR_3, VAR_2);

    if (VAR_8->org == ((void*)0)) {
        goto not_found;
    }
    VAR_7 = FUNC_0(VAR_8->org, FUNC_3(VAR_3, VAR_8));


    if (VAR_7 == ((void*)0)) {
        goto not_found;
    }

    VAR_6 = FUNC_8(VAR_7);
    VAR_4->data = FUNC_7(VAR_3->pool, VAR_6);
    if (VAR_4->data == ((void*)0)) {
        FUNC_2(VAR_7);
        return VAR_0;
    }

    FUNC_6(VAR_4->data, VAR_7, VAR_6);

    VAR_4->len = VAR_6;
    VAR_4->valid = 1;
    VAR_4->no_cacheable = 0;
    VAR_4->not_found = 0;

    FUNC_2(VAR_7);

    return VAR_1;

not_found:

    VAR_4->not_found = 1;

    return VAR_1;
}
