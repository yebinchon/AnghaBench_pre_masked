
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;


 char* FUNC_0 (char*,unsigned char*,unsigned int) ;
 int FUNC_1 (unsigned char*) ;
 scalar_t__ FUNC_2 (unsigned char,unsigned char*,char**,unsigned char*,unsigned char*) ;
 unsigned char* FUNC_3 (unsigned int) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static char *FUNC_6( vlc_object_t *VAR_0, char* VAR_1 )
{
    unsigned int VAR_2;
    unsigned char VAR_3;
    unsigned char VAR_4, VAR_5;
    unsigned int VAR_6;
    unsigned char VAR_7;

    unsigned char *VAR_8;
    char *VAR_9;

    char *VAR_10 = VAR_1;

    if( FUNC_5( VAR_10 ) < 15 )
    {
        FUNC_4( VAR_0, "input string less than 15 characters" );
        return ((void*)0);
    }

    if( FUNC_2( 1, &VAR_7, &VAR_10, ((void*)0), ((void*)0) ) )
    {
        FUNC_4( VAR_0, "unable to get NSC encoding type" );
        return ((void*)0);
    }

    if( VAR_7 != 1 && VAR_7 != 2 )
    {
        FUNC_4( VAR_0, "encoding type %d is not supported",
                 VAR_7 );
        return ((void*)0);
    }

    VAR_4 = VAR_5 = 0;

    if( FUNC_2( VAR_7, &VAR_3, &VAR_10, &VAR_4, &VAR_5 ) )
    {
        FUNC_4( VAR_0, "load_byte failed" );
        return ((void*)0);
    }

    for( VAR_2 = 0; VAR_2 < 4; VAR_2++ )
    {
        if( FUNC_2( VAR_7, &VAR_3, &VAR_10, &VAR_4, &VAR_5 ) )
        {
            FUNC_4( VAR_0, "load_byte failed" );
            return ((void*)0);
        }
    }

    VAR_6 = 0;
    for( VAR_2 = 4; VAR_2; VAR_2-- )
    {
        if( FUNC_2( VAR_7, &VAR_3, &VAR_10, &VAR_4, &VAR_5 ) )
        {
            FUNC_4( VAR_0, "load_byte failed" );
            return ((void*)0);
        }
        VAR_6 |= (unsigned int)VAR_3 << ((VAR_2 - 1) * 8);
    }

    if( VAR_6 == 0 )
    {
        FUNC_4( VAR_0, "Length is 0" );
        return ((void*)0);
    }

    VAR_8 = FUNC_3( VAR_6 );
    if( VAR_8 == ((void*)0) )
        return ((void*)0);

    for( VAR_2 = 0; VAR_2 < VAR_6; VAR_2++ )
    {
        if( FUNC_2( VAR_7, &VAR_8[ VAR_2 ], &VAR_10, &VAR_4, &VAR_5 ) )
        {
            FUNC_4( VAR_0, "load_byte failed" );
            FUNC_1( VAR_8 );
            return ((void*)0);
        }
    }

    VAR_9 = FUNC_0( "UTF-16LE", VAR_8, VAR_6 );
    FUNC_1( VAR_8 );
    if( VAR_9 == ((void*)0) )
    {
        FUNC_4( VAR_0, "iconv failed" );
        return ((void*)0);
    }
    return VAR_9;
}
