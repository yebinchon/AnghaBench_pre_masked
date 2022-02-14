
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ cad_burst_action; int ctrl_alt_del_ratelimit; } ;
typedef TYPE_1__ Manager ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,scalar_t__,int ,int *,int,char*) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(Manager *VAR_4) {




        if (FUNC_2(&VAR_4->ctrl_alt_del_ratelimit) || VAR_4->cad_burst_action == VAR_0)
                FUNC_1(VAR_4, VAR_3, VAR_2);
        else
                FUNC_0(VAR_4, VAR_4->cad_burst_action, VAR_1, ((void*)0), -1,
                                "Ctrl-Alt-Del was pressed more than 7 times within 2s");
}
