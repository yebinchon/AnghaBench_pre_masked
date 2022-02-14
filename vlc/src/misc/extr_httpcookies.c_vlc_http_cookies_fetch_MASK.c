
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int lock; int cookies; } ;
typedef TYPE_1__ vlc_http_cookie_jar_t ;
struct TYPE_7__ {char* psz_name; char* psz_value; } ;
typedef TYPE_2__ http_cookie_t ;


 int FUNC_0 (char**,char*,char*,char*,char*,char*) ;
 scalar_t__ FUNC_1 (TYPE_2__ const*,int,char const*,char const*) ;
 int FUNC_2 (char*) ;
 size_t FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (int *,size_t) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

char *FUNC_7(vlc_http_cookie_jar_t *VAR_0, bool VAR_1,
                             const char *VAR_2, const char *VAR_3)
{
    char *VAR_4 = ((void*)0);

    FUNC_5( &VAR_0->lock );

    for( size_t VAR_5 = 0; VAR_5 < FUNC_3( &VAR_0->cookies ); VAR_5++ )
    {
        const http_cookie_t * VAR_6 = FUNC_4( &VAR_0->cookies, VAR_5 );
        if (FUNC_1(VAR_6, VAR_1, VAR_2, VAR_3))
        {
            char *VAR_7 = ((void*)0);
            if ( FUNC_0(&VAR_7, "%s%s%s=%s",
                          VAR_4 ? VAR_4 : "",
                          VAR_4 ? "; " : "",
                          VAR_6->psz_name ? VAR_6->psz_name : "",
                          VAR_6->psz_value ? VAR_6->psz_value : "") == -1 )
            {

                FUNC_2( VAR_4 );
                FUNC_6( &VAR_0->lock );
                return ((void*)0);
            }
            FUNC_2( VAR_4 );
            VAR_4 = VAR_7;
        }
    }

    FUNC_6( &VAR_0->lock );

    return VAR_4;
}
