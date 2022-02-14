
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char const Unit ;
struct TYPE_3__ {scalar_t__ result; scalar_t__ deserialized_state; } ;
typedef scalar_t__ PathState ;
typedef scalar_t__ PathResult ;
typedef TYPE_1__ Path ;
typedef char const FDSet ;


 TYPE_1__* FUNC_0 (char const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char*,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static int FUNC_6(Unit *VAR_1, const char *VAR_2, const char *VAR_3, FDSet *VAR_4) {
        Path *VAR_5 = FUNC_0(VAR_1);

        FUNC_1(VAR_1);
        FUNC_1(VAR_2);
        FUNC_1(VAR_3);
        FUNC_1(VAR_4);

        if (FUNC_5(VAR_2, "state")) {
                PathState VAR_6;

                VAR_6 = FUNC_4(VAR_3);
                if (VAR_6 < 0)
                        FUNC_2(VAR_1, "Failed to parse state value: %s", VAR_3);
                else
                        VAR_5->deserialized_state = VAR_6;

        } else if (FUNC_5(VAR_2, "result")) {
                PathResult VAR_7;

                VAR_7 = FUNC_3(VAR_3);
                if (VAR_7 < 0)
                        FUNC_2(VAR_1, "Failed to parse result value: %s", VAR_3);
                else if (VAR_7 != VAR_0)
                        VAR_5->result = VAR_7;

        } else
                FUNC_2(VAR_1, "Unknown serialization key: %s", VAR_2);

        return 0;
}
