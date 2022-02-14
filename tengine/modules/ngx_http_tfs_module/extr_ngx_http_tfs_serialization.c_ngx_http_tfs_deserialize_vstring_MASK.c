
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_char ;
typedef int ngx_str_t ;
typedef int ngx_pool_t ;
typedef scalar_t__ ngx_int_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int **,int *,int *) ;
 int FUNC_1 (int *,int) ;
 int * FUNC_2 (int *,int) ;
 int * FUNC_3 (int *,int *,int,int) ;

ngx_int_t
FUNC_4(u_char **VAR_2, ngx_pool_t *VAR_3,
    uint32_t *VAR_4, ngx_str_t **VAR_5)
{
    uint32_t VAR_6, VAR_7;
    ngx_int_t VAR_8;


    VAR_6 = *((uint32_t *)*VAR_2);
    (*VAR_2) += sizeof(uint32_t);


    if (VAR_6 > 0) {
        if (*VAR_5 == ((void*)0)) {
            *VAR_5 = FUNC_2(VAR_3, sizeof(ngx_str_t) * VAR_6);
            if (*VAR_5 == ((void*)0)) {
                return VAR_0;
            }

        } else if (VAR_6 > *VAR_4) {
            *VAR_5 = FUNC_3(VAR_3, *VAR_5, sizeof(ngx_str_t) * (*VAR_4),
                                   sizeof(ngx_str_t) * VAR_6);
            if (*VAR_5 == ((void*)0)) {
                return VAR_0;
            }
            FUNC_1(*VAR_5, sizeof(ngx_str_t) * VAR_6);
        }
        for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
            VAR_8 = FUNC_0(VAR_2, VAR_3, (*VAR_5) + VAR_7);
            if (VAR_8 == VAR_0) {
                return VAR_0;
            }
        }
    }
    *VAR_4 = VAR_6;

    return VAR_1;
}
