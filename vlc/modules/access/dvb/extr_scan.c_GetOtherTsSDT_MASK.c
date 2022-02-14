
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_6__ {size_t i_sdt; TYPE_3__** pp_sdt; } ;
struct TYPE_7__ {TYPE_1__ others; } ;
typedef TYPE_2__ scan_session_t ;
struct TYPE_8__ {scalar_t__ i_extension; } ;
typedef TYPE_3__ dvbpsi_sdt_t ;



__attribute__((used)) static bool FUNC_0( scan_session_t *VAR_0, uint16_t VAR_1,
                           dvbpsi_sdt_t ***VAR_2 )
{
    for( size_t VAR_3=0; VAR_3<VAR_0->others.i_sdt; VAR_3++ )
    {
        if( VAR_0->others.pp_sdt[VAR_3]->i_extension == VAR_1 )
        {
            *VAR_2 = &VAR_0->others.pp_sdt[VAR_3];
            return 1;
        }
    }

    return 0;
}
