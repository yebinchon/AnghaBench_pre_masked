
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t UnitType ;
struct TYPE_8__ {int (* enumerate ) (TYPE_1__*) ;} ;
struct TYPE_7__ {scalar_t__ test_run_flags; } ;
typedef TYPE_1__ Manager ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (size_t) ;
 TYPE_2__** VAR_2 ;

__attribute__((used)) static void FUNC_6(Manager *VAR_3) {
        UnitType VAR_4;

        FUNC_0(VAR_3);

        if (VAR_3->test_run_flags == VAR_0)
                return;


        for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
                if (!FUNC_4(VAR_4)) {
                        FUNC_1("Unit type .%s is not supported on this system.", FUNC_5(VAR_4));
                        continue;
                }

                if (VAR_2[VAR_4]->enumerate)
                        VAR_2[VAR_4]->enumerate(VAR_3);
        }

        FUNC_2(VAR_3);
}
