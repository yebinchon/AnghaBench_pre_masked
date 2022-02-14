
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ngx_meminfo_t ;
typedef int ngx_log_t ;
typedef int ngx_int_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ,char*) ;

ngx_int_t
FUNC_1(ngx_meminfo_t *VAR_2, ngx_log_t *VAR_3)
{
    FUNC_0(VAR_1, VAR_3, 0,
                  "getmeminfo is unsupported under current os");

    return VAR_0;
}
