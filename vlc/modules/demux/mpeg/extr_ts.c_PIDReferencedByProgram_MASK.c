
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_6__ {int i_size; TYPE_1__** p_elems; } ;
struct TYPE_7__ {TYPE_2__ e_streams; } ;
typedef TYPE_3__ ts_pmt_t ;
struct TYPE_5__ {scalar_t__ i_pid; } ;



__attribute__((used)) static bool FUNC_0( const ts_pmt_t *VAR_0, uint16_t VAR_1 )
{
    for(int VAR_2=0; VAR_2<VAR_0->e_streams.i_size; VAR_2++)
        if( VAR_0->e_streams.p_elems[VAR_2]->i_pid == VAR_1 )
            return 1;

    return 0;
}
