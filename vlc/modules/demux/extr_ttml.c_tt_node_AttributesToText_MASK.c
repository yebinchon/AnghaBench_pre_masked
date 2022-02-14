
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int i_size; TYPE_3__** p_entries; } ;
typedef TYPE_2__ vlc_dictionary_t ;
struct TYPE_8__ {char* psz_key; char* p_value; struct TYPE_8__* p_next; } ;
typedef TYPE_3__ vlc_dictionary_entry_t ;
struct TYPE_6__ {int end; int begin; } ;
struct TYPE_9__ {TYPE_1__ timings; TYPE_2__ attr_dict; } ;
typedef TYPE_4__ tt_node_t ;
struct vlc_memstream {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (struct vlc_memstream*,char const*) ;
 char* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct vlc_memstream*,char*,char*) ;
 int FUNC_6 (struct vlc_memstream*,char) ;

__attribute__((used)) static void FUNC_7( struct vlc_memstream *VAR_0, const tt_node_t* VAR_1 )
{
    bool VAR_2 = 0;
    const vlc_dictionary_t* VAR_3 = &VAR_1->attr_dict;
    for( int VAR_4 = 0; VAR_4 < VAR_3->i_size; ++VAR_4 )
    {
        for ( vlc_dictionary_entry_t* VAR_5 = VAR_3->p_entries[VAR_4];
                                      VAR_5 != ((void*)0); VAR_5 = VAR_5->p_next )
        {
            const char *VAR_6 = ((void*)0);

            if( !FUNC_1(VAR_5->psz_key, "begin") ||
                !FUNC_1(VAR_5->psz_key, "end") ||
                !FUNC_1(VAR_5->psz_key, "dur") )
            {
                VAR_2 = 1;

                continue;
            }
            else if( !FUNC_1(VAR_5->psz_key, "timeContainer") )
            {

                continue;
            }
            else
            {
                VAR_6 = VAR_5->p_value;
            }

            if( VAR_6 == ((void*)0) )
                continue;

            FUNC_5( VAR_0, " %s=\"", VAR_5->psz_key );
            FUNC_2( VAR_0, VAR_6 );
            FUNC_6( VAR_0, '"' );
        }
    }

    if( VAR_2 )
    {
        if( FUNC_4( &VAR_1->timings.begin ) )
        {
            char *VAR_7 = FUNC_3( VAR_1->timings.begin );
            FUNC_5( VAR_0, " begin=\"%s\"", VAR_7 );
            FUNC_0( VAR_7 );
        }

        if( FUNC_4( &VAR_1->timings.end ) )
        {
            char *VAR_8 = FUNC_3( VAR_1->timings.end );
            FUNC_5( VAR_0, " end=\"%s\"", VAR_8 );
            FUNC_0( VAR_8 );
        }
    }
}
