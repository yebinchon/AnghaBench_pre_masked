
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {struct TYPE_3__* next; int buf; } ;
typedef TYPE_1__ ngx_chain_t ;


 scalar_t__ FUNC_0 (int ) ;

uint64_t
FUNC_1(ngx_chain_t *VAR_0)
{
    uint64_t VAR_1;
    ngx_chain_t *VAR_2;

    VAR_1 = 0;
    VAR_2 = VAR_0;
    while (VAR_2) {
        VAR_1 += FUNC_0(VAR_2->buf);
        VAR_2 = VAR_2->next;
    }

    return VAR_1;
}
