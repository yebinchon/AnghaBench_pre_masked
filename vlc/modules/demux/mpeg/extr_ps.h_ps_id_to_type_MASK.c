
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_5__ {size_t i_es; TYPE_1__* es; } ;
typedef TYPE_2__ ps_psm_t ;
struct TYPE_4__ {scalar_t__ i_id; int i_type; } ;



__attribute__((used)) static inline uint8_t FUNC_0( const ps_psm_t *VAR_0, uint16_t VAR_1 )
{
    size_t VAR_2;
    for( VAR_2 = 0; VAR_0 && VAR_2 < VAR_0->i_es; VAR_2++ )
    {
        if( VAR_0->es[VAR_2].i_id == VAR_1 ) return VAR_0->es[VAR_2].i_type;
    }
    return 0;
}
