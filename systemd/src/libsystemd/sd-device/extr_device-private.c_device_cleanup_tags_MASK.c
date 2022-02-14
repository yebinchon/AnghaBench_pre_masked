
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int property_tags_outdated; int tags_generation; int * tags; } ;
typedef TYPE_1__ sd_device ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

void FUNC_2(sd_device *VAR_0) {
        FUNC_0(VAR_0);

        FUNC_1(VAR_0->tags);
        VAR_0->tags = ((void*)0);
        VAR_0->property_tags_outdated = 1;
        VAR_0->tags_generation++;
}
