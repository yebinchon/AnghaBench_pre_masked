
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ngx_int_t ;
typedef int ngx_http_request_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_request_t *VAR_3)
{
    ngx_int_t VAR_4;

    VAR_4 = FUNC_0(VAR_3, VAR_2);

    if (VAR_4 >= VAR_1) {
        return VAR_4;
    }

    return VAR_0;
}
