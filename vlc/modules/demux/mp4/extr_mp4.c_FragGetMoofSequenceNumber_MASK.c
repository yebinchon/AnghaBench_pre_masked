
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int i_sequence_number; } ;
typedef int MP4_Box_t ;


 TYPE_1__* FUNC_0 (int const*) ;
 int * FUNC_1 (int *,char*) ;

__attribute__((used)) static uint32_t FUNC_2( MP4_Box_t *VAR_0 )
{
    const MP4_Box_t *VAR_1 = FUNC_1( VAR_0, "mfhd" );
    if( VAR_1 && FUNC_0(VAR_1) )
        return FUNC_0(VAR_1)->i_sequence_number;
    return 0;
}
