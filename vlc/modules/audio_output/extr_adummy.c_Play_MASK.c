
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct aout_sys {scalar_t__ first_play_date; int length; } ;
struct TYPE_6__ {scalar_t__ i_length; } ;
typedef TYPE_1__ block_t ;
struct TYPE_7__ {struct aout_sys* sys; } ;
typedef TYPE_2__ audio_output_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static void FUNC_3(audio_output_t *VAR_1, block_t *VAR_2, vlc_tick_t VAR_3)
{
    struct aout_sys *VAR_4 = VAR_1->sys;

    if (FUNC_1(VAR_4->first_play_date == VAR_0))
        VAR_4->first_play_date = FUNC_2();
    VAR_4->length += VAR_2->i_length;

    FUNC_0( VAR_2 );
    (void) VAR_3;
}
