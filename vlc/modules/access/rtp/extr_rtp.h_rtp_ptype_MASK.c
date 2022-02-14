
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int* p_buffer; } ;
typedef TYPE_1__ block_t ;



__attribute__((used)) static inline uint8_t FUNC_0 (const block_t *VAR_0)
{
    return VAR_0->p_buffer[1] & 0x7F;
}
