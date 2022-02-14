
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int usec_t ;
struct TYPE_7__ {int tv_usec; } ;
struct timex {int status; TYPE_2__ time; } ;
typedef int sd_event ;
typedef int buf ;
struct TYPE_6__ {int timerfd_fd; int adjtime_state; int has_watchfile; int timerfd_event_source; } ;
typedef TYPE_1__ ClockState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t,int ) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (char*,int ) ;
 int FUNC_3 (struct timex*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_5 ;
 char* FUNC_5 (char*,int,int ) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (char*,int,int,char const*) ;
 int FUNC_8 (int *,int *,int,int ,int ,TYPE_1__*) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 () ;
 int VAR_6 ;
 int FUNC_12 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_13(
                ClockState *VAR_7,
                sd_event *VAR_8) {

        char VAR_9[FUNC_0((size_t)VAR_1, FUNC_1("unrepresentable"))];
        struct timex VAR_10 = {};
        const char * VAR_11;
        usec_t VAR_12;
        int VAR_13;

        FUNC_4(VAR_7);
        VAR_13 = FUNC_11();
        if (VAR_13 < 0) {
                FUNC_6(VAR_13, "Failed to create timerfd: %m");
                goto finish;
        }
        VAR_7->timerfd_fd = VAR_13;

        VAR_13 = FUNC_3(&VAR_10);
        if (VAR_13 < 0) {
                FUNC_6(VAR_5, "Failed to read adjtimex state: %m");
                goto finish;
        }
        VAR_7->adjtime_state = VAR_13;

        if (VAR_10.status & VAR_3)
                VAR_10.time.tv_usec /= 1000;
        VAR_12 = FUNC_12(&VAR_10.time);
        VAR_11 = FUNC_5(VAR_9, sizeof(VAR_9), VAR_12);
        if (!VAR_11)
                FUNC_10(VAR_9, "unrepresentable");
        FUNC_7("adjtime state %d status %x time %s", VAR_7->adjtime_state, VAR_10.status, VAR_11);

        VAR_7->has_watchfile = FUNC_2("/run/systemd/timesync/synchronized", VAR_2) >= 0;
        if (VAR_7->has_watchfile)

                VAR_13 = 0;
        else if (VAR_7->adjtime_state == VAR_4) {


                VAR_13 = FUNC_8(VAR_8, &VAR_7->timerfd_event_source, VAR_7->timerfd_fd,
                                    VAR_0, VAR_6, VAR_7);
                if (VAR_13 < 0) {
                        FUNC_6(VAR_13, "Failed to create time change monitor source: %m");
                        goto finish;
                }
                VAR_13 = 1;
        } else

                VAR_13 = 0;

 finish:
        if (VAR_13 <= 0)
                (void) FUNC_9(VAR_8, VAR_13);
        return VAR_13;
}
