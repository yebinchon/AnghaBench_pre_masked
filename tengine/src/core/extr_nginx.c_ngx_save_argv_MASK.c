
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_int_t ;
struct TYPE_3__ {int log; } ;
typedef TYPE_1__ ngx_cycle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (size_t,int ) ;
 int VAR_3 ;
 char** VAR_4 ;
 int FUNC_1 (int *,int *,size_t) ;
 char** VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char* const) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_cycle_t *VAR_7, int VAR_8, char *const *VAR_9)
{







    size_t VAR_10;
    ngx_int_t VAR_11;

    VAR_5 = (char **) VAR_9;
    VAR_3 = VAR_8;

    VAR_4 = FUNC_0((VAR_8 + 1) * sizeof(char *), VAR_7->log);
    if (VAR_4 == ((void*)0)) {
        return VAR_0;
    }

    for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
        VAR_10 = FUNC_2(VAR_9[VAR_11]) + 1;

        VAR_4[VAR_11] = FUNC_0(VAR_10, VAR_7->log);
        if (VAR_4[VAR_11] == ((void*)0)) {
            return VAR_0;
        }

        (void) FUNC_1((u_char *) VAR_4[VAR_11], (u_char *) VAR_9[VAR_11], VAR_10);
    }

    VAR_4[VAR_11] = ((void*)0);



    VAR_6 = VAR_2;

    return VAR_1;
}
