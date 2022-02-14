
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int rss_feed_t ;
struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_7__ {int b_fetched; int i_cur_item; scalar_t__ i_title; int i_feeds; int lock; scalar_t__ i_cur_char; scalar_t__ i_cur_feed; int * p_feeds; } ;
typedef TYPE_2__ filter_sys_t ;


 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6( void *VAR_1 )
{
    filter_t *VAR_2 = VAR_1;
    filter_sys_t *VAR_3 = VAR_2->p_sys;

    FUNC_2( VAR_2, "Updating the rss feeds" );
    rss_feed_t *VAR_4 = FUNC_0( VAR_2 );
    if( !VAR_4 )
    {
        FUNC_3( VAR_2, "Unable to fetch the feeds" );
        return;
    }

    rss_feed_t *VAR_5 = VAR_3->p_feeds;

    FUNC_4( &VAR_3->lock );

    VAR_3->p_feeds = VAR_4;
    VAR_3->b_fetched = 1;

    VAR_3->i_cur_feed = 0;
    VAR_3->i_cur_item = VAR_3->i_title == VAR_0 ? -1 : 0;
    VAR_3->i_cur_char = 0;
    FUNC_5( &VAR_3->lock );

    if( VAR_5 )
        FUNC_1( VAR_5, VAR_3->i_feeds );
}
