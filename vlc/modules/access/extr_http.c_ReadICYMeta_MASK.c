
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {scalar_t__ p_input_item; TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_7__ {char* psz_icy_title; } ;
typedef TYPE_2__ access_sys_t ;


 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int*,int*,int const) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__,int ,char*) ;
 char* FUNC_4 (int const) ;
 int FUNC_5 (TYPE_1__*,char*,char*) ;
 char* FUNC_6 (char*,char*) ;
 char* FUNC_7 (char*,char) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (char*,char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_12( stream_t *VAR_3 )
{
    access_sys_t *VAR_4 = VAR_3->p_sys;

    uint8_t VAR_5;
    char *VAR_6, *VAR_7;
    int VAR_8;


    if( FUNC_1( VAR_3, &VAR_8, &VAR_5, 1 ) )
        return VAR_0;
    if( VAR_8 != 1 )
        return VAR_0;
    const int VAR_9 = VAR_5 << 4;


    VAR_7 = FUNC_4( VAR_9 + 1 );
    for( VAR_8 = 0; VAR_8 < VAR_9; )
    {
        int VAR_10;
        if( FUNC_1( VAR_3, &VAR_10, (uint8_t *)&VAR_7[VAR_8], VAR_9 - VAR_8 ) || VAR_10 <= 0 )
        {
            FUNC_2( VAR_7 );
            return VAR_0;
        }
        VAR_8 += VAR_10;
    }
    VAR_7[VAR_8] = '\0';





    VAR_6 = FUNC_6( (char *)VAR_7, "StreamTitle=" );
    if( VAR_6 )
    {
        VAR_6 += FUNC_10( "StreamTitle=" );
        if( *VAR_6 == '\'' || *VAR_6 == '"' )
        {
            char VAR_11[] = { VAR_6[0], ';', '\0' };
            char *VAR_12 = FUNC_11( &VAR_6[1], VAR_11 );
            if( !VAR_12 )
                VAR_12 = FUNC_7( &VAR_6[1], ';' );

            if( VAR_12 ) *VAR_12 = '\0';
            VAR_6++;
        }
        else
        {
            char *VAR_13 = FUNC_7( VAR_6, ';' );
            if( VAR_13 ) *VAR_13 = '\0';
        }

        if( !VAR_4->psz_icy_title ||
            FUNC_8( VAR_4->psz_icy_title, VAR_6 ) )
        {
            FUNC_2( VAR_4->psz_icy_title );
            char *VAR_14 = FUNC_9( VAR_6 );
            VAR_4->psz_icy_title = FUNC_0( VAR_14 );
            if( !VAR_4->psz_icy_title )
                FUNC_2( VAR_14 );

            FUNC_5( VAR_3, "New Icy-Title=%s", VAR_4->psz_icy_title );
            if( VAR_3->p_input_item )
                FUNC_3( VAR_3->p_input_item, VAR_2,
                                    VAR_4->psz_icy_title );
        }
    }
    FUNC_2( VAR_7 );

    return VAR_1;
}
