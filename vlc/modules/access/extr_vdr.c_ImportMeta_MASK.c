
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_meta_t ;
typedef unsigned int time_t ;
struct tm {int dummy; } ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
typedef int str ;
struct TYPE_6__ {float fps; int * p_meta; } ;
typedef TYPE_2__ access_sys_t ;
typedef int FILE ;


 int * FUNC_0 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_1 (char**,size_t*,int *) ;
 float FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (unsigned char) ;
 int FUNC_6 (unsigned int*,struct tm*) ;
 char* FUNC_7 (int) ;
 int FUNC_8 (char*,int,char*,unsigned int,unsigned int) ;
 int FUNC_9 (char*,char*,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_10 (char*,char*) ;
 char* FUNC_11 (char*,char) ;
 char* FUNC_12 (char*) ;
 int FUNC_13 (char*,int,char*,struct tm*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int *,char*,char*) ;
 int * FUNC_16 () ;
 int FUNC_17 (int *,char*) ;
 int FUNC_18 (int *,char*) ;

__attribute__((used)) static void FUNC_19( stream_t *VAR_0 )
{
    access_sys_t *VAR_1 = VAR_0->p_sys;

    FILE *VAR_2 = FUNC_0( VAR_0, "info" );
    if( !VAR_2 )
        return;

    vlc_meta_t *VAR_3 = FUNC_16();
    VAR_1->p_meta = VAR_3;
    if( !VAR_3 )
    {
        FUNC_3( VAR_2 );
        return;
    }

    char *VAR_4 = ((void*)0);
    size_t VAR_5;
    char *VAR_6 = ((void*)0), *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);

    while( FUNC_1( &VAR_4, &VAR_5, VAR_2 ) )
    {
        if( !FUNC_5( (unsigned char)VAR_4[0] ) || VAR_4[1] != ' ' )
            continue;

        char VAR_9 = VAR_4[0];
        char *VAR_10 = VAR_4 + 2;

        if( VAR_9 == 'C' )
        {
            char *VAR_11 = FUNC_11( VAR_10, ' ' );
            if( VAR_11 )
            {
                *VAR_11 = '\0';
                FUNC_15( VAR_3, "Channel", VAR_11 + 1 );
            }
            FUNC_15( VAR_3, "Transponder", VAR_10 );
        }

        else if( VAR_9 == 'E' )
        {
            unsigned VAR_12, VAR_13, VAR_14;
            if( FUNC_9( VAR_10, "%u %u %u", &VAR_12, &VAR_13, &VAR_14 ) == 3 )
            {
                char VAR_15[50];
                struct tm VAR_16;
                time_t VAR_17 = VAR_13;
                FUNC_6( &VAR_17, &VAR_16 );


                FUNC_13( VAR_15, sizeof(VAR_15), "%Y-%m-%d %H:%M", &VAR_16 );
                FUNC_15( VAR_3, "Date", VAR_15 );
                FUNC_4( VAR_8 );
                VAR_8 = FUNC_12( VAR_15 );


                VAR_14 = ( VAR_14 + 59 ) / 60;
                FUNC_8( VAR_15, sizeof(VAR_15), "%u:%02u", VAR_14 / 60, VAR_14 % 60 );
                FUNC_15( VAR_3, "Duration", VAR_15 );
            }
        }

        else if( VAR_9 == 'T' )
        {
            FUNC_4( VAR_6 );
            VAR_6 = FUNC_12( VAR_10 );
            FUNC_15( VAR_3, "Title", VAR_10 );
        }

        else if( VAR_9 == 'S' )
        {
            FUNC_4( VAR_7 );
            VAR_7 = FUNC_12( VAR_10 );
            FUNC_15( VAR_3, "Info", VAR_10 );
        }

        else if( VAR_9 == 'D' )
        {
            for( char *VAR_18 = VAR_10; *VAR_18; ++VAR_18 )
            {
                if( *VAR_18 == '|' )
                    *VAR_18 = '\n';
            }
            FUNC_17( VAR_3, VAR_10 );
        }


        else if( VAR_9 == 'F' )
        {
            float VAR_19 = FUNC_2( VAR_10 );
            if( VAR_19 >= 1 )
                VAR_1->fps = VAR_19;
            FUNC_15( VAR_3, "Frame Rate", VAR_10 );
        }

        else if( VAR_9 == 'P' )
        {
            FUNC_15( VAR_3, "Priority", VAR_10 );
        }

        else if( VAR_9 == 'L' )
        {
            FUNC_15( VAR_3, "Lifetime", VAR_10 );
        }
    }


    int VAR_20 = 10 +
        ( VAR_6 ? FUNC_14( VAR_6 ) : 0 ) +
        ( VAR_7 ? FUNC_14( VAR_7 ) : 0 ) +
        ( VAR_8 ? FUNC_14( VAR_8 ) : 0 );
    char *VAR_21 = FUNC_7( VAR_20 );

    if( VAR_21 )
    {
        *VAR_21 = '\0';
        if( VAR_6 )
            FUNC_10( VAR_21, VAR_6 );
        if( VAR_6 && VAR_7 )
            FUNC_10( VAR_21, " - " );
        if( VAR_7 )
            FUNC_10( VAR_21, VAR_7 );
        if( ( VAR_6 || VAR_7 ) && VAR_8 )
        {
            FUNC_10( VAR_21, " (" );
            FUNC_10( VAR_21, VAR_8 );
            FUNC_10( VAR_21, ")" );
        }
        if( *VAR_21 )
            FUNC_18( VAR_3, VAR_21 );
    }

    FUNC_4( VAR_21 );
    FUNC_4( VAR_6 );
    FUNC_4( VAR_7 );
    FUNC_4( VAR_8 );

    FUNC_3( VAR_2 );
}
