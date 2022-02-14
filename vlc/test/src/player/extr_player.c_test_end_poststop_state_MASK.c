
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int size; scalar_t__* data; } ;
typedef TYPE_2__ vec_on_state_changed ;
struct TYPE_4__ {TYPE_2__ on_state_changed; } ;
struct ctx {TYPE_1__ report; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct ctx *VAR_2)
{
    vec_on_state_changed *VAR_3 = &VAR_2->report.on_state_changed;
    FUNC_1(VAR_3->size > 1);
    FUNC_1(VAR_3->data[0] == VAR_0);
    FUNC_1(FUNC_0(VAR_3) == VAR_1);
}
