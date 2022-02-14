
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int i_size; TYPE_2__** p_entries; } ;
typedef TYPE_1__ vlc_dictionary_t ;
struct TYPE_6__ {int p_value; int psz_key; struct TYPE_6__* p_next; } ;
typedef TYPE_2__ vlc_dictionary_entry_t ;
typedef int ttml_style_t ;
typedef int ttml_context_t ;


 int FUNC_0 (int *,TYPE_1__ const*,int *) ;
 int FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_2( ttml_context_t *VAR_0, const vlc_dictionary_t *VAR_1,
                             ttml_style_t *VAR_2 )
{
    for( int VAR_3 = 0; VAR_3 < VAR_1->i_size; ++VAR_3 )
    {
        for ( vlc_dictionary_entry_t* VAR_4 = VAR_1->p_entries[VAR_3];
              VAR_4 != ((void*)0); VAR_4 = VAR_4->p_next )
        {
            FUNC_1( VAR_4->psz_key, VAR_4->p_value, VAR_2 );
        }
    }
    FUNC_0( VAR_0, VAR_1, VAR_2 );
}
