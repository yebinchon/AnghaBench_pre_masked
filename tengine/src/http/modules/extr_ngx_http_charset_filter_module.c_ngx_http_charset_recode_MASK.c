
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_char ;
typedef int ngx_uint_t ;
struct TYPE_3__ {size_t* last; size_t* pos; scalar_t__ in_file; } ;
typedef TYPE_1__ ngx_buf_t ;



__attribute__((used)) static ngx_uint_t
FUNC_0(ngx_buf_t *VAR_0, u_char *VAR_1)
{
    u_char *VAR_2, *VAR_3;

    VAR_3 = VAR_0->last;

    for (VAR_2 = VAR_0->pos; VAR_2 < VAR_3; VAR_2++) {

        if (*VAR_2 != VAR_1[*VAR_2]) {
            goto recode;
        }
    }

    return 0;

recode:

    do {
        if (*VAR_2 != VAR_1[*VAR_2]) {
            *VAR_2 = VAR_1[*VAR_2];
        }

        VAR_2++;

    } while (VAR_2 < VAR_3);

    VAR_0->in_file = 0;

    return 1;
}
