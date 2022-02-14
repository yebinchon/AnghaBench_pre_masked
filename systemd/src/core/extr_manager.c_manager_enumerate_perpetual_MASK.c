
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UnitType ;
struct TYPE_7__ {int (* enumerate_perpetual ) (TYPE_1__*) ;} ;
struct TYPE_6__ {scalar_t__ test_run_flags; } ;
typedef TYPE_1__ Manager ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (size_t) ;
 TYPE_2__** VAR_2 ;

__attribute__((used)) static void FUNC_5(Manager *VAR_3) {
        UnitType VAR_4;

        FUNC_0(VAR_3);

        if (VAR_3->test_run_flags == VAR_0)
                return;


        for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
                if (!FUNC_3(VAR_4)) {
                        FUNC_1("Unit type .%s is not supported on this system.", FUNC_4(VAR_4));
                        continue;
                }

                if (VAR_2[VAR_4]->enumerate_perpetual)
                        VAR_2[VAR_4]->enumerate_perpetual(VAR_3);
        }
}
