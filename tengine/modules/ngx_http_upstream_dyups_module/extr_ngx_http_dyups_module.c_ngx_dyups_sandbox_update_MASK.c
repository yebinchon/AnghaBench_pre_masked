
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ngx_str_t ;
typedef int ngx_int_t ;
typedef int ngx_buf_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_buf_t *VAR_0, ngx_str_t *VAR_1)
{
    ngx_int_t VAR_2;
    ngx_str_t VAR_3;

    ngx_str_t VAR_4 = FUNC_2("_dyups_upstream_sandbox_");

    VAR_2 = FUNC_1(&VAR_4, VAR_0, VAR_1);

    (void) FUNC_0(&VAR_4, &VAR_3);

    return VAR_2;
}
