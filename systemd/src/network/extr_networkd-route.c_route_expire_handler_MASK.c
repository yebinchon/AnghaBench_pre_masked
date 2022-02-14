
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int sd_event_source ;
struct TYPE_5__ {int link; } ;
typedef TYPE_1__ Route ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int *) ;

int FUNC_4(sd_event_source *VAR_0, uint64_t VAR_1, void *VAR_2) {
        Route *VAR_3 = VAR_2;
        int VAR_4;

        FUNC_0(VAR_3);

        VAR_4 = FUNC_3(VAR_3, VAR_3->link, ((void*)0));
        if (VAR_4 < 0)
                FUNC_1(VAR_4, "Could not remove route: %m");
        else
                FUNC_2(VAR_3);

        return 1;
}
