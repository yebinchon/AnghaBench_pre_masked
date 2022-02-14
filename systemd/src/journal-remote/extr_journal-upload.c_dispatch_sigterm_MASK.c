
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct signalfd_siginfo {int dummy; } ;
typedef int sd_event_source ;
struct TYPE_5__ {int events; } ;
typedef TYPE_1__ Uploader ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,struct signalfd_siginfo const*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(sd_event_source *VAR_1,
                            const struct signalfd_siginfo *VAR_2,
                            void *VAR_3) {
        Uploader *VAR_4 = VAR_3;

        FUNC_0(VAR_4);

        FUNC_3(VAR_0, VAR_2);

        FUNC_1(VAR_4);
        FUNC_2(VAR_4);

        FUNC_4(VAR_4->events, 0);
        return 0;
}
