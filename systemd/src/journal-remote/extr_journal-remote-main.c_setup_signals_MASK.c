
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sigint_event; int events; int sigterm_event; } ;
typedef TYPE_1__ RemoteServer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *,int ,int *,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,int *,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(RemoteServer *VAR_3) {
        int VAR_4;

        FUNC_0(VAR_3);

        FUNC_1(FUNC_3(VAR_2, ((void*)0), VAR_0, VAR_1, -1) >= 0);

        VAR_4 = FUNC_2(VAR_3->events, &VAR_3->sigterm_event, VAR_1, ((void*)0), VAR_3);
        if (VAR_4 < 0)
                return VAR_4;

        VAR_4 = FUNC_2(VAR_3->events, &VAR_3->sigint_event, VAR_0, ((void*)0), VAR_3);
        if (VAR_4 < 0)
                return VAR_4;

        return 0;
}
