
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int usec_t ;
struct TYPE_6__ {int sync_scheduled; scalar_t__ sync_interval_usec; int sync_event_source; int event; } ;
typedef TYPE_1__ Server ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int *,int ,int ,int ,int ,TYPE_1__*) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_4 ;
 int FUNC_6 (TYPE_1__*) ;

int FUNC_7(Server *VAR_5, int VAR_6) {
        int VAR_7;

        FUNC_0(VAR_5);

        if (VAR_6 <= VAR_1) {

                FUNC_6(VAR_5);
                return 0;
        }

        if (VAR_5->sync_scheduled)
                return 0;

        if (VAR_5->sync_interval_usec > 0) {
                usec_t VAR_8;

                VAR_7 = FUNC_2(VAR_5->event, VAR_0, &VAR_8);
                if (VAR_7 < 0)
                        return VAR_7;

                VAR_8 += VAR_5->sync_interval_usec;

                if (!VAR_5->sync_event_source) {
                        VAR_7 = FUNC_1(
                                        VAR_5->event,
                                        &VAR_5->sync_event_source,
                                        VAR_0,
                                        VAR_8, 0,
                                        VAR_4, VAR_5);
                        if (VAR_7 < 0)
                                return VAR_7;

                        VAR_7 = FUNC_4(VAR_5->sync_event_source, VAR_3);
                } else {
                        VAR_7 = FUNC_5(VAR_5->sync_event_source, VAR_8);
                        if (VAR_7 < 0)
                                return VAR_7;

                        VAR_7 = FUNC_3(VAR_5->sync_event_source, VAR_2);
                }
                if (VAR_7 < 0)
                        return VAR_7;

                VAR_5->sync_scheduled = 1;
        }

        return 0;
}
