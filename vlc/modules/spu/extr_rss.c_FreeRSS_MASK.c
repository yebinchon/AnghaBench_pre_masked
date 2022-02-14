
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int i_items; struct TYPE_5__* psz_url; int * p_pic; struct TYPE_5__* psz_image; struct TYPE_5__* psz_description; struct TYPE_5__* psz_link; struct TYPE_5__* psz_title; struct TYPE_5__* p_items; } ;
typedef TYPE_1__ rss_item_t ;
typedef TYPE_1__ rss_feed_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2( rss_feed_t *VAR_0, int VAR_1 )
{
    for( int VAR_2 = 0; VAR_2 < VAR_1; VAR_2++ )
    {
        rss_feed_t *VAR_3 = VAR_0+VAR_2;
        for( int VAR_4 = 0; VAR_4 < VAR_3->i_items; VAR_4++ )
        {
            rss_item_t *VAR_5 = VAR_3->p_items+VAR_4;
            FUNC_0( VAR_5->psz_title );
            FUNC_0( VAR_5->psz_link );
            FUNC_0( VAR_5->psz_description );
        }
        FUNC_0( VAR_3->p_items );
        FUNC_0( VAR_3->psz_title);
        FUNC_0( VAR_3->psz_link );
        FUNC_0( VAR_3->psz_description );
        FUNC_0( VAR_3->psz_image );
        if( VAR_3->p_pic != ((void*)0) )
            FUNC_1( VAR_3->p_pic );
        FUNC_0( VAR_3->psz_url );
    }
    FUNC_0( VAR_0 );
}
