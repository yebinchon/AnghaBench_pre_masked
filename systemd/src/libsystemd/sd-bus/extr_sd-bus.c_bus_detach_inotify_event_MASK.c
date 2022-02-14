
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ inotify_event_source; } ;
typedef TYPE_1__ sd_bus ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(sd_bus *VAR_1) {
        FUNC_0(VAR_1);

        if (VAR_1->inotify_event_source) {
                FUNC_1(VAR_1->inotify_event_source, VAR_0);
                VAR_1->inotify_event_source = FUNC_2(VAR_1->inotify_event_source);
        }
}
