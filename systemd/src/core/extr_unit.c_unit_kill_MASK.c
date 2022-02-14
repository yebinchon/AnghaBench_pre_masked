
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sd_bus_error ;
typedef int Unit ;
struct TYPE_2__ {int (* kill ) (int *,int ,int,int *) ;} ;
typedef int KillWho ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ,int,int *) ;

int FUNC_4(Unit *VAR_2, KillWho VAR_3, int VAR_4, sd_bus_error *VAR_5) {
        FUNC_2(*VAR_2);
        FUNC_2(VAR_3 >= 0 && VAR_3 < VAR_1);
        FUNC_2(FUNC_0(VAR_4));

        if (!FUNC_1(VAR_2)->kill)
                return -VAR_0;

        return FUNC_1(VAR_2)->kill(VAR_2, VAR_3, VAR_4, VAR_5);
}
