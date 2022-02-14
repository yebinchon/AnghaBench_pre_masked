
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int sd_bus_error ;
typedef int Unit ;
struct TYPE_8__ {int anchor_job; } ;
typedef TYPE_1__ Transaction ;
typedef int Manager ;
typedef int JobMode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *,int ,int *,int *) ;
 int FUNC_3 (TYPE_1__*,int ,int *,int *,int,int,int,int,int *) ;
 int FUNC_4 (TYPE_1__*,int *,int ,int,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int) ;

int FUNC_7(Manager *VAR_6, Unit *VAR_7, JobMode VAR_8, sd_bus_error *VAR_9) {
        int VAR_10;
        Transaction *VAR_11;

        FUNC_0(*VAR_6);
        FUNC_0(*VAR_7);
        FUNC_0(VAR_8 < VAR_5);
        FUNC_0(VAR_8 != VAR_2);

        VAR_11 = FUNC_6(VAR_8 == VAR_4);
        if (!VAR_11)
                return -VAR_0;


        VAR_10 = FUNC_3(VAR_11, VAR_3, VAR_7, ((void*)0), 0, 0, 1, 1, VAR_9);
        if (VAR_10 < 0)
                goto tr_abort;


        FUNC_4(VAR_11, VAR_7, VAR_11->anchor_job, VAR_8 == VAR_1, VAR_9);

        VAR_10 = FUNC_2(VAR_11, VAR_6, VAR_8, ((void*)0), VAR_9);
        if (VAR_10 < 0)
                goto tr_abort;

        FUNC_5(VAR_11);
        return 0;

tr_abort:
        FUNC_1(VAR_11);
        FUNC_5(VAR_11);
        return VAR_10;
}
