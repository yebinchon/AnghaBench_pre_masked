
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_7__ {int device_events; int lock; int work; int * requested_device; int * it; } ;
typedef TYPE_2__ aout_sys_t ;
typedef int IMMDeviceEnumerator ;
typedef int HRESULT ;


 int FUNC_0 (int *,int ,TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int VAR_0 ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_1__*,int *) ;
 int VAR_1 ;
 int FUNC_10 (int *,int *,int ) ;
 int FUNC_11 (TYPE_1__*,char*,int ) ;

__attribute__((used)) static void *FUNC_12(void *VAR_2)
{
    audio_output_t *VAR_3 = VAR_2;
    aout_sys_t *VAR_4 = VAR_3->sys;
    IMMDeviceEnumerator *VAR_5 = VAR_4->it;

    FUNC_2();
    FUNC_4(VAR_5,
                                                          &VAR_4->device_events);
    HRESULT VAR_6 = FUNC_0(VAR_5, VAR_1, VAR_3);
    if (FUNC_3(VAR_6))
        FUNC_11(VAR_3, "cannot enumerate audio endpoints (error 0x%lX)", VAR_6);

    FUNC_1(&VAR_4->lock);

    do
        if (VAR_4->requested_device == ((void*)0) || FUNC_3(FUNC_9(VAR_3, VAR_5)))
            FUNC_10(&VAR_4->work, &VAR_4->lock, VAR_0);
    while (VAR_4->it != ((void*)0));

    FUNC_7(&VAR_4->lock);

    FUNC_6(VAR_5,
                                                          &VAR_4->device_events);
    FUNC_5(VAR_5);
    FUNC_8();
    return ((void*)0);
}
