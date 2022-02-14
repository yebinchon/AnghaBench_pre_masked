
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* in_cleanup_queue; } ;
typedef TYPE_1__ Unit ;
struct TYPE_7__ {TYPE_1__* cleanup_queue; } ;
typedef TYPE_2__ Manager ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static unsigned FUNC_2(Manager *VAR_0) {
        Unit *VAR_1;
        unsigned VAR_2 = 0;

        FUNC_0(VAR_0);

        while ((VAR_1 = VAR_0->cleanup_queue)) {
                FUNC_0(VAR_1->in_cleanup_queue);

                FUNC_1(VAR_1);
                VAR_2++;
        }

        return VAR_2;
}
