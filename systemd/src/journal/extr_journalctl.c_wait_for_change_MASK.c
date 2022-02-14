
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usec_t ;
struct timespec {int dummy; } ;
struct pollfd {int fd; int revents; int events; } ;
typedef int sd_journal ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pollfd*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int,char*) ;
 scalar_t__ FUNC_5 (struct pollfd*,int ,int *,int *) ;
 int FUNC_6 (int *,scalar_t__*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (struct timespec*,scalar_t__) ;

__attribute__((used)) static int FUNC_9(sd_journal *VAR_8, int VAR_9) {
        struct pollfd VAR_10[] = {
                { .fd = VAR_9, .events = VAR_4 },
                { .fd = VAR_5 },
        };

        struct timespec VAR_11;
        usec_t VAR_12;
        int VAR_13;

        FUNC_2(*VAR_8);
        FUNC_2(VAR_9 >= 0);




        VAR_13 = FUNC_6(VAR_8, &VAR_12);
        if (VAR_13 < 0)
                return FUNC_4(VAR_13, "Failed to determine journal waiting time: %m");

        if (FUNC_5(VAR_10, FUNC_0(VAR_10),
                  VAR_12 == VAR_6 ? ((void*)0) : FUNC_8(&VAR_11, VAR_12), ((void*)0)) < 0) {
                if (VAR_7 == VAR_1)
                        return 0;

                return FUNC_4(VAR_7, "Couldn't wait for journal event: %m");
        }

        if (VAR_10[1].revents & (VAR_3|VAR_2))
                return FUNC_3(FUNC_1(VAR_0),
                                       "Standard output has been closed.");

        VAR_13 = FUNC_7(VAR_8);
        if (VAR_13 < 0)
                return FUNC_4(VAR_13, "Failed to process journal events: %m");

        return 0;
}
