
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* manager; } ;
typedef TYPE_2__ Unit ;
struct TYPE_10__ {scalar_t__ startup_cpu_shares; scalar_t__ startup_io_weight; scalar_t__ startup_blockio_weight; } ;
struct TYPE_8__ {int startup_units; } ;
typedef TYPE_3__ CGroupContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 TYPE_3__* FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(Unit *VAR_3) {
        CGroupContext *VAR_4;
        int VAR_5;

        VAR_4 = FUNC_2(VAR_3);
        if (!VAR_4)
                return 0;

        if (VAR_4->startup_cpu_shares == VAR_1 &&
            VAR_4->startup_io_weight == VAR_2 &&
            VAR_4->startup_blockio_weight == VAR_0)
                return 0;

        VAR_5 = FUNC_0(&VAR_3->manager->startup_units, ((void*)0));
        if (VAR_5 < 0)
                return VAR_5;

        return FUNC_1(VAR_3->manager->startup_units, VAR_3);
}
