
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ngx_uint_t ;
typedef int ngx_atomic_uint_t ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

ngx_atomic_uint_t
FUNC_1(ngx_uint_t VAR_2)
{
    ngx_atomic_uint_t VAR_3, VAR_4;

    VAR_4 = VAR_2 ? VAR_0 : 1;

    VAR_3 = FUNC_0(VAR_1, VAR_4);

    return VAR_3 + VAR_4;
}
