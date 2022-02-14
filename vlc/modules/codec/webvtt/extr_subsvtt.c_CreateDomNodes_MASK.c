
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {void* psz_text; TYPE_3__* p_next; } ;
typedef TYPE_1__ webvtt_dom_text_t ;
struct TYPE_12__ {TYPE_3__* p_child; int i_start; int * psz_attrs; void* psz_tag; } ;
typedef TYPE_2__ webvtt_dom_tag_t ;
struct TYPE_13__ {struct TYPE_13__* p_next; struct TYPE_13__* p_parent; } ;
typedef TYPE_3__ webvtt_dom_node_t ;


 unsigned int FUNC_0 (void*) ;
 char* FUNC_1 (char const*,char const**) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (char const*,size_t*,char const**) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ) ;
 void* FUNC_6 (char const*) ;
 void* FUNC_7 (char const*,size_t) ;
 TYPE_2__* FUNC_8 (TYPE_3__*) ;
 TYPE_1__* FUNC_9 (TYPE_3__*) ;
 TYPE_3__* FUNC_10 (TYPE_3__*,char*) ;
 int FUNC_11 (int *,int *) ;

__attribute__((used)) static webvtt_dom_node_t * FUNC_12( const char *VAR_0, unsigned *VAR_1 )
{
    webvtt_dom_node_t *VAR_2 = ((void*)0);
    webvtt_dom_node_t **VAR_3 = &VAR_2;
    webvtt_dom_node_t *VAR_4 = VAR_2;
    *VAR_1 = 0;

    while( *VAR_0 )
    {
        const char *VAR_5;
        const char *VAR_6 = FUNC_1( VAR_0, &VAR_5 );
        if( VAR_6 )
        {
            if( VAR_6 - VAR_0 > 0 )
            {
                webvtt_dom_text_t *VAR_7 = FUNC_9( VAR_4 );
                if( VAR_7 )
                {
                    VAR_7->psz_text = FUNC_7( VAR_0, VAR_6 - VAR_0 );
                    *VAR_1 += ((*VAR_1 == 0) ? 1 : 0) + FUNC_0( VAR_7->psz_text );
                    *VAR_3 = (webvtt_dom_node_t *) VAR_7;
                    VAR_3 = &VAR_7->p_next;
                }
            }

            if( ! FUNC_2( VAR_6 ) )
            {
                webvtt_dom_tag_t *VAR_8 = FUNC_8( VAR_4 );
                if( VAR_8 )
                {
                    const char *VAR_9 = ((void*)0);
                    size_t VAR_10;
                    const char *VAR_11 = FUNC_3( VAR_6, &VAR_10, &VAR_9 );
                    VAR_8->psz_tag = FUNC_7( VAR_11, VAR_10 );
                    if( VAR_9 != VAR_5 )
                        VAR_8->psz_attrs = FUNC_7( VAR_9, VAR_5 - VAR_9 );

                    if( VAR_8->psz_attrs && FUNC_5(VAR_8->psz_attrs[0]) )
                        (void) FUNC_11( VAR_8->psz_attrs, &VAR_8->i_start );
                    *VAR_3 = (webvtt_dom_node_t *) VAR_8;
                    VAR_4 = (webvtt_dom_node_t *) VAR_8;
                    VAR_3 = &VAR_8->p_child;
                }
            }
            else
            {
                if( VAR_4 )
                {
                    const char *VAR_12 = ((void*)0);
                    size_t VAR_13;
                    const char *VAR_14 = FUNC_3( VAR_6, &VAR_13, &VAR_12 );
                    char *VAR_15 = FUNC_7( VAR_14, VAR_13 );



                    VAR_4 = FUNC_10( VAR_4, VAR_15 );
                    if( VAR_4 )
                    {
                        VAR_3 = &VAR_4->p_next;
                        VAR_4 = VAR_4->p_parent;
                    }
                    else
                        VAR_3 = &VAR_2->p_next;
                    while( *VAR_3 )
                        VAR_3 = &((*VAR_3)->p_next);

                    FUNC_4( VAR_15 );
                }
                else break;
            }
            VAR_0 = VAR_5 + 1;
        }
        else
        {
            webvtt_dom_text_t *VAR_16 = FUNC_9( VAR_4 );
            if( VAR_16 )
            {
                VAR_16->psz_text = FUNC_6( VAR_0 );
                *VAR_1 += ((*VAR_1 == 0) ? 1 : 0) + FUNC_0( VAR_16->psz_text );
                *VAR_3 = (webvtt_dom_node_t *) VAR_16;
            }
            break;
        }
    }

    return VAR_2;
}
