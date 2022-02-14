
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_5__ {int (* manager ) (int ) ;int data; } ;
typedef TYPE_2__ ngx_path_t ;
typedef int ngx_msec_t ;
typedef int ngx_event_t ;
struct TYPE_4__ {size_t nelts; TYPE_2__** elts; } ;
struct TYPE_6__ {TYPE_1__ paths; } ;


 int FUNC_0 (int *,int) ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(ngx_event_t *VAR_1)
{
    ngx_uint_t VAR_2;
    ngx_msec_t VAR_3, VAR_4;
    ngx_path_t **VAR_5;

    VAR_3 = 60 * 60 * 1000;

    VAR_5 = VAR_0->paths.elts;
    for (VAR_2 = 0; VAR_2 < VAR_0->paths.nelts; VAR_2++) {

        if (VAR_5[VAR_2]->manager) {
            VAR_4 = VAR_5[VAR_2]->manager(VAR_5[VAR_2]->data);

            VAR_3 = (VAR_4 <= VAR_3) ? VAR_4 : VAR_3;

            FUNC_1();
        }
    }

    if (VAR_3 == 0) {
        VAR_3 = 1;
    }

    FUNC_0(VAR_1, VAR_3);
}
