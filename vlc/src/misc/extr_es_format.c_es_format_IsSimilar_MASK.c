
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ i_chroma; } ;
typedef TYPE_1__ video_format_t ;
struct TYPE_10__ {int i_chan_mode; int i_physical_channels; int i_channels; int i_rate; int channel_type; int i_format; } ;
struct TYPE_9__ {int i_cat; int i_codec; TYPE_1__ video; int i_profile; TYPE_3__ audio; } ;
typedef TYPE_2__ es_format_t ;
typedef TYPE_3__ audio_format_t ;





 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int,int ) ;

bool FUNC_2( const es_format_t *VAR_0, const es_format_t *VAR_1 )
{
    if( VAR_0->i_cat != VAR_1->i_cat ||
        FUNC_1( VAR_0->i_cat, VAR_0->i_codec ) !=
        FUNC_1( VAR_1->i_cat, VAR_1->i_codec ) )
        return 0;

    switch( VAR_0->i_cat )
    {
    case 130:
    {
        audio_format_t VAR_2 = VAR_0->audio;
        audio_format_t VAR_3 = VAR_1->audio;

        if( VAR_2 && VAR_3 && VAR_2 != VAR_3 )
            return 0;
        if( VAR_2 != VAR_3 ||
            VAR_2 != VAR_3 ||
            VAR_2 != VAR_3 ||
            VAR_2 != VAR_3 ||
            VAR_2 != VAR_3 )
            return 0;
        if( VAR_0->i_profile != VAR_1->i_profile )
            return 0;
        return 1;
    }

    case 128:
    {
        video_format_t VAR_4 = VAR_0->video;
        video_format_t VAR_5 = VAR_1->video;
        if( !VAR_4 )
            VAR_4 = FUNC_1( VAR_0->i_cat, VAR_0->i_codec );
        if( !VAR_5 )
            VAR_5 = FUNC_1( VAR_1->i_cat, VAR_1->i_codec );
        return FUNC_0( &VAR_4, &VAR_5 );
    }

    case 129:
    default:
        return 1;
    }
}
