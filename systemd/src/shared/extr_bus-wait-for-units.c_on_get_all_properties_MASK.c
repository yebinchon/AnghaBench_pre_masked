
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int sd_bus_message ;
struct TYPE_12__ {int message; } ;
typedef TYPE_1__ sd_bus_error ;
struct TYPE_13__ {int userdata; int bus_path; int (* unit_callback ) (TYPE_3__*,int ,int,int ) ;TYPE_3__* parent; } ;
typedef TYPE_2__ WaitForItem ;
struct TYPE_14__ {int has_failed; TYPE_2__* current; } ;
typedef TYPE_3__ BusWaitForUnits ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_3__*,int ,int,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_8(sd_bus_message *VAR_0, void *VAR_1, sd_bus_error *VAR_2) {
        WaitForItem *VAR_3 = VAR_1;
        int VAR_4;

        FUNC_0(VAR_3);

        if (FUNC_4(VAR_2)) {
                BusWaitForUnits *VAR_5 = VAR_3->parent;

                VAR_5->has_failed = 1;

                FUNC_2(FUNC_3(VAR_2), "GetAll() failed for %s: %s",
                                VAR_3->bus_path, VAR_2->message);

                VAR_5->current = VAR_3;
                VAR_3->unit_callback(VAR_5, VAR_3->bus_path, 0, VAR_3->userdata);
                FUNC_6(VAR_3);

                FUNC_1(VAR_5);
                return 0;
        }

        VAR_4 = FUNC_7(VAR_3, VAR_0);
        if (VAR_4 < 0)
                FUNC_2(VAR_4, "Failed to process GetAll method reply: %m");

        return 0;
}
