
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int was_abandoned; int controller_track; int controller; int state; } ;
typedef TYPE_1__ Scope ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;

int FUNC_8(Scope *VAR_5) {
        FUNC_2(VAR_5);

        if (FUNC_7(FUNC_1(VAR_5), VAR_4))
                return -VAR_0;

        if (!FUNC_0(VAR_5->state, VAR_3, VAR_2))
                return -VAR_1;

        VAR_5->was_abandoned = 1;

        VAR_5->controller = FUNC_3(VAR_5->controller);
        VAR_5->controller_track = FUNC_5(VAR_5->controller_track);

        FUNC_4(VAR_5, VAR_2);



        (void) FUNC_6(FUNC_1(VAR_5));

        return 0;
}
