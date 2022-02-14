
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int track; int controller; } ;
typedef TYPE_1__ Session ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(Session *VAR_0) {
        FUNC_0(VAR_0);

        if (!VAR_0->controller)
                return;

        VAR_0->track = FUNC_1(VAR_0->track);
        FUNC_2(VAR_0, 0);
        FUNC_4(VAR_0);
        FUNC_3(VAR_0);
}
