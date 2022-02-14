
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* psz_description; struct TYPE_4__* psz_name; struct TYPE_4__* p_next; } ;
typedef TYPE_1__ libvlc_audio_output_t ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1( libvlc_audio_output_t *VAR_0 )
{
    while( VAR_0 != ((void*)0) )
    {
        libvlc_audio_output_t *VAR_1 = VAR_0->p_next;

        FUNC_0( VAR_0->psz_name );
        FUNC_0( VAR_0->psz_description );
        FUNC_0( VAR_0 );
        VAR_0 = VAR_1;
    }
}
