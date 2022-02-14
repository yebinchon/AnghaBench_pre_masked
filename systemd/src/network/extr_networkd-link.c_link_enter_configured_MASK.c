
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ state; struct TYPE_7__* network; } ;
typedef TYPE_1__ Link ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_4(Link *VAR_2) {
        FUNC_0(VAR_2);
        FUNC_0(VAR_2->network);

        if (VAR_2->state != VAR_1)
                return;

        FUNC_3(VAR_2, VAR_0);

        (void) FUNC_2(VAR_2);

        FUNC_1(VAR_2);
}
