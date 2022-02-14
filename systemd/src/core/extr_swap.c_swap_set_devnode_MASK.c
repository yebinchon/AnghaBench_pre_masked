
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {TYPE_1__* manager; } ;
struct TYPE_14__ {scalar_t__ devnode; } ;
struct TYPE_13__ {int * swaps_by_devnode; } ;
typedef TYPE_2__ Swap ;
typedef int Hashmap ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*,TYPE_2__*) ;
 int FUNC_1 (int ,TYPE_2__*,TYPE_2__*) ;
 TYPE_7__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int **,int *) ;
 TYPE_2__* FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int *,scalar_t__,TYPE_2__*) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_9 (char const*) ;

__attribute__((used)) static int FUNC_10(Swap *VAR_3, const char *VAR_4) {
        Hashmap *VAR_5;
        Swap *VAR_6;
        int VAR_7;

        FUNC_3(VAR_3);

        VAR_7 = FUNC_4(&FUNC_2(VAR_3)->manager->swaps_by_devnode, &VAR_1);
        if (VAR_7 < 0)
                return VAR_7;

        VAR_5 = FUNC_2(VAR_3)->manager->swaps_by_devnode;

        if (VAR_3->devnode) {
                VAR_6 = FUNC_5(VAR_5, VAR_3->devnode);

                FUNC_1(VAR_2, VAR_6, VAR_3);
                if (VAR_6)
                        FUNC_7(VAR_5, VAR_6->devnode, VAR_6);
                else
                        FUNC_6(VAR_5, VAR_3->devnode);

                VAR_3->devnode = FUNC_8(VAR_3->devnode);
        }

        if (VAR_4) {
                VAR_3->devnode = FUNC_9(VAR_4);
                if (!VAR_3->devnode)
                        return -VAR_0;

                VAR_6 = FUNC_5(VAR_5, VAR_3->devnode);
                FUNC_0(VAR_2, VAR_6, VAR_3);

                return FUNC_7(VAR_5, VAR_6->devnode, VAR_6);
        }

        return 0;
}
