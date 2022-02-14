
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void demux_t ;
struct TYPE_3__ {int* p_buffer; int i_flags; } ;
typedef TYPE_1__ block_t ;


 int VAR_0 ;
 int FUNC_0 (void*) ;

__attribute__((used)) static void FUNC_1 (demux_t *VAR_1, void *VAR_2, block_t *VAR_3)
{
    FUNC_0(VAR_1);
    FUNC_0(VAR_2);
    if(VAR_3->p_buffer[1] & 0x80)
    {
        VAR_3->i_flags |= VAR_0;
    }
}
