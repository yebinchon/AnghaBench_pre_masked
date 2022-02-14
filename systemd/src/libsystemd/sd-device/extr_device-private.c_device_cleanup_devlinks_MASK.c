
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int property_devlinks_outdated; int devlinks_generation; int * devlinks; } ;
typedef TYPE_1__ sd_device ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

void FUNC_2(sd_device *VAR_0) {
        FUNC_0(VAR_0);

        FUNC_1(VAR_0->devlinks);
        VAR_0->devlinks = ((void*)0);
        VAR_0->property_devlinks_outdated = 1;
        VAR_0->devlinks_generation++;
}
