
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_5__ {scalar_t__ i_level; int i_constraint_set_flags; } ;
typedef TYPE_1__ h264_sequence_parameter_set_t ;
typedef int h264_level_limits_t ;
struct TYPE_6__ {scalar_t__ i_level; int const limits; } ;


 size_t FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static const h264_level_limits_t * FUNC_2( const h264_sequence_parameter_set_t *VAR_3 )
{
    uint16_t VAR_4 = VAR_3->i_level;
    if( VAR_4 == VAR_0 &&
       (VAR_3->i_constraint_set_flags & FUNC_1(3)) )
    {
        VAR_4 = VAR_1;
    }

    for( size_t VAR_5=0; VAR_5< FUNC_0(VAR_2); VAR_5++ )
        if( VAR_2[VAR_5].i_level == VAR_4 )
            return & VAR_2[VAR_5].limits;

    return ((void*)0);
}
