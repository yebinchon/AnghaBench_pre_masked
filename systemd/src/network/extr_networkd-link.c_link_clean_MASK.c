
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dirty_links; struct TYPE_5__* manager; } ;
typedef TYPE_1__ Link ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;

void FUNC_3(Link *VAR_0) {
        FUNC_0(VAR_0);
        FUNC_0(VAR_0->manager);

        FUNC_1(FUNC_2(VAR_0->manager->dirty_links, VAR_0));
}
