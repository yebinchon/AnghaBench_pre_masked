
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int audio_sample_format_t ;
struct TYPE_12__ {int flush; int pause; int play; int time_get; TYPE_3__* sys; } ;
typedef TYPE_2__ audio_output_t ;
struct TYPE_11__ {int mute; int volume; } ;
struct TYPE_13__ {TYPE_1__ volume; int s; } ;
typedef TYPE_3__ aout_sys_t ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 int FUNC_7 (TYPE_2__*,char*) ;

__attribute__((used)) static int FUNC_8( audio_output_t *VAR_4,
                        audio_sample_format_t *restrict VAR_5 )
{
    FUNC_6( VAR_4, "Opening DirectSound Audio Output" );


    if( FUNC_1( VAR_4 ) )
    {
        FUNC_7( VAR_4, "cannot initialize DirectSound" );
        return -1;
    }

    aout_sys_t *VAR_6 = VAR_4->sys;
    HRESULT VAR_7 = FUNC_3( FUNC_4(VAR_4), &VAR_6->s, VAR_5 );
    if( FUNC_0(VAR_7) )
        return -1;


    FUNC_5( VAR_4, VAR_6->volume.volume );
    FUNC_2( VAR_4, VAR_6->volume.mute );


    VAR_4->time_get = VAR_3;
    VAR_4->play = VAR_2;
    VAR_4->pause = VAR_1;
    VAR_4->flush = VAR_0;

    return 0;
}
