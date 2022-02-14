
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int child_event_source; int pending_messages; int current_messages; struct TYPE_8__* path; int device; TYPE_1__* manager; } ;
struct TYPE_7__ {int brightness_writers; } ;
typedef TYPE_2__ BrightnessWriter ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(BrightnessWriter *VAR_0) {
        if (!VAR_0)
                return;

        if (VAR_0->manager && VAR_0->path)
                (void) FUNC_1(VAR_0->manager->brightness_writers, VAR_0->path, VAR_0);

        FUNC_2(VAR_0->device);
        FUNC_0(VAR_0->path);

        FUNC_4(VAR_0->current_messages);
        FUNC_4(VAR_0->pending_messages);

        VAR_0->child_event_source = FUNC_3(VAR_0->child_event_source);

        FUNC_0(VAR_0);
}
