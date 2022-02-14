
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_5__ {int stamp_path; void* realtime_event_source; void* monotonic_event_source; } ;
typedef TYPE_1__ Timer ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (void*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(Unit *VAR_0) {
        Timer *VAR_1 = FUNC_0(VAR_0);

        FUNC_1(VAR_1);

        FUNC_4(VAR_1);

        VAR_1->monotonic_event_source = FUNC_3(VAR_1->monotonic_event_source);
        VAR_1->realtime_event_source = FUNC_3(VAR_1->realtime_event_source);

        FUNC_2(VAR_1->stamp_path);
}
