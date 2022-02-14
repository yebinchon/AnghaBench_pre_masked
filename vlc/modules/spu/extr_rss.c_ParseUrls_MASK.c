
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int psz_url; int * p_pic; int * psz_image; int * psz_description; int * psz_link; int * psz_title; int * p_items; scalar_t__ i_items; } ;
typedef TYPE_1__ rss_feed_t ;
struct TYPE_7__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ filter_t ;
struct TYPE_8__ {int i_feeds; TYPE_1__* p_feeds; } ;
typedef TYPE_3__ filter_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*,char) ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3( filter_t *VAR_2, char *VAR_3 )
{
    filter_sys_t *VAR_4 = VAR_2->p_sys;
    char *VAR_5 = VAR_3;

    VAR_4->i_feeds = 1;


    while( *VAR_3 )
    {
        if( *VAR_3 == '|' )
            VAR_4->i_feeds++;
        VAR_3++;
    }


    VAR_4->p_feeds = FUNC_2( VAR_4->i_feeds, sizeof( rss_feed_t ) );
    if( !VAR_4->p_feeds )
        return VAR_0;


    VAR_3 = VAR_5;
    for( int VAR_6 = 0; VAR_6 < VAR_4->i_feeds; VAR_6++ )
    {
        rss_feed_t* VAR_7 = VAR_4->p_feeds + VAR_6;
        char *VAR_8;

        if( VAR_6 < VAR_4->i_feeds - 1 )
        {
            VAR_8 = FUNC_0( VAR_3, '|' );
            *VAR_8 = '\0';
        }
        else
            VAR_8 = VAR_3;

        VAR_7->i_items = 0;
        VAR_7->p_items = ((void*)0);
        VAR_7->psz_title = ((void*)0);
        VAR_7->psz_link = ((void*)0);
        VAR_7->psz_description = ((void*)0);
        VAR_7->psz_image = ((void*)0);
        VAR_7->p_pic = ((void*)0);
        VAR_7->psz_url = FUNC_1( VAR_3 );

        VAR_3 = VAR_8 + 1;
    }

    return VAR_1;
}
