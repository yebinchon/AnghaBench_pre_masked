
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* p_buffer; } ;
typedef TYPE_1__ block_t ;



__attribute__((used)) static inline int FUNC_0( block_t *VAR_0 )
{
    return ( (VAR_0->p_buffer[1]&0x1f)<<8 )|VAR_0->p_buffer[2];
}
