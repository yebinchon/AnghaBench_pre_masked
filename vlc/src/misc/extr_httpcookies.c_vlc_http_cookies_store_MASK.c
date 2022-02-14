
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int lock; int cookies; } ;
typedef TYPE_1__ vlc_http_cookie_jar_t ;
struct TYPE_10__ {int psz_name; int psz_path; int psz_domain; } ;
typedef TYPE_2__ http_cookie_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,char const*) ;
 TYPE_2__* FUNC_3 (char const*,char const*,char const*) ;
 int * FUNC_4 (int ,char) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int *,TYPE_2__*) ;
 size_t FUNC_7 (int *) ;
 TYPE_2__* FUNC_8 (int *,size_t) ;
 int FUNC_9 (int *,size_t) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

bool FUNC_13(vlc_http_cookie_jar_t *VAR_0, const char *VAR_1,
                            const char *VAR_2, const char *VAR_3)
{
    FUNC_0(VAR_2 != ((void*)0));
    FUNC_0(VAR_3 != ((void*)0));

    http_cookie_t *VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3);
    if (VAR_4 == ((void*)0))
        return 0;







    if (FUNC_4(VAR_4->psz_domain, '.') == ((void*)0)
     || !FUNC_2(VAR_4, VAR_2))
    {
        FUNC_1(VAR_4);
        return 0;
    }

    FUNC_11( &VAR_0->lock );

    for( size_t VAR_5 = 0; VAR_5 < FUNC_7( &VAR_0->cookies ); VAR_5++ )
    {
        http_cookie_t *VAR_6 = FUNC_8( &VAR_0->cookies, VAR_5 );

        FUNC_0( VAR_6->psz_name );
        FUNC_0( VAR_6->psz_domain );
        FUNC_0( VAR_6->psz_path );

        bool VAR_7 =
            FUNC_10( VAR_4->psz_domain, VAR_6->psz_domain ) == 0;
        bool VAR_8 = FUNC_5( VAR_4->psz_path, VAR_6->psz_path ) == 0;
        bool VAR_9 = FUNC_5( VAR_4->psz_name, VAR_6->psz_name ) == 0;
        if( VAR_7 && VAR_8 && VAR_9 )
        {

            FUNC_9( &VAR_0->cookies, VAR_5 );
            FUNC_1(VAR_6);
            break;
        }
    }

    bool VAR_10 = (FUNC_6( &VAR_0->cookies, VAR_4 ) == 0);
    if( !VAR_10 )
        FUNC_1( VAR_4 );

    FUNC_12( &VAR_0->lock );

    return VAR_10;
}
