
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_5__ {int data; int (* loader ) (int ) ;} ;
typedef TYPE_2__ ngx_path_t ;
typedef int ngx_event_t ;
struct TYPE_4__ {size_t nelts; TYPE_2__** elts; } ;
struct TYPE_6__ {TYPE_1__ paths; } ;
typedef TYPE_3__ ngx_cycle_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(ngx_event_t *VAR_3)
{
    ngx_uint_t VAR_4;
    ngx_path_t **VAR_5;
    ngx_cycle_t *VAR_6;

    VAR_6 = (ngx_cycle_t *) VAR_0;

    VAR_5 = VAR_6->paths.elts;
    for (VAR_4 = 0; VAR_4 < VAR_6->paths.nelts; VAR_4++) {

        if (VAR_2 || VAR_1) {
            break;
        }

        if (VAR_5[VAR_4]->loader) {
            VAR_5[VAR_4]->loader(VAR_5[VAR_4]->data);
            FUNC_1();
        }
    }

    FUNC_0(0);
}
