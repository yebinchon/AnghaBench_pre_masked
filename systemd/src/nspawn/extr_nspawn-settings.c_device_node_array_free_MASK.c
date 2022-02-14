
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* path; } ;
typedef TYPE_1__ DeviceNode ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(DeviceNode *VAR_0, size_t VAR_1) {
        size_t VAR_2;

        for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
                FUNC_0(VAR_0[VAR_2].path);

        FUNC_0(VAR_0);
}
