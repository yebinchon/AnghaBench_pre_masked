
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int pid_t ;


 int FUNC_0 (void*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(sd_bus_message *VAR_1, void *VAR_2, sd_bus_error *VAR_3) {
        pid_t VAR_4;

        FUNC_1(VAR_1);

        VAR_4 = FUNC_0(VAR_2);

        if (VAR_0 > 0) {
                FUNC_3("Container termination requested. Attempting to halt container.");
                (void) FUNC_2(VAR_4, VAR_0);
        } else {
                FUNC_3("Container termination requested. Exiting.");
                FUNC_6(FUNC_4(FUNC_5(VAR_1)), 0);
        }

        return 0;
}
