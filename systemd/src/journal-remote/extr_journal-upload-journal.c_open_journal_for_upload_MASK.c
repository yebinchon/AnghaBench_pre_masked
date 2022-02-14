
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int sd_journal ;
struct TYPE_5__ {int timeout; int input_event; int events; int * journal; } ;
typedef TYPE_1__ Uploader ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int ,int *,int,int,int ,TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char const*) ;
 int FUNC_9 (int *,int ) ;

int FUNC_10(Uploader *VAR_2,
                            sd_journal *VAR_3,
                            const char *VAR_4,
                            bool VAR_5,
                            bool VAR_6) {
        int VAR_7, VAR_8, VAR_9;

        VAR_2->journal = VAR_3;

        FUNC_9(VAR_3, 0);

        if (VAR_6) {
                VAR_7 = FUNC_6(VAR_3);
                if (VAR_7 < 0)
                        return FUNC_2(VAR_7, "sd_journal_get_fd failed: %m");

                VAR_9 = FUNC_5(VAR_3);

                VAR_8 = FUNC_7(VAR_3);
                FUNC_0(VAR_8 >= 0);
                if (VAR_8 > 0)
                        VAR_2->timeout = -1;
                else
                        VAR_2->timeout = VAR_0;

                VAR_8 = FUNC_4(VAR_2->events, &VAR_2->input_event,
                                    VAR_7, VAR_9, VAR_1, VAR_2);
                if (VAR_8 < 0)
                        return FUNC_2(VAR_8, "Failed to register input event: %m");

                FUNC_1("Listening for journal events on fd:%d, timeout %d",
                          VAR_7, VAR_2->timeout == (uint64_t) -1 ? -1 : (int) VAR_2->timeout);
        } else
                FUNC_1("Not listening for journal events.");

        if (VAR_4) {
                VAR_8 = FUNC_8(VAR_3, VAR_4);
                if (VAR_8 < 0)
                        return FUNC_2(VAR_8, "Failed to seek to cursor %s: %m",
                                               VAR_4);
        }

        return FUNC_3(VAR_2, 1 + !!VAR_5);
}
