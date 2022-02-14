
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct signalfd_siginfo {int dummy; } ;
typedef int sd_event_source ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 void* FUNC_0 (float) ;
 int FUNC_1 (void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ FUNC_6 (int ,int **,scalar_t__,int ,int ,void*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ,int *,int ,int) ;

__attribute__((used)) static int FUNC_11(sd_event_source *VAR_6, const struct signalfd_siginfo *VAR_7, void *VAR_8) {
        sd_event_source *VAR_9 = ((void*)0);
        pid_t VAR_10;

        FUNC_3(*VAR_6);
        FUNC_3(VAR_7);

        FUNC_5("got signal on %c", FUNC_1(VAR_8));

        FUNC_3(VAR_8 == FUNC_0('e'));

        FUNC_3(FUNC_10(VAR_3, ((void*)0), VAR_2, -1) >= 0);

        VAR_10 = FUNC_4();
        FUNC_3(VAR_10 >= 0);

        if (VAR_10 == 0)
                FUNC_2(VAR_0);

        FUNC_3(FUNC_6(FUNC_7(VAR_6), &VAR_9, VAR_10, VAR_4, VAR_5, FUNC_0('f')) >= 0);
        FUNC_3(FUNC_8(VAR_9, VAR_1) >= 0);

        FUNC_9(VAR_6);

        return 1;
}
