
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int name; int result; int jobs; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef TYPE_1__ BusWaitForJobs ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_1__*,char*,int *,char const**,char const**,char const**) ;
 char* FUNC_6 (int ,char*) ;

__attribute__((used)) static int FUNC_7(sd_bus_message *VAR_0, void *VAR_1, sd_bus_error *VAR_2) {
        const char *VAR_3, *VAR_4, *VAR_5;
        BusWaitForJobs *VAR_6 = VAR_1;
        uint32_t VAR_7;
        char *VAR_8;
        int VAR_9;

        FUNC_0(VAR_0);
        FUNC_0(VAR_6);

        VAR_9 = FUNC_5(VAR_0, "uoss", &VAR_7, &VAR_3, &VAR_4, &VAR_5);
        if (VAR_9 < 0) {
                FUNC_1(VAR_9);
                return 0;
        }

        VAR_8 = FUNC_6(VAR_6->jobs, (char*) VAR_3);
        if (!VAR_8)
                return 0;

        FUNC_3(VAR_8);

        (void) FUNC_4(&VAR_6->result, FUNC_2(VAR_5));

        (void) FUNC_4(&VAR_6->name, FUNC_2(VAR_4));

        return 0;
}
