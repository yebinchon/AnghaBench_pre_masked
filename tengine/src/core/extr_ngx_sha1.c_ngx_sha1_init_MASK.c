
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int a; int b; int c; int d; int e; scalar_t__ bytes; } ;
typedef TYPE_1__ ngx_sha1_t ;



void
FUNC_0(ngx_sha1_t *VAR_0)
{
    VAR_0->a = 0x67452301;
    VAR_0->b = 0xefcdab89;
    VAR_0->c = 0x98badcfe;
    VAR_0->d = 0x10325476;
    VAR_0->e = 0xc3d2e1f0;

    VAR_0->bytes = 0;
}
