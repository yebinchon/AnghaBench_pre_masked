
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int b_present; int pp_event; int i_event; int * p_current; int * psz_name; int i_source_id; int i_id; } ;
typedef TYPE_1__ vlc_epg_t ;
typedef int uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1( vlc_epg_t *VAR_0, uint32_t VAR_1, uint16_t VAR_2 )
{
    VAR_0->i_id = VAR_1;
    VAR_0->i_source_id = VAR_2;
    VAR_0->psz_name = ((void*)0);
    VAR_0->p_current = ((void*)0);
    VAR_0->b_present = 0;
    FUNC_0( VAR_0->i_event, VAR_0->pp_event );
}
