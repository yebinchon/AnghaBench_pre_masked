
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t i_event; TYPE_1__** pp_event; } ;
typedef TYPE_2__ vlc_epg_t ;
struct TYPE_4__ {char const* psz_name; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1( const vlc_epg_t *VAR_0, const char *VAR_1, size_t VAR_2 )
{
    FUNC_0( VAR_0->i_event == VAR_2 );
    for( size_t VAR_3 = 0; VAR_3 < VAR_0->i_event; VAR_3++ )
    {
        FUNC_0( VAR_0->pp_event[VAR_3]->psz_name &&
                VAR_0->pp_event[VAR_3]->psz_name[0] == VAR_1[VAR_3] );
    }
}
