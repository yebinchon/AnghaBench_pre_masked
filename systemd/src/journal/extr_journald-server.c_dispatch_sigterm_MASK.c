
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct signalfd_siginfo {int dummy; } ;
typedef int sd_event_source ;
struct TYPE_3__ {int event; } ;
typedef TYPE_1__ Server ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,struct signalfd_siginfo const*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(sd_event_source *VAR_1, const struct signalfd_siginfo *VAR_2, void *VAR_3) {
        Server *VAR_4 = VAR_3;

        FUNC_0(VAR_4);

        FUNC_1(VAR_0, VAR_2);

        FUNC_2(VAR_4->event, 0);
        return 0;
}
