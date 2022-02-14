
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int sd_bus_error ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(sd_bus_message *VAR_0, void *VAR_1, sd_bus_error *VAR_2) {
        bool *VAR_3 = VAR_1;

        FUNC_0(FUNC_1(VAR_0), "Quit callback: %m");

        *VAR_3 = 1;
        return 1;
}
