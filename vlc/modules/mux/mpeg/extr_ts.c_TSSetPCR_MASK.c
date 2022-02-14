
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int int64_t ;
struct TYPE_3__ {int* p_buffer; } ;
typedef TYPE_1__ block_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1( block_t *VAR_0, vlc_tick_t VAR_1 )
{
    int64_t VAR_2 = FUNC_0(VAR_1);

    VAR_0->p_buffer[6] = ( VAR_2 >> 25 )&0xff;
    VAR_0->p_buffer[7] = ( VAR_2 >> 17 )&0xff;
    VAR_0->p_buffer[8] = ( VAR_2 >> 9 )&0xff;
    VAR_0->p_buffer[9] = ( VAR_2 >> 1 )&0xff;
    VAR_0->p_buffer[10] = ( VAR_2 << 7 )&0x80;
    VAR_0->p_buffer[10] |= 0x7e;
    VAR_0->p_buffer[11] = 0;
}
