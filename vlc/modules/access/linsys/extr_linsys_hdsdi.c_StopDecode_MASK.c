
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int i_channel; int * p_es; } ;
typedef TYPE_1__ hdsdi_audio_t ;
struct TYPE_6__ {int out; TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_7__ {TYPE_1__* p_audios; int * p_es_video; } ;
typedef TYPE_3__ demux_sys_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1( demux_t *VAR_1 )
{
    demux_sys_t *VAR_2 = VAR_1->p_sys;

    FUNC_0( VAR_1->out, VAR_2->p_es_video );

    for ( int VAR_3 = 0; VAR_3 < VAR_0; VAR_3++ )
    {
        hdsdi_audio_t *VAR_4 = &VAR_2->p_audios[VAR_3];
        if ( VAR_4->i_channel != -1 && VAR_4->p_es != ((void*)0) )
        {
            FUNC_0( VAR_1->out, VAR_4->p_es );
            VAR_4->p_es = ((void*)0);
        }
    }
}
