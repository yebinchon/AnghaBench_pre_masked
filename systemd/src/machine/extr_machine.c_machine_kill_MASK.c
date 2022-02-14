
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int unit; int manager; int leader; int class; } ;
typedef TYPE_1__ Machine ;
typedef scalar_t__ KillWho ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int,int *) ;

int FUNC_4(Machine *VAR_6, KillWho VAR_7, int VAR_8) {
        FUNC_1(VAR_6);

        if (!FUNC_0(VAR_6->class, VAR_4, VAR_3))
                return -VAR_0;

        if (!VAR_6->unit)
                return -VAR_1;

        if (VAR_7 == VAR_2) {


                if (FUNC_2(VAR_6->leader, VAR_8) < 0)
                        return -VAR_5;

                return 0;
        }


        return FUNC_3(VAR_6->manager, VAR_6->unit, VAR_8, ((void*)0));
}
