
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {size_t i_event; TYPE_2__* p_current; TYPE_1__** pp_event; } ;
typedef TYPE_3__ vlc_epg_t ;
struct TYPE_6__ {char* psz_name; } ;
struct TYPE_5__ {char* psz_name; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1( const vlc_epg_t *VAR_0 )
{
    FUNC_0("order: ");
    for( size_t VAR_1 = 0; VAR_1 < VAR_0->i_event; VAR_1++ )
        FUNC_0("%s ", VAR_0->pp_event[VAR_1]->psz_name );
    if( VAR_0->p_current )
        FUNC_0(" current %s", VAR_0->p_current->psz_name );
    FUNC_0("\n");
}
