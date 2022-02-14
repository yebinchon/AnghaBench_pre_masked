
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int dirty_links; } ;
struct TYPE_7__ {TYPE_3__* manager; } ;
typedef TYPE_1__ Link ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,TYPE_1__*) ;

void FUNC_5(Link *VAR_0) {
        int VAR_1;

        FUNC_0(VAR_0);


        FUNC_2(VAR_0->manager);

        VAR_1 = FUNC_3(&VAR_0->manager->dirty_links, ((void*)0));
        if (VAR_1 < 0)

                return;

        VAR_1 = FUNC_4(VAR_0->manager->dirty_links, VAR_0);
        if (VAR_1 <= 0)

                return;

        FUNC_1(VAR_0);
}
