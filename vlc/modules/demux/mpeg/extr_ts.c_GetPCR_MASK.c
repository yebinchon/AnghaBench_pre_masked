
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int stime_t ;
struct TYPE_3__ {int* p_buffer; int i_buffer; } ;
typedef TYPE_1__ block_t ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static stime_t FUNC_1( const block_t *VAR_0 )
{
    const uint8_t *VAR_1 = VAR_0->p_buffer;

    stime_t VAR_2 = -1;

    if( FUNC_0(VAR_0->i_buffer > 11) &&
        ( VAR_1[3]&0x20 ) &&
        ( VAR_1[5]&0x10 ) &&
        ( VAR_1[4] >= 7 ) )
    {

        VAR_2 = ( (stime_t)VAR_1[6] << 25 ) |
                ( (stime_t)VAR_1[7] << 17 ) |
                ( (stime_t)VAR_1[8] << 9 ) |
                ( (stime_t)VAR_1[9] << 1 ) |
                ( (stime_t)VAR_1[10] >> 7 );
    }
    return VAR_2;
}
