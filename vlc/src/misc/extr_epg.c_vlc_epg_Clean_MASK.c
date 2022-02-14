
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t i_event; int psz_name; int * pp_event; } ;
typedef TYPE_1__ vlc_epg_t ;


 int FUNC_0 (size_t,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3( vlc_epg_t *VAR_0 )
{
    size_t VAR_1;
    for( VAR_1 = 0; VAR_1 < VAR_0->i_event; VAR_1++ )
        FUNC_2( VAR_0->pp_event[VAR_1] );
    FUNC_0( VAR_0->i_event, VAR_0->pp_event );
    FUNC_1( VAR_0->psz_name );
}
