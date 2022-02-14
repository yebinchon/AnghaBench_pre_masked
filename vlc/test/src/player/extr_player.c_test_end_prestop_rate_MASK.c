
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ size; } ;
typedef TYPE_2__ vec_on_rate_changed ;
struct TYPE_4__ {TYPE_2__ on_rate_changed; } ;
struct ctx {float rate; int wait; int player; TYPE_1__ report; } ;


 float FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct ctx *VAR_0)
{
    if (VAR_0->rate != 1.0f)
    {
        vec_on_rate_changed *VAR_1 = &VAR_0->report.on_rate_changed;
        while (VAR_1->size == 0)
            FUNC_2(VAR_0->player, &VAR_0->wait);
        FUNC_1(VAR_1->size > 0);
        FUNC_1(FUNC_0(VAR_1) == VAR_0->rate);
    }

}
