
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xml_reader_t ;
struct TYPE_6__ {char* psz_title; char* psz_link; char* psz_description; } ;
typedef TYPE_1__ rss_item_t ;
struct TYPE_7__ {int i_items; char* psz_link; char* psz_image; char* psz_title; char* psz_description; TYPE_3__* p_items; } ;
typedef TYPE_2__ rss_feed_t ;
typedef int filter_t ;
struct TYPE_8__ {int * psz_link; int * psz_description; int * psz_title; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;



 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char*,char const*) ;
 char* FUNC_4 (char const*) ;
 int FUNC_5 (char const*,char*) ;
 char* FUNC_6 (char const*) ;
 int FUNC_7 (int) ;
 char* FUNC_8 (int *,char const**) ;
 int FUNC_9 (int *,char const**) ;
 TYPE_3__* FUNC_10 (TYPE_3__*,int) ;

__attribute__((used)) static bool FUNC_11( filter_t *VAR_0, xml_reader_t *VAR_1,
                      rss_feed_t *VAR_2 )
{
    FUNC_1(VAR_0);
    const char *VAR_3;
    char *VAR_4 = ((void*)0);

    bool VAR_5 = 0;
    bool VAR_6 = 0;

    int VAR_7 = 0;
    int VAR_8;

    while( (VAR_8 = FUNC_9( VAR_1, &VAR_3 )) > 0 )
    {
        switch( VAR_8 )
        {
        case 129:



            FUNC_2(VAR_4);
            VAR_4 = FUNC_6( VAR_3 );
            if( FUNC_7(!VAR_4) )
                goto end;


            if( !FUNC_5( VAR_3, "item" ) || !FUNC_5( VAR_3, "entry" ) )
            {
                VAR_5 = 1;
                VAR_2->i_items++;
                VAR_2->p_items = FUNC_10( VAR_2->p_items,
                                     VAR_2->i_items * sizeof( rss_item_t ) );
                VAR_2->p_items[VAR_2->i_items-1].psz_title = ((void*)0);
                VAR_2->p_items[VAR_2->i_items-1].psz_description = ((void*)0);
                VAR_2->p_items[VAR_2->i_items-1].psz_link = ((void*)0);
            }

            else if( !FUNC_5( VAR_3, "image" ) )
            {
                VAR_6 = 1;
            }

            else if( !FUNC_5( VAR_3, "link" ) )
            {
                const char *VAR_9, *VAR_10;
                char *VAR_11 = ((void*)0);
                char *VAR_12 = ((void*)0);

                while( (VAR_9 = FUNC_8( VAR_1, &VAR_10 )) != ((void*)0) )
                {
                    if( !FUNC_5( VAR_9, "rel" ) )
                    {
                        FUNC_2( VAR_12 );
                        VAR_12 = FUNC_6( VAR_10 );
                    }
                    else if( !FUNC_5( VAR_9, "href" ) )
                    {
                        FUNC_2( VAR_11 );
                        VAR_11 = FUNC_6( VAR_10 );
                    }
                }


                if( VAR_12 && VAR_11 )
                {
                    if( !FUNC_5( VAR_12, "alternate" ) && !VAR_5 &&
                        !VAR_6 && !VAR_2->psz_link )
                    {
                        VAR_2->psz_link = VAR_11;
                    }

                    else if( ( !FUNC_5( VAR_12, "logo" ) ||
                               !FUNC_5( VAR_12, "icon" ) )
                             && !VAR_5 && !VAR_6
                             && !VAR_2->psz_image )
                    {
                        VAR_2->psz_image = VAR_11;
                    }
                    else
                    {
                        FUNC_2( VAR_11 );
                    }
                }
                else
                {
                    FUNC_2( VAR_11 );
                }
                FUNC_2( VAR_12 );
            }
            break;

        case 130:
            FUNC_0( VAR_4 );




            if( !FUNC_5( VAR_3, "item" ) || !FUNC_5( VAR_3, "entry" ) )
            {
                VAR_5 = 0;
                VAR_7++;
            }

            else if( !FUNC_5( VAR_3, "image" ) )
            {
                VAR_6 = 0;
            }
            break;

        case 128:
        {
            if( !VAR_4 )
                break;

            char *VAR_13 = FUNC_4( VAR_3 );





            if( VAR_5 )
            {
                rss_item_t *VAR_14 = VAR_2->p_items+VAR_7;

                if( !FUNC_5( VAR_4, "title" ) && !VAR_14->psz_title )
                {
                    VAR_14->psz_title = VAR_13;
                }
                else if( !FUNC_5( VAR_4, "link" )
                         && !VAR_14->psz_link )
                {
                    VAR_14->psz_link = VAR_13;
                }

                else if( ( !FUNC_5( VAR_4, "description" ) ||
                           !FUNC_5( VAR_4, "summary" ) )
                          && !VAR_14->psz_description )
                {
                    VAR_14->psz_description = VAR_13;
                }
                else
                {
                    FUNC_2( VAR_13 );
                }
            }

            else if( VAR_6 )
            {
                if( !FUNC_5( VAR_4, "url" ) && !VAR_2->psz_image )
                    VAR_2->psz_image = VAR_13;
                else
                    FUNC_2( VAR_13 );
            }
            else
            {

                if( !FUNC_5( VAR_4, "title" ) && !VAR_2->psz_title )
                {
                    VAR_2->psz_title = VAR_13;
                }

                else if( !FUNC_5( VAR_4, "link" ) && !VAR_2->psz_link )
                {
                    VAR_2->psz_link = VAR_13;
                }

                else if( ( !FUNC_5( VAR_4, "description" ) ||
                           !FUNC_5( VAR_4, "subtitle" ) )
                         && !VAR_2->psz_description )
                {
                    VAR_2->psz_description = VAR_13;
                }

                else if( ( !FUNC_5( VAR_4, "logo" ) ||
                           !FUNC_5( VAR_4, "icon" ) )
                         && !VAR_2->psz_image )
                {
                    VAR_2->psz_image = VAR_13;
                }
                else
                {
                    FUNC_2( VAR_13 );
                }
            }
            break;
        }
        }
    }

    FUNC_2( VAR_4 );
    return 1;

end:
    return 0;
}
