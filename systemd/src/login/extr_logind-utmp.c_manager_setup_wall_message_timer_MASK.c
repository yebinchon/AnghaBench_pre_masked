
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ usec_t ;
struct TYPE_6__ {scalar_t__ scheduled_shutdown_timeout; scalar_t__ wall_message_timeout_source; int event; int scheduled_shutdown_type; } ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__*,int ,scalar_t__,int ,int ,TYPE_1__*) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int FUNC_7 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;

int FUNC_9(Manager *VAR_4) {

        usec_t VAR_5, VAR_6;
        int VAR_7;

        FUNC_0(VAR_4);

        VAR_5 = FUNC_3(VAR_0);
        VAR_6 = VAR_4->scheduled_shutdown_timeout;



        if (FUNC_1(VAR_4->scheduled_shutdown_type)) {
                FUNC_7(VAR_4, VAR_5);
                return 0;
        }

        if (VAR_6 < VAR_5)
                return 0;


        if (VAR_6 - VAR_5 < 15 * VAR_2) {
                VAR_7 = FUNC_7(VAR_4, VAR_5);
                if (VAR_7 == 0)
                        return 0;
        }

        VAR_6 = FUNC_8(VAR_5, VAR_6);
        if (VAR_6 == 0)
                return 0;

        if (VAR_4->wall_message_timeout_source) {
                VAR_7 = FUNC_6(VAR_4->wall_message_timeout_source, VAR_5 + VAR_6);
                if (VAR_7 < 0)
                        return FUNC_2(VAR_7, "sd_event_source_set_time() failed. %m");

                VAR_7 = FUNC_5(VAR_4->wall_message_timeout_source, VAR_1);
                if (VAR_7 < 0)
                        return FUNC_2(VAR_7, "sd_event_source_set_enabled() failed. %m");
        } else {
                VAR_7 = FUNC_4(VAR_4->event, &VAR_4->wall_message_timeout_source,
                                      VAR_0, VAR_5 + VAR_6, 0, VAR_3, VAR_4);
                if (VAR_7 < 0)
                        return FUNC_2(VAR_7, "sd_event_add_time() failed. %m");
        }

        return 0;
}
