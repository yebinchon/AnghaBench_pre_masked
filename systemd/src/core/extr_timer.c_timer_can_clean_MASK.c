
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_4__ {scalar_t__ persistent; } ;
typedef TYPE_1__ Timer ;
typedef int ExecCleanMask ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(Unit *VAR_1, ExecCleanMask *VAR_2) {
        Timer *VAR_3 = FUNC_0(VAR_1);

        FUNC_1(VAR_3);

        *VAR_2 = VAR_3->persistent ? VAR_0 : 0;
        return 0;
}
