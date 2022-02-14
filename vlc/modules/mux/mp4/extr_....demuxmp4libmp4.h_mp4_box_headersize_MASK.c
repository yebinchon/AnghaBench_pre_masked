
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_shortsize; scalar_t__ i_type; } ;
typedef TYPE_1__ MP4_Box_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline size_t FUNC_0( MP4_Box_t *VAR_1 )
{
    return 8
        + ( VAR_1->i_shortsize == 1 ? 8 : 0 )
        + ( VAR_1->i_type == VAR_0 ? 16 : 0 );
}
