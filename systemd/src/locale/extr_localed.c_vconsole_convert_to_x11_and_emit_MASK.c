
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int Context ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,char*,char*,char*,char*,char*,char*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(Context *VAR_0, sd_bus_message *VAR_1) {
        int VAR_2;

        FUNC_0(VAR_1);

        VAR_2 = FUNC_5(VAR_0, VAR_1);
        if (VAR_2 < 0)
                return VAR_2;

        VAR_2 = FUNC_4(VAR_0);
        if (VAR_2 <= 0)
                return VAR_2;


        VAR_2 = FUNC_6(VAR_0);
        if (VAR_2 < 0)
                return FUNC_1(VAR_2, "Failed to write X11 keyboard layout: %m");

        FUNC_2(FUNC_3(VAR_1),
                                       "/org/freedesktop/locale1",
                                       "org.freedesktop.locale1",
                                       "X11Layout", "X11Model", "X11Variant", "X11Options", ((void*)0));

        return 1;
}
