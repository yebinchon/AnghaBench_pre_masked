
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_10__ {int i_data_peeked; char* p_peek; char* psz_separator; } ;
typedef TYPE_2__ demux_sys_t ;


 char* FUNC_0 (TYPE_1__*,int*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,char*,char*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,char*,char*,...) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;

__attribute__((used)) static bool FUNC_9( demux_t *VAR_0, int *VAR_1 )
{
    bool VAR_2 = 0;
    int VAR_3 = 0;
    char *VAR_4;
    char *VAR_5;
    demux_sys_t *VAR_6 = VAR_0->p_sys;

    *VAR_1 = -1;
    if( !FUNC_1( VAR_0, 1 ) )
    {
        FUNC_4( VAR_0, "cannot peek" );
        return 0;
    }
    if( VAR_6->i_data_peeked < 5)
    {
        FUNC_4( VAR_0, "data shortage" );
        return 0;
    }
    if( FUNC_8( (char *)VAR_6->p_peek, "--", 2 ) != 0
        && FUNC_8( (char *)VAR_6->p_peek, "\r\n--", 4 ) != 0 )
    {
        *VAR_1 = 0;
        return 0;
    }
    else
    {
        VAR_3 = *VAR_6->p_peek == '-' ? 2 : 4;
        VAR_4 = FUNC_0( VAR_0, &VAR_3 );
        if( ((void*)0) == VAR_4 )
        {
            FUNC_4( VAR_0, "no EOL" );
            return 0;
        }


        if( VAR_6->psz_separator == ((void*)0) )
        {
            VAR_6->psz_separator = VAR_4;
            FUNC_3( VAR_0, "Multipart MIME detected, using separator: %s",
                     VAR_6->psz_separator );
        }
        else
        {
            if( FUNC_6( VAR_4, VAR_6->psz_separator ) )
            {
                FUNC_5( VAR_0, "separator %s does not match %s", VAR_4,
                          VAR_6->psz_separator );
            }
            FUNC_2( VAR_4 );
        }
    }

    VAR_4 = FUNC_0( VAR_0, &VAR_3 );
    while( VAR_4 && *VAR_4 )
    {
        if( !FUNC_7( VAR_4, "Content-Type:", 13 ) )
        {
            VAR_5 = VAR_4 + 13;
            while( *VAR_5 != '\0' && ( *VAR_5 == ' ' || *VAR_5 == '\t' ) ) VAR_5++;
            if( FUNC_7( VAR_5, "image/jpeg", 10 ) )
            {
                FUNC_5( VAR_0, "%s, image/jpeg is expected", VAR_4 );
                VAR_2 = 0;
            }
            else
            {
                VAR_2 = 1;
            }
        }
        else
        {
            FUNC_3( VAR_0, "discard MIME header: %s", VAR_4 );
        }
        FUNC_2( VAR_4 );
        VAR_4 = FUNC_0( VAR_0, &VAR_3 );
    }

    if( ((void*)0) == VAR_4 )
    {
        FUNC_4( VAR_0, "no EOL" );
        return 0;
    }

    FUNC_2( VAR_4 );

    *VAR_1 = VAR_3;
    return VAR_2;
}
