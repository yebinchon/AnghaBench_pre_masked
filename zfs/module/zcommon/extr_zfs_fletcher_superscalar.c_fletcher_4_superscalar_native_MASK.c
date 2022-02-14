
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_5__ {TYPE_1__* superscalar; } ;
typedef TYPE_2__ fletcher_4_ctx_t ;
struct TYPE_4__ {int* v; } ;



__attribute__((used)) static void
FUNC_0(fletcher_4_ctx_t *VAR_0,
    const void *VAR_1, uint64_t VAR_2)
{
 const uint32_t *VAR_3 = VAR_1;
 const uint32_t *VAR_4 = VAR_3 + (VAR_2 / sizeof (uint32_t));
 uint64_t VAR_5, VAR_6, VAR_7, VAR_8;
 uint64_t VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_5 = VAR_0->superscalar[0].v[0];
 VAR_6 = VAR_0->superscalar[1].v[0];
 VAR_7 = VAR_0->superscalar[2].v[0];
 VAR_8 = VAR_0->superscalar[3].v[0];
 VAR_9 = VAR_0->superscalar[0].v[1];
 VAR_10 = VAR_0->superscalar[1].v[1];
 VAR_11 = VAR_0->superscalar[2].v[1];
 VAR_12 = VAR_0->superscalar[3].v[1];

 for (; VAR_3 < VAR_4; VAR_3 += 2) {
  VAR_5 += VAR_3[0];
  VAR_9 += VAR_3[1];
  VAR_6 += VAR_5;
  VAR_10 += VAR_9;
  VAR_7 += VAR_6;
  VAR_11 += VAR_10;
  VAR_8 += VAR_7;
  VAR_12 += VAR_11;
 }

 VAR_0->superscalar[0].v[0] = VAR_5;
 VAR_0->superscalar[1].v[0] = VAR_6;
 VAR_0->superscalar[2].v[0] = VAR_7;
 VAR_0->superscalar[3].v[0] = VAR_8;
 VAR_0->superscalar[0].v[1] = VAR_9;
 VAR_0->superscalar[1].v[1] = VAR_10;
 VAR_0->superscalar[2].v[1] = VAR_11;
 VAR_0->superscalar[3].v[1] = VAR_12;
}
