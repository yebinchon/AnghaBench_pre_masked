
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct aout_sys {scalar_t__ first_play_date; scalar_t__ length; } ;
struct TYPE_4__ {struct aout_sys* sys; } ;
typedef TYPE_1__ audio_output_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static int FUNC_5(audio_output_t *VAR_1, vlc_tick_t *restrict VAR_2)
{
    struct aout_sys *VAR_3 = VAR_1->sys;

    if (FUNC_3(VAR_3->first_play_date == VAR_0))
    {
        *VAR_2 = 0;
        return 0;
    }

    vlc_tick_t VAR_4 = FUNC_4() - VAR_3->first_play_date;
    FUNC_0(VAR_4 >= 0);

    if (FUNC_1(VAR_3->length > VAR_4))
    {
        *VAR_2 = VAR_3->length - VAR_4;
        return 0;
    }

    FUNC_2(VAR_1, "underflow");
    return -1;
}
