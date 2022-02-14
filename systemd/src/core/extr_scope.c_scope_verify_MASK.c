
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ load_state; int manager; int pids; } ;
typedef int Scope ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_6(Scope *VAR_3) {
        FUNC_2(*VAR_3);
        FUNC_2(FUNC_1(VAR_3)->load_state == VAR_2);

        if (FUNC_4(FUNC_1(VAR_3)->pids) &&
            !FUNC_0(FUNC_1(VAR_3)->manager) &&
            !FUNC_5(FUNC_1(VAR_3), VAR_1)) {
                FUNC_3(FUNC_1(VAR_3), "Scope has no PIDs. Refusing.");
                return -VAR_0;
        }

        return 0;
}
