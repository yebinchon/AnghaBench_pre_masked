
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int i_int; } ;
typedef TYPE_1__ vlc_value_t ;
typedef int vlc_object_t ;
typedef int audio_output_t ;
struct TYPE_7__ {int lock; int requested_stereo_mode; } ;
typedef TYPE_2__ aout_owner_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4 (vlc_object_t *VAR_1, const char *VAR_2,
                               vlc_value_t VAR_3, vlc_value_t VAR_4, void *VAR_5)
{
    audio_output_t *VAR_6 = (audio_output_t *)VAR_1;
    (void)VAR_2; (void)VAR_3; (void)VAR_4; (void)VAR_5;

    aout_owner_t *VAR_7 = FUNC_1 (VAR_6);
    FUNC_2 (&VAR_7->lock);
    VAR_7->requested_stereo_mode = VAR_4.i_int;
    FUNC_3 (&VAR_7->lock);

    FUNC_0 (VAR_6, VAR_0);
    return 0;
}
