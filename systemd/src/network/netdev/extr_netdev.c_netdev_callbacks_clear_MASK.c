
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int link; } ;
typedef TYPE_1__ netdev_join_callback ;
struct TYPE_8__ {TYPE_1__* callbacks; } ;
typedef TYPE_2__ NetDev ;


 int FUNC_0 (int ,TYPE_1__*,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(NetDev *VAR_1) {
        netdev_join_callback *VAR_2;

        if (!VAR_1)
                return;

        while ((VAR_2 = VAR_1->callbacks)) {
                FUNC_0(VAR_0, VAR_1->callbacks, VAR_2);
                FUNC_2(VAR_2->link);
                FUNC_1(VAR_2);
        }
}
