
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int i_size; TYPE_2__** p_entries; } ;
typedef TYPE_1__ vlc_dictionary_t ;
struct TYPE_11__ {int p_value; int psz_key; struct TYPE_11__* p_next; } ;
typedef TYPE_2__ vlc_dictionary_entry_t ;
typedef int ttml_region_t ;
struct TYPE_12__ {int regions; } ;
typedef TYPE_3__ ttml_context_t ;


 int FUNC_0 (TYPE_3__*,char const*,TYPE_1__*) ;
 int FUNC_1 (TYPE_3__*,int ,int ,int *) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,int *,int *) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (int *,char const*,int *) ;
 scalar_t__ FUNC_7 (int *,char const*) ;

__attribute__((used)) static ttml_region_t *FUNC_8( ttml_context_t *VAR_0, const char *VAR_1 )
{
    ttml_region_t *VAR_2 = ( ttml_region_t * )
            FUNC_7( &VAR_0->regions, VAR_1 ? VAR_1 : "" );
    if( VAR_2 == ((void*)0) )
    {
        if( VAR_1 && FUNC_2( VAR_1, "" ) )
        {


            vlc_dictionary_t VAR_3;
            FUNC_5( &VAR_3, 0 );

            FUNC_0( VAR_0, VAR_1, &VAR_3 );
            if( (VAR_2 = FUNC_3( 0 )) )
            {

                for( int VAR_4 = 0; VAR_4 < VAR_3.i_size; ++VAR_4 )
                {
                    for ( vlc_dictionary_entry_t* VAR_5 = VAR_3.p_entries[VAR_4];
                          VAR_5 != ((void*)0); VAR_5 = VAR_5->p_next )
                    {
                        FUNC_1( VAR_0, VAR_5->psz_key, VAR_5->p_value,
                                         VAR_2 );
                    }
                }
            }
            FUNC_4( &VAR_3, ((void*)0), ((void*)0) );

            FUNC_6( &VAR_0->regions, VAR_1, VAR_2 );
        }
        else if( (VAR_2 = FUNC_3( 1 )) )
        {
            FUNC_6( &VAR_0->regions, "", VAR_2 );
        }
    }
    return VAR_2;
}
