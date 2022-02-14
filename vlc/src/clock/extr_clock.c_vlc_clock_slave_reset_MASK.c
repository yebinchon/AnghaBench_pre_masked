
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* owner; } ;
typedef TYPE_1__ vlc_clock_t ;
struct TYPE_6__ {int lock; int wait_sync_ref; int wait_sync_ref_priority; } ;
typedef TYPE_2__ vlc_clock_main_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ,float,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(vlc_clock_t *VAR_2)
{
    vlc_clock_main_t *VAR_3 = VAR_2->owner;
    FUNC_2(&VAR_3->lock);
    VAR_3->wait_sync_ref_priority = VAR_0;
    VAR_3->wait_sync_ref =
        FUNC_0(VAR_1, VAR_1);

    FUNC_3(&VAR_3->lock);

    FUNC_1(VAR_2, VAR_1, VAR_1, 1.0f, 0, 0);
}
