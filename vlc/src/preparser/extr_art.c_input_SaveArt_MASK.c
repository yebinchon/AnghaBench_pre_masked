
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
struct stat {int dummy; } ;
typedef int input_item_t ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,char const*) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char*,int *) ;
 int FUNC_6 (char*) ;
 size_t FUNC_7 (void const*,int,size_t,int *) ;
 char* FUNC_8 (int *,char*,char*) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,char*,char*) ;
 int FUNC_11 (int *,char*,char*,int ) ;
 int * FUNC_12 (char*,char*) ;
 char* FUNC_13 (char*,char*) ;
 int FUNC_14 (char*,struct stat*) ;
 int FUNC_15 (int ) ;

int FUNC_16( vlc_object_t *VAR_3, input_item_t *VAR_4,
                   const void *VAR_5, size_t VAR_6, const char *VAR_7 )
{
    char *VAR_8 = FUNC_1( VAR_4, VAR_7 );

    if( !VAR_8 )
        return VAR_0;

    char *VAR_9 = FUNC_13( VAR_8, "file" );
    if( !VAR_9 )
    {
        FUNC_6( VAR_8 );
        return VAR_0;
    }


    struct stat VAR_10;
    if( !FUNC_14( VAR_8, &VAR_10 ) )
    {
        FUNC_9( VAR_4, VAR_9 );
        FUNC_6( VAR_8 );
        FUNC_6( VAR_9 );
        return VAR_1;
    }


    FILE *VAR_11 = FUNC_12( VAR_8, "wb" );
    if( VAR_11 )
    {
        if( FUNC_7( VAR_5, 1, VAR_6, VAR_11 ) != VAR_6 )
        {
            FUNC_11( VAR_3, "%s: %s", VAR_8, FUNC_15(VAR_2) );
        }
        else
        {
            FUNC_10( VAR_3, "album art saved to %s", VAR_8 );
            FUNC_9( VAR_4, VAR_9 );
        }
        FUNC_4( VAR_11 );
    }
    FUNC_6( VAR_9 );


    char *VAR_12 = FUNC_8( VAR_4, "uid", "md5" );
    if ( ! *VAR_12 )
    {
        FUNC_6( VAR_12 );
        goto end;
    }

    char *VAR_13 = FUNC_2( VAR_12 );
    char *VAR_14 = FUNC_3( VAR_13, "arturl" );
    FUNC_0( VAR_13 );
    FUNC_6( VAR_13 );

    if ( VAR_14 )
    {
        VAR_11 = FUNC_12( VAR_14, "wb" );
        if ( VAR_11 )
        {
            if( FUNC_5( "file://", VAR_11 ) < 0 || FUNC_5( VAR_8, VAR_11 ) < 0 )
                FUNC_11( VAR_3, "Error writing %s: %s", VAR_14,
                         FUNC_15(VAR_2) );
            FUNC_4( VAR_11 );
        }
        FUNC_6( VAR_14 );
    }
    FUNC_6( VAR_12 );

end:
    FUNC_6( VAR_8 );
    return VAR_1;
}
