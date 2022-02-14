
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {unsigned int enable_wall_messages; int wall_message; int polkit_registry; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,char*,int *,int,int ,int *,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*,char*,char**,unsigned int*) ;
 int FUNC_6 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_7(
                sd_bus_message *VAR_2,
                void *VAR_3,
                sd_bus_error *VAR_4) {

        int VAR_5;
        Manager *VAR_6 = VAR_3;
        char *VAR_7;
        unsigned VAR_8;

        FUNC_0(VAR_2);
        FUNC_0(VAR_6);

        VAR_5 = FUNC_5(VAR_2, "sb", &VAR_7, &VAR_8);
        if (VAR_5 < 0)
                return VAR_5;

        VAR_5 = FUNC_1(VAR_2,
                                    VAR_0,
                                    "org.freedesktop.login1.set-wall-message",
                                    ((void*)0),
                                    0,
                                    VAR_1,
                                    &VAR_6->polkit_registry,
                                    VAR_4);
        if (VAR_5 < 0)
                return VAR_5;
        if (VAR_5 == 0)
                return 1;

        VAR_5 = FUNC_3(&VAR_6->wall_message, FUNC_2(VAR_7));
        if (VAR_5 < 0)
                return FUNC_4();

        VAR_6->enable_wall_messages = VAR_8;

        return FUNC_6(VAR_2, ((void*)0));
}
