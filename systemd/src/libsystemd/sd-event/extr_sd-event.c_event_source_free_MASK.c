
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type; scalar_t__ dispatching; } ;
typedef TYPE_1__ sd_event_source ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static sd_event_source* FUNC_3(sd_event_source *VAR_1) {
        if (!VAR_1)
                return ((void*)0);
        if (VAR_1->dispatching) {
                if (VAR_1->type == VAR_0)
                        FUNC_2(VAR_1);

                FUNC_0(VAR_1);
        } else
                FUNC_1(VAR_1);

        return ((void*)0);
}
