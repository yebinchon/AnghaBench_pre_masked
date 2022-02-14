
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* seat; int * session_devices; } ;
struct TYPE_9__ {int devices; } ;
typedef int SessionDevice ;
typedef TYPE_1__ Seat ;
typedef TYPE_2__ Device ;


 int FUNC_0 (int ,int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(Device *VAR_1) {
        Seat *VAR_2;
        SessionDevice *VAR_3;

        FUNC_1(VAR_1);

        if (!VAR_1->seat)
                return;

        while ((VAR_3 = VAR_1->session_devices))
                FUNC_5(VAR_3);

        VAR_2 = VAR_1->seat;
        FUNC_0(VAR_0, VAR_1->seat->devices, VAR_1);
        VAR_1->seat = ((void*)0);

        if (!FUNC_3(VAR_2)) {
                FUNC_2(VAR_2);
                FUNC_4(VAR_2, "CanGraphical", ((void*)0));
        }
}
