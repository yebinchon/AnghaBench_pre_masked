
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int i_multiplex_toscan; } ;
typedef TYPE_1__ scan_t ;
struct TYPE_6__ {int b_scanned; } ;
typedef TYPE_2__ scan_multiplex_t ;



__attribute__((used)) static void FUNC_0( scan_t *VAR_0, scan_multiplex_t *VAR_1, bool VAR_2 )
{
    if( VAR_1->b_scanned != VAR_2 )
    {
        VAR_1->b_scanned = VAR_2;
        VAR_0->i_multiplex_toscan += ( VAR_2 ) ? -1 : 1;
    }
}
