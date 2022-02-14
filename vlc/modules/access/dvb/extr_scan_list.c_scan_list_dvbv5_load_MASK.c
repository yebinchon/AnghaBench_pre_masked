
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int ssize_t ;
struct TYPE_8__ {int psz_channel; } ;
typedef TYPE_1__ scan_list_entry_t ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char**,size_t*,int *) ;
 int FUNC_3 (int *,char*,char const*) ;
 int FUNC_4 (TYPE_1__*,char const*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 () ;
 scalar_t__ FUNC_7 (TYPE_1__***,TYPE_1__*) ;
 int FUNC_8 (char const**,size_t*) ;
 int FUNC_9 (char const*,size_t) ;
 char* FUNC_10 (char const*,char*) ;
 int * FUNC_11 (char const*,char*) ;

scan_list_entry_t * FUNC_12( vlc_object_t *VAR_0, const char *VAR_1, size_t *VAR_2 )
{
    FILE *VAR_3 = FUNC_11( VAR_1, "r" );
    if( !VAR_3 )
    {
        FUNC_3( VAR_0, "failed to open dvbv5 file (%s)", VAR_1 );
        return ((void*)0);
    }

    scan_list_entry_t *VAR_4 = ((void*)0);
    scan_list_entry_t **VAR_5 = &VAR_4;
    scan_list_entry_t *VAR_6 = ((void*)0);
    *VAR_2 = 0;

    char *VAR_7 = ((void*)0);
    size_t VAR_8 = 0;
    ssize_t VAR_9;
    bool VAR_10 = 0;

    while ( (VAR_9 = FUNC_2( &VAR_7, &VAR_8, VAR_3 )) != -1 && !VAR_10 )
    {
        const char *VAR_11 = VAR_7;

        for ( ; *VAR_11 == ' ' || *VAR_11 == '\t'; VAR_11++ )
            VAR_9--;

        switch( *VAR_11 )
        {
            case 0:
            case '\n':
            case '#':
                continue;
            case '[':
            {
                if( VAR_6 && FUNC_7( &VAR_5, VAR_6 ) )
                    (*VAR_2)++;
                VAR_6 = FUNC_6();
                if( !VAR_6 )
                {
                    VAR_10 = 1;
                }
                else
                {
                    char *VAR_12 = FUNC_10( VAR_11, "]" );
                    if( !VAR_12 )
                        VAR_10 = 1;
                    else
                    {
                        const char *VAR_13 = VAR_11 + 1;
                        size_t VAR_14 = VAR_12 - VAR_11 - 1;
                        FUNC_8( &VAR_13, &VAR_14 );
                        VAR_6->psz_channel = FUNC_9( VAR_13, VAR_14 );
                    }
                }
                break;
            }

            default:
            {
                if( VAR_6 )
                    FUNC_4( VAR_6, VAR_11, VAR_9 );
                break;
            }
        }

    }

    if( VAR_6 )
    {
        if( VAR_10 )
            FUNC_5( VAR_6 );
        else if( FUNC_7( &VAR_5, VAR_6 ) )
            (*VAR_2)++;
    }

    FUNC_1( VAR_7 );
    FUNC_0( VAR_3 );

    return VAR_4;
}
