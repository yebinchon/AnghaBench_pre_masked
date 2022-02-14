
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int player; } ;
typedef TYPE_1__ libvlc_media_player_t ;
struct TYPE_11__ {double* f_amp; int f_preamp; } ;
typedef TYPE_2__ libvlc_equalizer_t ;
typedef int bands ;
typedef TYPE_1__ audio_output_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (char*,int,char*,double) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;
 int FUNC_4 (TYPE_1__*,char*,char*) ;
 TYPE_1__* FUNC_5 (int ) ;

int FUNC_6( libvlc_media_player_t *VAR_2, libvlc_equalizer_t *VAR_3 )
{
    char VAR_4[VAR_0 * VAR_1 + 1];

    if( VAR_3 != ((void*)0) )
    {
        for( unsigned VAR_5 = 0, VAR_6 = 0; VAR_5 < VAR_0; VAR_5++ )
        {
            VAR_6 += FUNC_1( VAR_4 + VAR_6, sizeof(VAR_4) - VAR_6, " %.07f",
                          VAR_3->f_amp[VAR_5] );
            if( FUNC_2(VAR_6 >= sizeof(VAR_4)) )
                return -1;
        }

        FUNC_3( VAR_2, "equalizer-preamp", VAR_3->f_preamp );
        FUNC_4( VAR_2, "equalizer-bands", VAR_4 );
    }
    FUNC_4( VAR_2, "audio-filter", VAR_3 ? "equalizer" : "" );

    audio_output_t *VAR_7 = FUNC_5( VAR_2->player );
    if( VAR_7 != ((void*)0) )
    {
        if( VAR_3 != ((void*)0) )
        {
            FUNC_3( VAR_7, "equalizer-preamp", VAR_3->f_preamp );
            FUNC_4( VAR_7, "equalizer-bands", VAR_4 );
        }

        FUNC_4( VAR_7, "audio-filter", VAR_3 ? "equalizer" : "" );
        FUNC_0(VAR_7);
    }

    return 0;
}
