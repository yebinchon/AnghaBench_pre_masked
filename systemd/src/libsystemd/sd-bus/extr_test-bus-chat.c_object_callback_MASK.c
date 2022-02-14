
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int sd_bus_error ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,char*,char*) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static int FUNC_6(sd_bus_message *VAR_0, void *VAR_1, sd_bus_error *VAR_2) {
        int VAR_3;

        if (FUNC_4(VAR_0, ((void*)0)))
                return 0;

        if (FUNC_3(VAR_0, "org.object.test", "Foobar")) {
                FUNC_1("Invoked Foobar() on %s", FUNC_2(VAR_0));

                VAR_3 = FUNC_5(VAR_0, ((void*)0));
                if (VAR_3 < 0)
                        return FUNC_0(VAR_3, "Failed to send reply: %m");

                return 1;
        }

        return 0;
}
