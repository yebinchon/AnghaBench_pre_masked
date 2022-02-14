
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int name; int program_result; int seclabel_list; int run_list; int rtnl; int dev_db_clone; int dev; } ;
typedef TYPE_1__ UdevEvent ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

UdevEvent *FUNC_6(UdevEvent *VAR_0) {
        if (!VAR_0)
                return ((void*)0);

        FUNC_4(VAR_0->dev);
        FUNC_4(VAR_0->dev_db_clone);
        FUNC_5(VAR_0->rtnl);
        FUNC_3(VAR_0->run_list);
        FUNC_2(VAR_0->seclabel_list);
        FUNC_0(VAR_0->program_result);
        FUNC_0(VAR_0->name);

        return FUNC_1(VAR_0);
}
