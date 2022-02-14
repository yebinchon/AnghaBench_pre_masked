
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_4__* sys; } ;
typedef TYPE_3__ audio_output_t ;
struct TYPE_10__ {int * p_dsbuffer; } ;
struct TYPE_9__ {float volume; int mute; scalar_t__ mb; } ;
struct TYPE_12__ {TYPE_2__ s; TYPE_1__ volume; } ;
typedef TYPE_4__ aout_sys_t ;
typedef scalar_t__ LONG ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (float,float) ;
 int FUNC_2 (TYPE_3__*,float) ;
 int FUNC_3 (TYPE_3__*,float) ;
 int FUNC_4 (char*,float) ;
 float FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (float) ;
 int FUNC_7 (int,char*) ;
 scalar_t__ FUNC_8 (TYPE_3__*,char*) ;

__attribute__((used)) static int FUNC_9( audio_output_t *VAR_3, float VAR_4 )
{
    aout_sys_t *VAR_5 = VAR_3->sys;
    int VAR_6 = 0;



    float VAR_7 = VAR_4 > 1.f ? VAR_4 * VAR_4 * VAR_4 : 1.f;
    FUNC_2( VAR_3, VAR_7 );


    LONG VAR_8 = FUNC_6( 6000.f * FUNC_5( FUNC_1( VAR_4, 1.f ) ));


    FUNC_7( VAR_1 < VAR_0, "DSBVOLUME_* confused" );
    if( VAR_8 > VAR_0 )
    {
        VAR_8 = VAR_0;
        VAR_6 = -1;
    }
    if( VAR_8 <= VAR_1 )
        VAR_8 = VAR_1;

    VAR_5->volume.mb = VAR_8;
    VAR_5->volume.volume = VAR_4;
    if( !VAR_5->volume.mute && VAR_5->s.p_dsbuffer != ((void*)0) &&
        FUNC_0( VAR_5->s.p_dsbuffer, VAR_8 ) != VAR_2 )
        return -1;

    FUNC_3( VAR_3, VAR_4 );

    if( FUNC_8( VAR_3, "volume-save" ) )
        FUNC_4( "directx-volume", VAR_4 );
    return VAR_6;
}
