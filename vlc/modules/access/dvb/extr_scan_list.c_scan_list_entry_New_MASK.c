
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int modulation; void* inner_fec; void* coderate_lp; void* coderate_hp; } ;
typedef TYPE_1__ scan_list_entry_t ;


 void* VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static scan_list_entry_t * FUNC_2()
{
    scan_list_entry_t *VAR_2 = FUNC_0(1, sizeof(scan_list_entry_t));
    if( FUNC_1(VAR_2) )
    {
        VAR_2->coderate_hp = VAR_0;
        VAR_2->coderate_lp = VAR_0;
        VAR_2->inner_fec = VAR_0;
        VAR_2->modulation = VAR_1;
    }
    return VAR_2;
}
