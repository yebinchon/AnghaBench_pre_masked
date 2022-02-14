
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UnitStatusInfo ;
struct TYPE_4__ {int * units; int slot_job_removed; int cache; int polkit_registry; int zone; } ;
typedef TYPE_1__ Context ;


 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_7(Context *VAR_1) {
        UnitStatusInfo *VAR_2;

        FUNC_1(VAR_1);

        FUNC_3(VAR_1->zone);
        FUNC_2(VAR_1->polkit_registry);
        FUNC_4(VAR_1->cache);

        FUNC_5(VAR_1->slot_job_removed);

        while ((VAR_2 = VAR_1->units)) {
                FUNC_0(VAR_0, VAR_1->units, VAR_2);
                FUNC_6(VAR_2);
        }
}
