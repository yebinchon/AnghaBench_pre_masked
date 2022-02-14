
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_7__ {int selected_device_lock; int device_list_lock; int device_list; int i_selected_dev; } ;
typedef TYPE_2__ aout_sys_t ;
typedef int const* UInt32 ;
typedef int OSStatus ;
typedef int CFRange ;
typedef int CFNumberRef ;
typedef int AudioObjectPropertyAddress ;
typedef int const* AudioObjectID ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (TYPE_1__*,char*) ;
 int VAR_3 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static OSStatus
FUNC_11(AudioObjectID VAR_4, UInt32 VAR_5,
                const AudioObjectPropertyAddress VAR_6[],
                void *VAR_7)
{
    FUNC_6(VAR_4);
    FUNC_6(VAR_5);
    FUNC_6(VAR_6);

    audio_output_t *VAR_8 = (audio_output_t *)VAR_7;
    if (!VAR_8)
        return -1;
    aout_sys_t *VAR_9 = VAR_8->sys;

    FUNC_8(VAR_8, "audio device configuration changed, resetting cache");
    FUNC_5(VAR_8, ((void*)0));

    FUNC_9(&VAR_9->selected_device_lock);
    FUNC_9(&VAR_9->device_list_lock);
    CFNumberRef VAR_10 =
        FUNC_2(VAR_1, VAR_2,
                       &VAR_9->i_selected_dev);
    CFRange VAR_11 = FUNC_3(0, FUNC_1(VAR_9->device_list));
    if (!FUNC_0(VAR_9->device_list, VAR_11, VAR_10))
        FUNC_7(VAR_8, VAR_0);
    FUNC_4(VAR_10);
    FUNC_10(&VAR_9->device_list_lock);
    FUNC_10(&VAR_9->selected_device_lock);

    return VAR_3;
}
