
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int xml_reader_t ;
typedef int stream_t ;
struct TYPE_15__ {int psz_url; int * psz_image; int * p_pic; int * p_items; scalar_t__ i_items; int * psz_link; int * psz_description; int * psz_title; } ;
typedef TYPE_1__ rss_feed_t ;
struct TYPE_16__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ filter_t ;
struct TYPE_17__ {int i_feeds; int b_images; TYPE_1__* p_feeds; } ;
typedef TYPE_3__ filter_sys_t ;


 int FUNC_0 (TYPE_1__*,int) ;
 int * FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*,int *,TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,char*,int ) ;
 int FUNC_4 (TYPE_2__*,char*,int ) ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int,int) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (TYPE_2__*,int ) ;
 int * FUNC_9 (TYPE_2__*,int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static rss_feed_t* FUNC_11( filter_t *VAR_0 )
{
    filter_sys_t *VAR_1 = VAR_0->p_sys;

    stream_t *VAR_2;
    xml_reader_t *VAR_3;
    int VAR_4;



    int VAR_5 = VAR_1->i_feeds;
    bool VAR_6 = VAR_1->b_images;


    rss_feed_t *VAR_7 = FUNC_6( VAR_5, sizeof( rss_feed_t ) );
    if( !VAR_7 )
        return ((void*)0);


    for( VAR_4 = 0; VAR_4 < VAR_5; VAR_4++ )
    {
        rss_feed_t *VAR_8 = VAR_7 + VAR_4;
        rss_feed_t *VAR_9 = VAR_1->p_feeds + VAR_4;


        VAR_8->psz_title = ((void*)0);
        VAR_8->psz_description = ((void*)0);
        VAR_8->psz_link = ((void*)0);
        VAR_8->psz_image = ((void*)0);
        VAR_8->p_pic = ((void*)0);
        VAR_8->i_items = 0;
        VAR_8->p_items = ((void*)0);

        VAR_8->psz_url = FUNC_5( VAR_9->psz_url );


        FUNC_3( VAR_0, "opening %s RSS/Atom feed ...", VAR_8->psz_url );

        VAR_2 = FUNC_8( VAR_0, VAR_8->psz_url );
        if( !VAR_2 )
        {
            FUNC_4( VAR_0, "Failed to open %s for reading", VAR_8->psz_url );
            VAR_3 = ((void*)0);
            goto error;
        }

        VAR_3 = FUNC_9( VAR_0, VAR_2 );
        if( !VAR_3 )
        {
            FUNC_4( VAR_0, "Failed to open %s for parsing", VAR_8->psz_url );
            goto error;
        }


        if( !FUNC_2( VAR_0, VAR_3, VAR_8 ) )
            goto error;


        if( VAR_6 && VAR_8->psz_image && !VAR_8->p_pic )
        {
            VAR_8->p_pic = FUNC_1( VAR_0, VAR_8->psz_image );
        }

        FUNC_3( VAR_0, "done with %s RSS/Atom feed", VAR_8->psz_url );
        FUNC_10( VAR_3 );
        FUNC_7( VAR_2 );
    }

    return VAR_7;

error:
    FUNC_0( VAR_7, VAR_4 + 1 );
    if( VAR_3 )
        FUNC_10( VAR_3 );
    if( VAR_2 )
        FUNC_7( VAR_2 );

    return ((void*)0);
}
