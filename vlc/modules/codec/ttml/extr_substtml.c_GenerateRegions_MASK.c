
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ p_value; struct TYPE_17__* p_next; } ;
typedef TYPE_2__ vlc_dictionary_entry_t ;
struct TYPE_16__ {int p_next; } ;
struct TYPE_18__ {TYPE_1__ updt; } ;
typedef TYPE_3__ ttml_region_t ;
struct TYPE_21__ {int i_size; TYPE_2__** p_entries; } ;
struct TYPE_19__ {TYPE_6__ regions; TYPE_5__* p_rootnode; } ;
typedef TYPE_4__ ttml_context_t ;
typedef int tt_time_t ;
struct TYPE_20__ {int psz_node_name; } ;
typedef TYPE_5__ tt_node_t ;


 int FUNC_0 (TYPE_4__*,TYPE_5__ const*,int *,int *,int ) ;
 TYPE_5__* FUNC_1 (TYPE_5__*,char*,int,int *) ;
 int FUNC_2 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_6__*,int *,int *) ;
 int FUNC_5 (TYPE_6__*,int) ;

__attribute__((used)) static ttml_region_t *FUNC_6( tt_node_t *VAR_0, tt_time_t VAR_1 )
{
    ttml_region_t* VAR_2 = ((void*)0);
    ttml_region_t** VAR_3 = &VAR_2;

    if( !FUNC_3( VAR_0->psz_node_name, "tt" ) )
    {
        const tt_node_t *VAR_4 = FUNC_1( VAR_0, "body", 1, ((void*)0) );
        if( VAR_4 )
        {
            ttml_context_t VAR_5;
            FUNC_2( VAR_0, &VAR_5 );
            VAR_5.p_rootnode = VAR_0;

            FUNC_5( &VAR_5.regions, 1 );
            FUNC_0( &VAR_5, VAR_4, ((void*)0), ((void*)0), VAR_1 );

            for( int VAR_6 = 0; VAR_6 < VAR_5.regions.i_size; ++VAR_6 )
            {
                for ( const vlc_dictionary_entry_t* VAR_7 = VAR_5.regions.p_entries[VAR_6];
                                                    VAR_7 != ((void*)0); VAR_7 = VAR_7->p_next )
                {
                    *VAR_3 = (ttml_region_t *) VAR_7->p_value;
                    VAR_3 = (ttml_region_t **) &(*VAR_3)->updt.p_next;
                }
            }

            FUNC_4( &VAR_5.regions, ((void*)0), ((void*)0) );
        }
    }
    else if ( !FUNC_3( VAR_0->psz_node_name, "div" ) ||
              !FUNC_3( VAR_0->psz_node_name, "p" ) )
    {

    }

    return VAR_2;
}
