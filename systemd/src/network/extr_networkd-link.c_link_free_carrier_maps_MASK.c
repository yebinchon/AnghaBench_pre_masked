
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int bound_by_links; int bound_to_links; } ;
typedef TYPE_1__ Link ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(Link *VAR_0) {
        bool VAR_1 = 0;

        FUNC_0(VAR_0);

        if (!FUNC_1(VAR_0->bound_to_links)) {
                FUNC_4(VAR_0);
                VAR_1 = 1;
        }

        if (!FUNC_1(VAR_0->bound_by_links)) {
                FUNC_3(VAR_0);
                VAR_1 = 1;
        }

        if (VAR_1)
                FUNC_2(VAR_0);

        return;
}
