
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_10__ {int (* flush ) (TYPE_2__*) ;int (* pause ) (TYPE_2__*,int,int ) ;} ;
typedef TYPE_2__ audio_output_t ;
struct TYPE_9__ {scalar_t__ i_format; } ;
struct TYPE_11__ {TYPE_1__ mixer_format; } ;
typedef TYPE_3__ aout_owner_t ;


 TYPE_3__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int,int ) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3 (audio_output_t *VAR_0, bool VAR_1, vlc_tick_t VAR_2)
{
    aout_owner_t *VAR_3 = FUNC_0 (VAR_0);

    if (VAR_3->mixer_format.i_format)
    {
        if (VAR_0->pause != ((void*)0))
            VAR_0->pause(VAR_0, VAR_1, VAR_2);
        else if (VAR_1)
            VAR_0->flush(VAR_0);
    }
}
