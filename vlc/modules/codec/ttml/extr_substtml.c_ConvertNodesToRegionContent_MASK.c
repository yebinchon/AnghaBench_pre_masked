
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ttml_style_t ;
struct TYPE_12__ {scalar_t__ p_segments; } ;
struct TYPE_11__ {int p_bytes; int i_bytes; } ;
struct TYPE_13__ {TYPE_2__ updt; TYPE_1__ bgbitmap; } ;
typedef TYPE_3__ ttml_region_t ;
typedef int ttml_context_t ;
typedef int tt_time_t ;
typedef int tt_textnode_t ;
struct TYPE_14__ {int psz_node_name; int attr_dict; int timings; TYPE_5__* p_child; } ;
typedef TYPE_4__ tt_node_t ;
struct TYPE_15__ {scalar_t__ i_type; struct TYPE_15__* p_next; } ;
typedef TYPE_5__ tt_basenode_t ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,int const*,int *,TYPE_3__*) ;
 int FUNC_2 (int *,int *,int *) ;
 char* FUNC_3 (int *,char const*) ;
 TYPE_3__* FUNC_4 (int *,char const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int const*) ;
 int * FUNC_10 () ;
 int FUNC_11 (int *,char const*) ;
 scalar_t__ FUNC_12 (int *,char*) ;
 char* FUNC_13 (int *,char*) ;

__attribute__((used)) static void FUNC_14( ttml_context_t *VAR_1, const tt_node_t *VAR_2,
                                         ttml_region_t *VAR_3,
                                         const ttml_style_t *VAR_4,
                                         tt_time_t VAR_5 )
{
    if( FUNC_6( &VAR_5 ) &&
       !FUNC_7( &VAR_2->timings, &VAR_5 ) )
        return;

    const char *VAR_6 = (const char *)
        FUNC_13( &VAR_2->attr_dict, "region" );


    if( VAR_6 || VAR_3 == ((void*)0) )
        VAR_3 = FUNC_4( VAR_1, VAR_6 );


    if( !FUNC_5( VAR_2->psz_node_name, "div" ) &&
         FUNC_12( &VAR_2->attr_dict, "smpte:backgroundImage" ) )
    {
        if( !VAR_3->bgbitmap.p_bytes )
        {
            const char *VAR_7 = FUNC_13( &VAR_2->attr_dict,
                                                               "smpte:backgroundImage" );

            if( VAR_7 && *VAR_7 == '#' )
            {
                const char *VAR_8 = FUNC_3( VAR_1, &VAR_7[1] );
                if( VAR_8 )
                    VAR_3->bgbitmap.i_bytes =
                        FUNC_11( &VAR_3->bgbitmap.p_bytes, VAR_8 );
            }
        }
    }


    if( !FUNC_5( VAR_2->psz_node_name, "p" ) &&
        VAR_3->updt.p_segments )
    {
        FUNC_0( VAR_3 );
    }


    ttml_style_t *VAR_9 = (VAR_4)
                               ? FUNC_9( VAR_4 )
                               : ((void*)0);

    for( const tt_basenode_t *VAR_10 = VAR_2->p_child;
                              VAR_10; VAR_10 = VAR_10->p_next )
    {
        if( VAR_10->i_type == VAR_0 )
        {
            FUNC_1( VAR_1, (const tt_textnode_t *) VAR_10,
                                VAR_9, VAR_3 );
        }
        else if( !FUNC_5( ((const tt_node_t *)VAR_10)->psz_node_name, "set" ) )
        {
            const tt_node_t *VAR_11 = (const tt_node_t *)VAR_10;
            if( !FUNC_6( &VAR_5 ) ||
                FUNC_7( &VAR_11->timings, &VAR_5 ) )
            {
                if( VAR_9 != ((void*)0) || (VAR_9 = FUNC_10()) )
                {

                    FUNC_2( VAR_1, &VAR_11->attr_dict, VAR_9 );
                }
            }
        }
        else if( !FUNC_5( ((const tt_node_t *)VAR_10)->psz_node_name, "br" ) )
        {
            FUNC_0( VAR_3 );
        }
        else
        {
            FUNC_14( VAR_1, (const tt_node_t *) VAR_10,
                                         VAR_3, VAR_9, VAR_5 );
        }
    }

    if( VAR_9 )
        FUNC_8( VAR_9 );
}
