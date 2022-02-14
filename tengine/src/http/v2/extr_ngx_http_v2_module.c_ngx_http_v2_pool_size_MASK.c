
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ngx_conf_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ,int *,int ,char*,size_t) ;

__attribute__((used)) static char *
FUNC_1(ngx_conf_t *VAR_5, void *VAR_6, void *VAR_7)
{
    size_t *VAR_8 = VAR_7;

    if (*VAR_8 < VAR_3) {
        FUNC_0(VAR_2, VAR_5, 0,
                           "the pool size must be no less than %uz",
                           VAR_3);

        return VAR_0;
    }

    if (*VAR_8 % VAR_4) {
        FUNC_0(VAR_2, VAR_5, 0,
                           "the pool size must be a multiple of %uz",
                           VAR_4);

        return VAR_0;
    }

    return VAR_1;
}
