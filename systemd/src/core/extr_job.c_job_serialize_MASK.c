
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ begin_usec; scalar_t__ begin_running_usec; int bus_track; int ignore_order; int sent_dbus_new_signal; int irreversible; int state; int type; int id; } ;
typedef TYPE_1__ Job ;
typedef TYPE_1__ FILE ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,TYPE_1__*,char*) ;
 int FUNC_2 (char,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,char*,int ) ;
 int FUNC_6 (TYPE_1__*,char*,int ) ;
 int FUNC_7 (TYPE_1__*,char*,char*,int ) ;
 int FUNC_8 (TYPE_1__*,char*,scalar_t__) ;

int FUNC_9(Job *VAR_0, FILE *VAR_1) {
        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        (void) FUNC_7(VAR_1, "job-id", "%u", VAR_0->id);
        (void) FUNC_6(VAR_1, "job-type", FUNC_4(VAR_0->type));
        (void) FUNC_6(VAR_1, "job-state", FUNC_3(VAR_0->state));
        (void) FUNC_5(VAR_1, "job-irreversible", VAR_0->irreversible);
        (void) FUNC_5(VAR_1, "job-sent-dbus-new-signal", VAR_0->sent_dbus_new_signal);
        (void) FUNC_5(VAR_1, "job-ignore-order", VAR_0->ignore_order);

        if (VAR_0->begin_usec > 0)
                (void) FUNC_8(VAR_1, "job-begin", VAR_0->begin_usec);
        if (VAR_0->begin_running_usec > 0)
                (void) FUNC_8(VAR_1, "job-begin-running", VAR_0->begin_running_usec);

        FUNC_1(VAR_0->bus_track, VAR_1, "subscribed");


        FUNC_2('\n', VAR_1);
        return 0;
}
