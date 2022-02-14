
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int userdata; int (* ready_callback ) (TYPE_1__*,int,int ) ;} ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef TYPE_1__ BusWaitForUnits ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int,int ) ;

__attribute__((used)) static int FUNC_6(sd_bus_message *VAR_0, void *VAR_1, sd_bus_error *VAR_2) {
        BusWaitForUnits *VAR_3 = VAR_1;

        FUNC_0(VAR_0);
        FUNC_0(VAR_3);

        FUNC_2("Warning! D-Bus connection terminated.");

        FUNC_1(VAR_3);

        if (VAR_3->ready_callback)
                VAR_3->ready_callback(VAR_3, 0, VAR_3->userdata);
        else
                FUNC_3(FUNC_4(VAR_0));

        return 0;
}
