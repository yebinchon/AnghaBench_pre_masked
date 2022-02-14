
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char const Unit ;
struct TYPE_3__ {scalar_t__ deserialized_state; } ;
typedef scalar_t__ SliceState ;
typedef TYPE_1__ Slice ;
typedef char const FDSet ;


 TYPE_1__* FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static int FUNC_5(Unit *VAR_0, const char *VAR_1, const char *VAR_2, FDSet *VAR_3) {
        Slice *VAR_4 = FUNC_0(VAR_0);

        FUNC_1(VAR_0);
        FUNC_1(VAR_1);
        FUNC_1(VAR_2);
        FUNC_1(VAR_3);

        if (FUNC_4(VAR_1, "state")) {
                SliceState VAR_5;

                VAR_5 = FUNC_3(VAR_2);
                if (VAR_5 < 0)
                        FUNC_2("Failed to parse state value %s", VAR_2);
                else
                        VAR_4->deserialized_state = VAR_5;

        } else
                FUNC_2("Unknown serialization key '%s'", VAR_1);

        return 0;
}
