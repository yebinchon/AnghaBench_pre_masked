
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct context {int quit; } ;
typedef int sd_bus_message ;
typedef int sd_bus_error ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static int FUNC_3(sd_bus_message *VAR_0, void *VAR_1, sd_bus_error *VAR_2) {
        struct context *VAR_3 = VAR_1;
        int VAR_4;

        VAR_3->quit = 1;

        FUNC_1("Exit called");

        VAR_4 = FUNC_2(VAR_0, "");
        FUNC_0(VAR_4 >= 0);

        return 1;
}
