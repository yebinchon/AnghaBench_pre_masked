
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ set; int allocated; } ;
struct TYPE_7__ {TYPE_1__ nodes; } ;
typedef TYPE_2__ NUMAPolicy ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (scalar_t__,int ,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_2__ const*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_2__ const*) ;

bool FUNC_5(const NUMAPolicy *VAR_3) {
        FUNC_2(VAR_3);

        if (!FUNC_3(FUNC_4(VAR_3)))
                return 0;

        if (!VAR_3->nodes.set &&
            !FUNC_1(FUNC_4(VAR_3), VAR_0, VAR_1, VAR_2))
                return 0;

        if (VAR_3->nodes.set &&
            FUNC_4(VAR_3) == VAR_2 &&
            FUNC_0(VAR_3->nodes.allocated, VAR_3->nodes.set) != 1)
                return 0;

        return 1;
}
