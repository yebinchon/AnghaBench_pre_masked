
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int sd_bus_message ;
typedef int sd_bus_error ;
struct TYPE_2__ {int message; } ;





 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,char*,int*) ;

__attribute__((used)) static int FUNC_9(
                sd_bus_message *VAR_0,
                void *VAR_1,
                sd_bus_error *VAR_2) {

        uint32_t VAR_3;
        int VAR_4;

        FUNC_0(VAR_0);

        if (FUNC_7(VAR_0, ((void*)0))) {
                FUNC_3(FUNC_5(VAR_0),
                                "Unable to release name, failing connection: %s",
                                FUNC_6(VAR_0)->message);

                FUNC_1(FUNC_4(VAR_0));
                return 1;
        }

        VAR_4 = FUNC_8(VAR_0, "u", &VAR_3);
        if (VAR_4 < 0)
                return VAR_4;

        switch (VAR_3) {

        case 130:
                FUNC_2("Name asked to release is not taken currently, ignoring.");
                return 1;

        case 129:
                FUNC_2("Name asked to release is owned by somebody else, ignoring.");
                return 1;

        case 128:
                FUNC_2("Name successfully released.");
                return 1;
        }

        FUNC_2("Unexpected response from ReleaseName(), failing connection.");
        FUNC_1(FUNC_4(VAR_0));
        return 1;
}
