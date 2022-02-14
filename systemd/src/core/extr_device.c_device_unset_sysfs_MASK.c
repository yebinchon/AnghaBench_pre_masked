
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* manager; } ;
struct TYPE_12__ {scalar_t__ sysfs; } ;
struct TYPE_11__ {int * devices_by_sysfs; } ;
typedef int Hashmap ;
typedef TYPE_2__ Device ;


 int FUNC_0 (int ,TYPE_2__*,TYPE_2__*) ;
 TYPE_7__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,scalar_t__,scalar_t__,TYPE_2__*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_7(Device *VAR_1) {
        Hashmap *VAR_2;
        Device *VAR_3;

        FUNC_2(VAR_1);

        if (!VAR_1->sysfs)
                return;



        VAR_2 = FUNC_1(VAR_1)->manager->devices_by_sysfs;
        VAR_3 = FUNC_3(VAR_2, VAR_1->sysfs);
        FUNC_0(VAR_0, VAR_3, VAR_1);

        if (VAR_3)
                FUNC_5(VAR_2, VAR_1->sysfs, VAR_3->sysfs, VAR_3);
        else
                FUNC_4(VAR_2, VAR_1->sysfs);

        VAR_1->sysfs = FUNC_6(VAR_1->sysfs);
}
