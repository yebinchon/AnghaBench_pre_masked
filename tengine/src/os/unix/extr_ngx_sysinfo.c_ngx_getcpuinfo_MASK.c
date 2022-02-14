
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ngx_str_t ;
typedef int ngx_log_t ;
typedef int ngx_int_t ;
typedef int ngx_cpuinfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ,char*) ;

ngx_int_t
FUNC_1(ngx_str_t *VAR_2, ngx_cpuinfo_t *VAR_3, ngx_log_t *VAR_4)
{
    FUNC_0(VAR_1, VAR_4, 0,
                  "ngx_getcpuinfo is unsupported under current os");

    return VAR_0;
}
