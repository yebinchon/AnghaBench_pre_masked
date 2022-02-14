
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char const Unit ;
struct TYPE_3__ {int was_abandoned; int controller; scalar_t__ deserialized_state; } ;
typedef scalar_t__ ScopeState ;
typedef TYPE_1__ Scope ;
typedef char const FDSet ;


 TYPE_1__* FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 () ;
 int FUNC_4 (char const*,char*,char const*) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char const*,char*) ;

__attribute__((used)) static int FUNC_8(Unit *VAR_0, const char *VAR_1, const char *VAR_2, FDSet *VAR_3) {
        Scope *VAR_4 = FUNC_0(VAR_0);
        int VAR_5;

        FUNC_1(VAR_0);
        FUNC_1(VAR_1);
        FUNC_1(VAR_2);
        FUNC_1(VAR_3);

        if (FUNC_7(VAR_1, "state")) {
                ScopeState VAR_6;

                VAR_6 = FUNC_6(VAR_2);
                if (VAR_6 < 0)
                        FUNC_4(VAR_0, "Failed to parse state value: %s", VAR_2);
                else
                        VAR_4->deserialized_state = VAR_6;

        } else if (FUNC_7(VAR_1, "was-abandoned")) {
                int VAR_7;

                VAR_7 = FUNC_5(VAR_2);
                if (VAR_7 < 0)
                        FUNC_4(VAR_0, "Failed to parse boolean value: %s", VAR_2);
                else
                        VAR_4->was_abandoned = VAR_7;
        } else if (FUNC_7(VAR_1, "controller")) {

                VAR_5 = FUNC_2(&VAR_4->controller, VAR_2);
                if (VAR_5 < 0)
                        return FUNC_3();

        } else
                FUNC_4(VAR_0, "Unknown serialization key: %s", VAR_1);

        return 0;
}
