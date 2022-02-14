
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sd_bus_message ;
struct TYPE_5__ {int message; } ;
typedef TYPE_1__ sd_bus_error ;
typedef int Manager ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (TYPE_1__ const*) ;
 TYPE_1__* FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(sd_bus_message *VAR_0, void *VAR_1, sd_bus_error *VAR_2) {
        Manager *VAR_3 = VAR_1;
        const sd_bus_error *VAR_4;

        FUNC_0(VAR_0);
        FUNC_0(VAR_3);

        VAR_4 = FUNC_3(VAR_0);
        if (VAR_4)
                FUNC_1(FUNC_2(VAR_4), "Could not set timezone: %s", VAR_4->message);

        return 1;
}
