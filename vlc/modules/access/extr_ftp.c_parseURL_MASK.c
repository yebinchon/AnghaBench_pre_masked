
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* psz_host; scalar_t__ i_port; char* psz_path; } ;
typedef TYPE_1__ vlc_url_t ;
typedef enum tls_mode_e { ____Placeholder_tls_mode_e } tls_mode_e ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (char*,char) ;
 char* FUNC_2 (char*,char*) ;
 int FUNC_3 (TYPE_1__*,char const*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5( vlc_url_t *VAR_5, const char *VAR_6, enum tls_mode_e VAR_7 )
{
    if( VAR_6 == ((void*)0) )
        return VAR_3;


    while( *VAR_6 == '/' )
        VAR_6++;

    FUNC_3( VAR_5, VAR_6 );

    if( VAR_5->psz_host == ((void*)0) || *VAR_5->psz_host == '\0' )
        return VAR_3;

    if( VAR_5->i_port <= 0 )
    {
        if( VAR_7 == VAR_0 )
            VAR_5->i_port = VAR_2;
        else
            VAR_5->i_port = VAR_1;
    }

    if( VAR_5->psz_path == ((void*)0) )
        return VAR_4;



    if( VAR_5->psz_path )
    {
        FUNC_0( VAR_5->psz_path[0] == '/' );
        VAR_5->psz_path++;
    }

    char *VAR_8 = FUNC_2( VAR_5->psz_path, ";type=" );
    if( VAR_8 )
    {
        *VAR_8 = '\0';
        if( FUNC_1( "iI", VAR_8[6] ) == ((void*)0) )
            return VAR_3;
    }
    FUNC_4( VAR_5->psz_path );
    return VAR_4;
}
