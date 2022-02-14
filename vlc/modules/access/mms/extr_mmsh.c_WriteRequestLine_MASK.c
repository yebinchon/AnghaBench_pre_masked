
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* psz_password; int * psz_username; } ;
typedef TYPE_2__ vlc_url_t ;
struct vlc_memstream {int dummy; } ;
struct TYPE_5__ {char* psz_path; char* psz_option; int i_port; int psz_host; } ;
struct TYPE_7__ {scalar_t__ b_proxy; TYPE_2__ proxy; TYPE_1__ url; } ;
typedef TYPE_3__ access_sys_t ;


 char* VAR_0 ;
 int FUNC_0 (char**,char*,int *,char const*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (struct vlc_memstream*) ;
 int FUNC_4 (struct vlc_memstream*,char*,char*,...) ;
 int FUNC_5 (struct vlc_memstream*,char) ;
 int FUNC_6 (struct vlc_memstream*,char*) ;

__attribute__((used)) static void FUNC_7( const access_sys_t *VAR_1,
                              struct vlc_memstream *restrict VAR_2 )
{
    FUNC_3( VAR_2 );

    FUNC_6( VAR_2, "GET " );
    if( VAR_1->b_proxy )
        FUNC_4( VAR_2, "http://%s:%d", VAR_1->url.psz_host,
                              VAR_1->url.i_port );
    if( (VAR_1->url.psz_path == ((void*)0)) || (VAR_1->url.psz_path[0] == '\0') )
        FUNC_5( VAR_2, '/' );
    else
        FUNC_6( VAR_2, VAR_1->url.psz_path );
    if( VAR_1->url.psz_option != ((void*)0) )
        FUNC_4( VAR_2, "?%s", VAR_1->url.psz_option );
    FUNC_6( VAR_2, " HTTP/1.0\r\n" );

    FUNC_4( VAR_2, "Host: %s:%d\r\n", VAR_1->url.psz_host,
                          VAR_1->url.i_port );


    const vlc_url_t *VAR_3 = &VAR_1->proxy;

    if( VAR_1->b_proxy && VAR_3->psz_username != ((void*)0) )
    {
        const char *VAR_4 = VAR_3->psz_password ? VAR_3->psz_password : "";
        char *VAR_5;

        if( FUNC_0( &VAR_5, "%s:%s", VAR_3->psz_username, VAR_4 ) != -1 )
        {
            char *VAR_6 = FUNC_2( VAR_5 );
            FUNC_1( VAR_5 );
            if( VAR_6 != ((void*)0) )
            {
                FUNC_4( VAR_2, "Proxy-Authorization: "
                                      "Basic %s\r\n", VAR_6 );
                FUNC_1( VAR_6 );
            }
        }
    }

    FUNC_6( VAR_2, "Accept: */*\r\n" );
    FUNC_4( VAR_2, "User-Agent: %s\r\n", VAR_0 );
}
