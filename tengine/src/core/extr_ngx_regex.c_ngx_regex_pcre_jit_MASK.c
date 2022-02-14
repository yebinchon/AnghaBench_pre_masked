
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ngx_flag_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int ,char*) ;
 int FUNC_1 (int ,int*) ;

__attribute__((used)) static char *
FUNC_2(ngx_conf_t *VAR_3, void *VAR_4, void *VAR_5)
{
    ngx_flag_t *VAR_6 = VAR_5;

    if (*VAR_6 == 0) {
        return VAR_0;
    }
    FUNC_0(VAR_1, VAR_3, 0,
                       "nginx was built without PCRE JIT support");
    *VAR_6 = 0;


    return VAR_0;
}
