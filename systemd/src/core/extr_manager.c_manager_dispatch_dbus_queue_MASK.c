
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* in_dbus_queue; } ;
typedef TYPE_1__ Unit ;
struct TYPE_14__ {TYPE_2__* in_dbus_queue; } ;
struct TYPE_13__ {int send_reloading_done; scalar_t__ pending_reload_message; TYPE_3__* dbus_job_queue; TYPE_1__* dbus_unit_queue; } ;
typedef TYPE_2__ Manager ;
typedef TYPE_3__ Job ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static unsigned FUNC_7(Manager *VAR_2) {
        unsigned VAR_3 = 0, VAR_4;
        Unit *VAR_5;
        Job *VAR_6;

        FUNC_1(VAR_2);



        if (FUNC_0(VAR_2) || VAR_2->send_reloading_done || VAR_2->pending_reload_message)
                VAR_4 = (unsigned) -1;
        else {

                if (!VAR_2->dbus_unit_queue && !VAR_2->dbus_job_queue)
                        return 0;



                if (FUNC_6(VAR_2) > VAR_0)
                        return 0;
                VAR_4 = VAR_1;
        }

        while (VAR_4 != 0 && (VAR_5 = VAR_2->dbus_unit_queue)) {

                FUNC_1(VAR_5->in_dbus_queue);

                FUNC_5(VAR_5);
                VAR_3++;

                if (VAR_4 != (unsigned) -1)
                        VAR_4--;
        }

        while (VAR_4 != 0 && (VAR_6 = VAR_2->dbus_job_queue)) {
                FUNC_1(VAR_6->in_dbus_queue);

                FUNC_2(VAR_6);
                VAR_3++;

                if (VAR_4 != (unsigned) -1)
                        VAR_4--;
        }

        if (VAR_2->send_reloading_done) {
                VAR_2->send_reloading_done = 0;
                FUNC_3(VAR_2, 0);
                VAR_3++;
        }

        if (VAR_2->pending_reload_message) {
                FUNC_4(VAR_2);
                VAR_3++;
        }

        return VAR_3;
}
