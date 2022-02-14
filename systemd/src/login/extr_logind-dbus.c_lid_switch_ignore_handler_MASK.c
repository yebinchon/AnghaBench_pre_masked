
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int lid_switch_ignore_event_source; } ;
typedef TYPE_1__ sd_event_source ;
typedef TYPE_1__ Manager ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(sd_event_source *VAR_0, uint64_t VAR_1, void *VAR_2) {
        Manager *VAR_3 = VAR_2;

        FUNC_0(VAR_0);
        FUNC_0(VAR_3);

        VAR_3->lid_switch_ignore_event_source = FUNC_1(VAR_3->lid_switch_ignore_event_source);
        return 0;
}
