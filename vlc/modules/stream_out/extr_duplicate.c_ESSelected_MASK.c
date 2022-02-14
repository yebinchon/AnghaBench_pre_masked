
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ i_cat; int i_group; int i_id; } ;
typedef TYPE_1__ es_format_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,int ) ;

__attribute__((used)) static bool FUNC_8( const es_format_t *VAR_4, char *VAR_5 )
{
    char *VAR_6;
    char *VAR_7;


    int VAR_8 = -1;
    int VAR_9 = -1;
    int VAR_10= -1;


    if( VAR_5 == ((void*)0) || *VAR_5 == '\0' )
    {
        return 1;
    }
    VAR_6 = FUNC_5( VAR_5 );
    if( !VAR_6 )
        return 0;
    VAR_7 = VAR_6;
    while( VAR_7 && *VAR_7 )
    {
        char *VAR_11;


        while( *VAR_7 == ' ' || *VAR_7 == '\t' ) VAR_7++;


        VAR_11 = FUNC_3( VAR_7, ',' );
        if( VAR_11 == VAR_7 )
        {

            VAR_7 = VAR_11 + 1;
            continue;
        }
        if( VAR_11 )
        {
            *VAR_11++ = '\0';
        }

        if( !FUNC_7( VAR_7, "no-audio", FUNC_6( "no-audio" ) ) ||
            !FUNC_7( VAR_7, "noaudio", FUNC_6( "noaudio" ) ) )
        {
            if( VAR_8 == -1 )
            {
                VAR_8 = VAR_4->i_cat != VAR_0 ? 1 : 0;
            }
        }
        else if( !FUNC_7( VAR_7, "no-video", FUNC_6( "no-video" ) ) ||
                 !FUNC_7( VAR_7, "novideo", FUNC_6( "novideo" ) ) )
        {
            if( VAR_8 == -1 )
            {
                VAR_8 = VAR_4->i_cat != VAR_2 ? 1 : 0;
            }
        }
        else if( !FUNC_7( VAR_7, "no-spu", FUNC_6( "no-spu" ) ) ||
                 !FUNC_7( VAR_7, "nospu", FUNC_6( "nospu" ) ) )
        {
            if( VAR_8 == -1 )
            {
                VAR_8 = VAR_4->i_cat != VAR_1 ? 1 : 0;
            }
        }
        else if( !FUNC_7( VAR_7, "audio", FUNC_6( "audio" ) ) )
        {
            if( VAR_8 == -1 )
            {
                VAR_8 = VAR_4->i_cat == VAR_0 ? 1 : 0;
            }
        }
        else if( !FUNC_7( VAR_7, "video", FUNC_6( "video" ) ) )
        {
            if( VAR_8 == -1 )
            {
                VAR_8 = VAR_4->i_cat == VAR_2 ? 1 : 0;
            }
        }
        else if( !FUNC_7( VAR_7, "spu", FUNC_6( "spu" ) ) )
        {
            if( VAR_8 == -1 )
            {
                VAR_8 = VAR_4->i_cat == VAR_1 ? 1 : 0;
            }
        }
        else if( FUNC_3( VAR_7, '=' ) != ((void*)0) )
        {
            char *VAR_12 = FUNC_3( VAR_7, '=' );
            *VAR_12++ = '\0';

            if( !FUNC_4( VAR_7, "no-es" ) || !FUNC_4( VAR_7, "noes" ) )
            {
                if( VAR_9 == -1 )
                {
                    VAR_9 = FUNC_0( VAR_12, VAR_4->i_id ) ? 0 : -1;
                }
            }
            else if( !FUNC_4( VAR_7, "es" ) )
            {
                if( VAR_9 == -1 )
                {
                    VAR_9 = FUNC_0( VAR_12, VAR_4->i_id) ? 1 : -1;
                }
            }
            else if( !FUNC_4( VAR_7, "no-prgm" ) || !FUNC_4( VAR_7, "noprgm" ) ||
                      !FUNC_4( VAR_7, "no-program" ) || !FUNC_4( VAR_7, "noprogram" ) )
            {
                if( VAR_4->i_group >= 0 && VAR_10 == -1 )
                {
                    VAR_10 = FUNC_0( VAR_12, VAR_4->i_group ) ? 0 : -1;
                }
            }
            else if( !FUNC_4( VAR_7, "prgm" ) || !FUNC_4( VAR_7, "program" ) )
            {
                if( VAR_4->i_group >= 0 && VAR_10 == -1 )
                {
                    VAR_10 = FUNC_0( VAR_12, VAR_4->i_group ) ? 1 : -1;
                }
            }
        }
        else
        {
            FUNC_1( VAR_3, "unknown args (%s)\n", VAR_7 );
        }

        VAR_7 = VAR_11;
    }

    FUNC_2( VAR_6 );

    if( VAR_8 == 1 || VAR_9 == 1 || VAR_10 == 1 )
    {
        return 1;
    }
    return 0;
}
