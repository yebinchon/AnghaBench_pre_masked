
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_3__ {scalar_t__ generation; int configured; } ;


 int FUNC_0 (TYPE_1__*) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;

void
FUNC_1(void)
{
    ngx_uint_t VAR_3, VAR_4;

    for (VAR_3 = 0, VAR_4 = -1; VAR_3 < VAR_0; VAR_3++) {

        if (!VAR_2[VAR_3].configured) {
            continue;
        }

        if (VAR_2[VAR_3].generation < VAR_1) {
            FUNC_0(&VAR_2[VAR_3]);
        } else {
            VAR_4 = VAR_3;
        }
    }

    VAR_0 = VAR_4 + 1;
}
