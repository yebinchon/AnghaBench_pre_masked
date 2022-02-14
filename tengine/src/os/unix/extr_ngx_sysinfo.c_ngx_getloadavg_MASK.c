
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysinfo {int* loads; } ;
typedef int ngx_log_t ;
typedef size_t ngx_int_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (double*,size_t) ;
 int FUNC_1 (int ,int *,int ,char*) ;
 scalar_t__ FUNC_2 (struct sysinfo*) ;

ngx_int_t
FUNC_3(ngx_int_t VAR_3[], ngx_int_t VAR_4, ngx_log_t *VAR_5)
{
    FUNC_1(VAR_1, VAR_5, 0,
                  "getloadavg is unsupported under current os");

    return VAR_0;

}
