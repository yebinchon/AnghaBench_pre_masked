
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int sd_event_source ;
struct TYPE_3__ {scalar_t__ have_ask_password; } ;
typedef TYPE_1__ Manager ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (scalar_t__,char*) ;

__attribute__((used)) static int FUNC_4(sd_event_source *VAR_0,
                                            int VAR_1, uint32_t VAR_2, void *VAR_3) {
        Manager *VAR_4 = VAR_3;

        FUNC_0(VAR_4);

        (void) FUNC_1(VAR_1);

        VAR_4->have_ask_password = FUNC_2();
        if (VAR_4->have_ask_password < 0)


                FUNC_3(VAR_4->have_ask_password, "Failed to list /run/systemd/ask-password: %m");

        return 0;
}
