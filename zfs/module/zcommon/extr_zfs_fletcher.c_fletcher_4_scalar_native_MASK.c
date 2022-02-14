
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_5__ {int* zc_word; } ;
struct TYPE_4__ {TYPE_3__ scalar; } ;
typedef TYPE_1__ fletcher_4_ctx_t ;


 int FUNC_0 (TYPE_3__*,int,int,int,int) ;

__attribute__((used)) static void
FUNC_1(fletcher_4_ctx_t *VAR_0, const void *VAR_1,
    uint64_t VAR_2)
{
 const uint32_t *VAR_3 = VAR_1;
 const uint32_t *VAR_4 = VAR_3 + (VAR_2 / sizeof (uint32_t));
 uint64_t VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_5 = VAR_0->scalar.zc_word[0];
 VAR_6 = VAR_0->scalar.zc_word[1];
 VAR_7 = VAR_0->scalar.zc_word[2];
 VAR_8 = VAR_0->scalar.zc_word[3];

 for (; VAR_3 < VAR_4; VAR_3++) {
  VAR_5 += VAR_3[0];
  VAR_6 += VAR_5;
  VAR_7 += VAR_6;
  VAR_8 += VAR_7;
 }

 FUNC_0(&VAR_0->scalar, VAR_5, VAR_6, VAR_7, VAR_8);
}
