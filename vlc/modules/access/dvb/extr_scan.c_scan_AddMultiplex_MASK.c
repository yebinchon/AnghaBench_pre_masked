
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int i_multiplex; int i_multiplex_toscan; TYPE_2__** pp_multiplex; } ;
typedef TYPE_1__ scan_t ;
struct TYPE_8__ {int b_scanned; } ;
typedef TYPE_2__ scan_multiplex_t ;


 TYPE_2__** FUNC_0 (TYPE_2__**,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static bool FUNC_2( scan_t *VAR_0, scan_multiplex_t *VAR_1 )
{
    scan_multiplex_t **VAR_2 = FUNC_0( VAR_0->pp_multiplex,
                                             sizeof(scan_multiplex_t *) * (VAR_0->i_multiplex + 1) );
    if( FUNC_1(!VAR_2) )
        return 0;
    VAR_2[VAR_0->i_multiplex] = VAR_1;
    VAR_0->pp_multiplex = VAR_2;
    VAR_0->i_multiplex++;
    if( !VAR_1->b_scanned )
        VAR_0->i_multiplex_toscan++;
    return 1;
}
