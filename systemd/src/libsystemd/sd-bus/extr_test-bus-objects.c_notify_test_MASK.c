
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int path; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ,char*,char*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_4(sd_bus_message *VAR_0, void *VAR_1, sd_bus_error *VAR_2) {
        int VAR_3;

        FUNC_0(FUNC_1(FUNC_2(VAR_0), VAR_0->path, "org.freedesktop.systemd.ValueTest", "Value", ((void*)0)) >= 0);

        VAR_3 = FUNC_3(VAR_0, ((void*)0));
        FUNC_0(VAR_3 >= 0);

        return 1;
}
