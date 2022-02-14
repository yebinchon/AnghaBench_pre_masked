
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ state; int state_file; TYPE_1__* network; } ;
struct TYPE_9__ {int bond; int bridge; } ;
typedef TYPE_2__ Link ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (int ) ;

void FUNC_6(Link *VAR_1) {
        if (!VAR_1 || VAR_1->state == VAR_0)
                return;

        FUNC_3(VAR_1, VAR_0);

        FUNC_2(VAR_1);

        if (VAR_1->network) {
                FUNC_1(VAR_1, VAR_1->network->bridge);
                FUNC_1(VAR_1, VAR_1->network->bond);
        }

        FUNC_4(VAR_1, "Link removed");

        (void) FUNC_5(VAR_1->state_file);
        FUNC_0(VAR_1);
}
