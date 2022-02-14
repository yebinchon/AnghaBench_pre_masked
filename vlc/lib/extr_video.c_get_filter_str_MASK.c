
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int module_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,char*,char*,char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;
 int * FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,...) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char const*) ;
 char* FUNC_8 (char*,char const*) ;
 char* FUNC_9 (int *,char const*) ;

__attribute__((used)) static int FUNC_10( vlc_object_t *VAR_2, const char *VAR_3,
                           bool VAR_4, const char **VAR_5,
                           char **VAR_6)
{
    char *VAR_7;
    char *VAR_8;
    const char *VAR_9;

    module_t *VAR_10 = FUNC_3( VAR_3 );
    if( !VAR_10 )
    {
        FUNC_5( VAR_2, "Unable to find filter module \"%s\".", VAR_3 );
        return VAR_0;
    }

    if( FUNC_4( VAR_10, "video filter" ) )
    {
        VAR_9 = "video-filter";
    }
    else if( FUNC_4( VAR_10, "sub source" ) )
    {
        VAR_9 = "sub-source";
    }
    else if( FUNC_4( VAR_10, "sub filter" ) )
    {
        VAR_9 = "sub-filter";
    }
    else
    {
        FUNC_5( VAR_2, "Unknown video filter type." );
        return VAR_0;
    }

    VAR_8 = FUNC_9( VAR_2, VAR_9 );


    if( !VAR_8 ) VAR_8 = FUNC_6("");

    VAR_7 = FUNC_8( VAR_8, VAR_3 );
    if( VAR_4 )
    {
        if( !VAR_7 )
        {
            VAR_7 = VAR_8;
            if( FUNC_0( &VAR_8, (*VAR_8) ? "%s:%s" : "%s%s",
                          VAR_8, VAR_3 ) == -1 )
            {
                FUNC_1( VAR_7 );
                return VAR_0;
            }
            FUNC_1( VAR_7 );
        }
        else
        {
            FUNC_1( VAR_8 );
            return VAR_0;
        }
    }
    else
    {
        if( VAR_7 )
        {
            FUNC_2( VAR_7, VAR_7 + FUNC_7(VAR_3) +
                            (*(VAR_7 + FUNC_7(VAR_3)) == ':' ? 1 : 0 ),
                            FUNC_7(VAR_7 + FUNC_7(VAR_3)) + 1 );


            if( *(VAR_8+FUNC_7(VAR_8 ) -1 ) == ':' )
                *(VAR_8+FUNC_7(VAR_8 ) -1 ) = '\0';
        }
        else
        {
            FUNC_1( VAR_8 );
            return VAR_0;
        }
    }

    *VAR_5 = VAR_9;
    *VAR_6 = VAR_8;
    return VAR_1;
}
