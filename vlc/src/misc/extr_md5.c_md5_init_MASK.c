
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int A; int B; int C; int D; scalar_t__ count; scalar_t__ nblocks; } ;
typedef TYPE_1__ MD5_CONTEXT ;



__attribute__((used)) static void
FUNC_0( void *VAR_0 )
{
  MD5_CONTEXT *VAR_1 = VAR_0;

  VAR_1->A = 0x67452301;
  VAR_1->B = 0xefcdab89;
  VAR_1->C = 0x98badcfe;
  VAR_1->D = 0x10325476;

  VAR_1->nblocks = 0;
  VAR_1->count = 0;
}
