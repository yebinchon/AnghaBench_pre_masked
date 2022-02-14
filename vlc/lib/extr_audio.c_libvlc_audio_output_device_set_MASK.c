
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libvlc_media_player_t ;
typedef int audio_output_t ;


 int * FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char**,char*,char const*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int *,char*,char const*) ;
 int FUNC_7 (int *,char*) ;

void FUNC_8( libvlc_media_player_t *VAR_1,
                                     const char *VAR_2, const char *VAR_3 )
{
    if( VAR_3 == ((void*)0) )
        return;

    if( VAR_2 != ((void*)0) )
    {
        char *VAR_4;

        if( FUNC_3( &VAR_4, "%s-audio-device", VAR_2 ) == -1 )
            return;

        if( !FUNC_7( VAR_1, VAR_4 ) )

            FUNC_5( VAR_1, VAR_4, VAR_0 );
        FUNC_6( VAR_1, VAR_4, VAR_3 );
        FUNC_4( VAR_4 );
        return;
    }

    audio_output_t *VAR_5 = FUNC_0( VAR_1 );
    if( VAR_5 == ((void*)0) )
        return;

    FUNC_1( VAR_5, VAR_3 );
    FUNC_2(VAR_5);
}
