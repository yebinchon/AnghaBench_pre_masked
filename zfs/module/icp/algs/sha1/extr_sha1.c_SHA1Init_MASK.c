
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* state; scalar_t__* count; } ;
typedef TYPE_1__ SHA1_CTX ;



void
FUNC_0(SHA1_CTX *VAR_0)
{
 VAR_0->count[0] = VAR_0->count[1] = 0;






 VAR_0->state[0] = 0x67452301U;
 VAR_0->state[1] = 0xefcdab89U;
 VAR_0->state[2] = 0x98badcfeU;
 VAR_0->state[3] = 0x10325476U;
 VAR_0->state[4] = 0xc3d2e1f0U;
}
