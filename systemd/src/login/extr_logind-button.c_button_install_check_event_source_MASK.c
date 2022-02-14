
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ check_event_source; TYPE_1__* manager; } ;
struct TYPE_6__ {int event; } ;
typedef TYPE_2__ Button ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_1 (int ,scalar_t__*,int ,TYPE_2__*) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(Button *VAR_2) {
        int VAR_3;
        FUNC_0(VAR_2);



        if (VAR_2->check_event_source)
                return 0;

        VAR_3 = FUNC_1(VAR_2->manager->event, &VAR_2->check_event_source, VAR_1, VAR_2);
        if (VAR_3 < 0)
                return VAR_3;

        return FUNC_2(VAR_2->check_event_source, VAR_0+1);
}
