
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ state; scalar_t__ inotify_triggered; } ;
typedef scalar_t__ PathState ;
typedef TYPE_1__ Path ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;
 int * VAR_2 ;
 int FUNC_6 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(Path *VAR_3, PathState VAR_4) {
        PathState VAR_5;
        FUNC_1(VAR_3);

        if (VAR_3->state != VAR_4)
                FUNC_2(FUNC_0(VAR_3), 0);

        VAR_5 = VAR_3->state;
        VAR_3->state = VAR_4;

        if (VAR_4 != VAR_1 &&
            (VAR_4 != VAR_0 || VAR_3->inotify_triggered))
                FUNC_5(VAR_3);

        if (VAR_4 != VAR_5)
                FUNC_3(FUNC_0(VAR_3), "Changed %s -> %s", FUNC_4(VAR_5), FUNC_4(VAR_4));

        FUNC_6(FUNC_0(VAR_3), VAR_2[VAR_5], VAR_2[VAR_4], 0);
}
