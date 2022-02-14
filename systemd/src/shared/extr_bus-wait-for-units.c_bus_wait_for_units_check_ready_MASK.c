
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int userdata; int state; int (* ready_callback ) (TYPE_1__*,int ,int ) ;scalar_t__ has_failed; } ;
typedef TYPE_1__ BusWaitForUnits ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_3(BusWaitForUnits *VAR_2) {
        FUNC_0(VAR_2);

        if (!FUNC_1(VAR_2))
                return;

        VAR_2->state = VAR_2->has_failed ? VAR_0 : VAR_1;

        if (VAR_2->ready_callback)
                VAR_2->ready_callback(VAR_2, VAR_2->state, VAR_2->userdata);
}
