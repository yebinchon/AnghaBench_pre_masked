
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_9__ {struct TYPE_9__* post_change_timer; scalar_t__ post_change_timer_period; } ;
typedef TYPE_1__ JournalFile ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ,int ,scalar_t__*) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void FUNC_8(JournalFile *VAR_2) {
        uint64_t VAR_3;
        int VAR_4;

        FUNC_0(VAR_2);
        FUNC_0(VAR_2->post_change_timer);

        VAR_4 = FUNC_4(VAR_2->post_change_timer, ((void*)0));
        if (VAR_4 < 0) {
                FUNC_2(VAR_4, "Failed to get ftruncate timer state: %m");
                goto fail;
        }
        if (VAR_4 > 0)
                return;

        VAR_4 = FUNC_3(FUNC_5(VAR_2->post_change_timer), VAR_0, &VAR_3);
        if (VAR_4 < 0) {
                FUNC_2(VAR_4, "Failed to get clock's now for scheduling ftruncate: %m");
                goto fail;
        }

        VAR_4 = FUNC_7(VAR_2->post_change_timer, VAR_3 + VAR_2->post_change_timer_period);
        if (VAR_4 < 0) {
                FUNC_2(VAR_4, "Failed to set time for scheduling ftruncate: %m");
                goto fail;
        }

        VAR_4 = FUNC_6(VAR_2->post_change_timer, VAR_1);
        if (VAR_4 < 0) {
                FUNC_2(VAR_4, "Failed to enable scheduled ftruncate: %m");
                goto fail;
        }

        return;

fail:

        FUNC_1(VAR_2);
}
