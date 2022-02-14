
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef int sd_event_source ;
struct TYPE_6__ {scalar_t__ state; } ;
typedef TYPE_1__ Timer ;


 TYPE_1__* FUNC_0 (void*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(sd_event_source *VAR_1, uint64_t VAR_2, void *VAR_3) {
        Timer *VAR_4 = FUNC_0(VAR_3);

        FUNC_2(VAR_4);

        if (VAR_4->state != VAR_0)
                return 0;

        FUNC_3(FUNC_1(VAR_4), "Timer elapsed.");
        FUNC_4(VAR_4);
        return 0;
}
