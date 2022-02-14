
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zio_cksum_t ;
typedef int uint64_t ;
struct TYPE_5__ {TYPE_1__* superscalar; } ;
typedef TYPE_2__ fletcher_4_ctx_t ;
struct TYPE_4__ {int* v; } ;


 int FUNC_0 (int *,int,int,int,int) ;

__attribute__((used)) static void
FUNC_1(fletcher_4_ctx_t *VAR_0, zio_cksum_t *VAR_1)
{
 uint64_t VAR_2, VAR_3, VAR_4, VAR_5;
 VAR_2 = VAR_0->superscalar[0].v[0] + VAR_0->superscalar[0].v[1];
 VAR_3 = 2 * VAR_0->superscalar[1].v[0] + 2 * VAR_0->superscalar[1].v[1] -
     VAR_0->superscalar[0].v[1];
 VAR_4 = 4 * VAR_0->superscalar[2].v[0] - VAR_0->superscalar[1].v[0] +
     4 * VAR_0->superscalar[2].v[1] - 3 * VAR_0->superscalar[1].v[1];
 VAR_5 = 8 * VAR_0->superscalar[3].v[0] - 4 * VAR_0->superscalar[2].v[0] +
     8 * VAR_0->superscalar[3].v[1] - 8 * VAR_0->superscalar[2].v[1] +
     VAR_0->superscalar[1].v[1];
 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
