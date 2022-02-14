
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int player; } ;
typedef TYPE_1__ libvlc_media_player_t ;
typedef int audio_output_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ) ;

__attribute__((used)) static audio_output_t *FUNC_3( libvlc_media_player_t *VAR_0 )
{
    FUNC_0( VAR_0 != ((void*)0) );

    audio_output_t *VAR_1 = FUNC_2(VAR_0->player);
    if( VAR_1 == ((void*)0) )
        FUNC_1( "No active audio output" );
    return VAR_1;
}
