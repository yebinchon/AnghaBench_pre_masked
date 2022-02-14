
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_3__ {int get_handler; } ;
typedef TYPE_1__ ngx_http_variable_t ;
typedef int ngx_conf_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (int *,int *,int ) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_conf_t *VAR_10)
{
    ngx_int_t VAR_11;
    ngx_http_variable_t *VAR_12;

    VAR_12 = FUNC_0(VAR_10, &VAR_3, 0);
    if (VAR_12 == ((void*)0)) {
        return VAR_0;
    }

    VAR_12->get_handler = VAR_4;

    VAR_12 = FUNC_0(VAR_10, &VAR_8, 0);
    if (VAR_12 == ((void*)0)) {
        return VAR_0;
    }

    VAR_12->get_handler = VAR_9;

    VAR_12 = FUNC_0(VAR_10, &VAR_5,
                                VAR_1);
    if (VAR_12 == ((void*)0)) {
        return VAR_0;
    }

    VAR_12->get_handler = VAR_7;

    VAR_11 = FUNC_1(VAR_10, &VAR_5);
    if (VAR_11 == VAR_0) {
        return VAR_0;
    }

    VAR_6 = VAR_11;

    return VAR_2;
}
