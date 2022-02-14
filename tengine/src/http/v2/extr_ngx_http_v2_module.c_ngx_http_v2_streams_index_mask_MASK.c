
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ngx_uint_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;

__attribute__((used)) static char *
FUNC_0(ngx_conf_t *VAR_1, void *VAR_2, void *VAR_3)
{
    ngx_uint_t *VAR_4 = VAR_3;

    ngx_uint_t VAR_5;

    VAR_5 = *VAR_4 - 1;

    if (*VAR_4 == 0 || (*VAR_4 & VAR_5)) {
        return "must be a power of two";
    }

    *VAR_4 = VAR_5;

    return VAR_0;
}
