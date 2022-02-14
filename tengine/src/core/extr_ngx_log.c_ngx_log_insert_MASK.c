
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ log_level; struct TYPE_4__* next; } ;
typedef TYPE_1__ ngx_log_t ;



__attribute__((used)) static void
FUNC_0(ngx_log_t *VAR_0, ngx_log_t *VAR_1)
{
    ngx_log_t VAR_2;

    if (VAR_1->log_level > VAR_0->log_level) {






        VAR_2 = *VAR_0;
        *VAR_0 = *VAR_1;
        *VAR_1 = VAR_2;

        VAR_0->next = VAR_1;
        return;
    }

    while (VAR_0->next) {
        if (VAR_1->log_level > VAR_0->next->log_level) {
            VAR_1->next = VAR_0->next;
            VAR_0->next = VAR_1;
            return;
        }

        VAR_0 = VAR_0->next;
    }

    VAR_0->next = VAR_1;
}
