
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ frames; scalar_t__ base; } ;
typedef TYPE_1__ tt_time_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;

__attribute__((used)) static inline tt_time_t FUNC_1( tt_time_t VAR_1, tt_time_t VAR_2 )
{
    if( VAR_2 > VAR_1 )
    {
        unsigned VAR_3 = 1 + (VAR_2 - VAR_1) / VAR_0;
        VAR_1 -= FUNC_0( VAR_3 );
        VAR_1 += VAR_3 * VAR_0;
    }
    VAR_1 -= VAR_2;
    VAR_1 -= VAR_2;
    return VAR_1;
}
