
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sigint_event; int events; int sigterm_event; } ;
typedef TYPE_1__ Uploader ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int ,int *,int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,int *,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(Uploader *VAR_4) {
        int VAR_5;

        FUNC_0(VAR_4);

        FUNC_1(FUNC_3(VAR_2, ((void*)0), VAR_0, VAR_1, -1) >= 0);

        VAR_5 = FUNC_2(VAR_4->events, &VAR_4->sigterm_event, VAR_1, VAR_3, VAR_4);
        if (VAR_5 < 0)
                return VAR_5;

        VAR_5 = FUNC_2(VAR_4->events, &VAR_4->sigint_event, VAR_0, VAR_3, VAR_4);
        if (VAR_5 < 0)
                return VAR_5;

        return 0;
}
