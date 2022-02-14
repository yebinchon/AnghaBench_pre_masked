
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ts_standards_e ;
struct TYPE_3__ {scalar_t__ standard; } ;
typedef TYPE_1__ demux_sys_t ;


 scalar_t__ VAR_0 ;

void FUNC_0( demux_sys_t *VAR_1, ts_standards_e VAR_2 )
{
    if( VAR_1->standard != VAR_0 &&
        VAR_1->standard != VAR_2 )
        return;
    VAR_1->standard = VAR_2;
}
