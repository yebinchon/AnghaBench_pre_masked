
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_str_t ;
typedef int ngx_int_t ;
typedef int ngx_err_t ;
struct TYPE_2__ {size_t len; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (size_t) ;
 int FUNC_1 (int ,char*,size_t,int,char*) ;
 int FUNC_2 (int *,char*,size_t) ;
 size_t FUNC_3 (char*) ;
 TYPE_1__* VAR_4 ;
 char* FUNC_4 (int) ;

ngx_int_t
FUNC_5(void)
{
    char *VAR_5;
    u_char *VAR_6;
    size_t VAR_7;
    ngx_err_t VAR_8;






    VAR_7 = VAR_2 * sizeof(ngx_str_t);

    VAR_4 = FUNC_0(VAR_7);
    if (VAR_4 == ((void*)0)) {
        goto failed;
    }

    for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
        VAR_5 = FUNC_4(VAR_8);
        VAR_7 = FUNC_3(VAR_5);

        VAR_6 = FUNC_0(VAR_7);
        if (VAR_6 == ((void*)0)) {
            goto failed;
        }

        FUNC_2(VAR_6, VAR_5, VAR_7);
        VAR_4[VAR_8].len = VAR_7;
        VAR_4[VAR_8].data = VAR_6;
    }

    return VAR_1;

failed:

    VAR_8 = VAR_3;
    FUNC_1(0, "malloc(%uz) failed (%d: %s)", VAR_7, VAR_8, FUNC_4(VAR_8));

    return VAR_0;
}
