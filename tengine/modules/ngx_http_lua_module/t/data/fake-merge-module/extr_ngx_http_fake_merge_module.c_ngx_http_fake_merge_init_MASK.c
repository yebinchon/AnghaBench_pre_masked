
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_3__ {int a; } ;
typedef TYPE_1__ ngx_http_fake_merge_loc_conf_t ;
typedef int ngx_conf_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_2 ;

__attribute__((used)) static ngx_int_t FUNC_2(ngx_conf_t *VAR_3)
{
    ngx_http_fake_merge_loc_conf_t *VAR_4;

    VAR_4 = FUNC_0(VAR_3,
                                              VAR_2);
    if (VAR_4 == ((void*)0)) {
        return VAR_0;
    }

    VAR_4->a = 1;

    if (FUNC_1(VAR_3) != VAR_1) {
        return VAR_0;
    }

    return VAR_1;
}
