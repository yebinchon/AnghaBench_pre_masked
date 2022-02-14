
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int ifindex; TYPE_1__* manager; } ;
struct TYPE_9__ {int links; int links_requesting_uuid; } ;
typedef TYPE_2__ Link ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(Link *VAR_0) {
        if (!VAR_0 || !VAR_0->manager)
                return;

        FUNC_4(FUNC_5(VAR_0->manager->links_requesting_uuid, VAR_0));
        FUNC_3(VAR_0);


        FUNC_1(FUNC_2(VAR_0->manager->links, FUNC_0(VAR_0->ifindex)) == VAR_0);
        FUNC_4(VAR_0);
}
