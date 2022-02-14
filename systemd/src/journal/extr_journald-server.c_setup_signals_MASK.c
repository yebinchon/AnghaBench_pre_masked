
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sigrtmin1_event_source; int event; int sigint_event_source; int sigterm_event_source; int sigusr2_event_source; int sigusr1_event_source; } ;
typedef TYPE_1__ Server ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,int *,scalar_t__,int ,TYPE_1__*) ;
 int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int *,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static int FUNC_5(Server *VAR_11) {
        int VAR_12;

        FUNC_0(VAR_11);

        FUNC_1(FUNC_4(VAR_6, ((void*)0), VAR_1, VAR_3, VAR_4, VAR_5, VAR_2+1, -1) >= 0);

        VAR_12 = FUNC_2(VAR_11->event, &VAR_11->sigusr1_event_source, VAR_4, VAR_9, VAR_11);
        if (VAR_12 < 0)
                return VAR_12;

        VAR_12 = FUNC_2(VAR_11->event, &VAR_11->sigusr2_event_source, VAR_5, VAR_10, VAR_11);
        if (VAR_12 < 0)
                return VAR_12;

        VAR_12 = FUNC_2(VAR_11->event, &VAR_11->sigterm_event_source, VAR_3, VAR_8, VAR_11);
        if (VAR_12 < 0)
                return VAR_12;


        VAR_12 = FUNC_3(VAR_11->sigterm_event_source, VAR_0+20);
        if (VAR_12 < 0)
                return VAR_12;



        VAR_12 = FUNC_2(VAR_11->event, &VAR_11->sigint_event_source, VAR_1, VAR_8, VAR_11);
        if (VAR_12 < 0)
                return VAR_12;

        VAR_12 = FUNC_3(VAR_11->sigint_event_source, VAR_0+20);
        if (VAR_12 < 0)
                return VAR_12;




        VAR_12 = FUNC_2(VAR_11->event, &VAR_11->sigrtmin1_event_source, VAR_2+1, VAR_7, VAR_11);
        if (VAR_12 < 0)
                return VAR_12;

        VAR_12 = FUNC_3(VAR_11->sigrtmin1_event_source, VAR_0+15);
        if (VAR_12 < 0)
                return VAR_12;

        return 0;
}
