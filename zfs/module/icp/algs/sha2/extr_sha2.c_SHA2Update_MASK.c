
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_10__ {int const* buf8; } ;
struct TYPE_9__ {int* c32; int* c64; } ;
struct TYPE_11__ {scalar_t__ algotype; TYPE_2__ buf_un; TYPE_1__ count; } ;
typedef TYPE_3__ SHA2_CTX ;


 int FUNC_0 (TYPE_3__*,int const*) ;
 int FUNC_1 (TYPE_3__*,int const*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_3__*,int const*) ;
 int FUNC_3 (TYPE_3__*,int const*,scalar_t__) ;
 int FUNC_4 (int const*,int const*,size_t) ;

void
FUNC_5(SHA2_CTX *VAR_1, const void *VAR_2, size_t VAR_3)
{
 uint32_t VAR_4, VAR_5, VAR_6, VAR_7;
 const uint8_t *VAR_8 = VAR_2;
 uint32_t VAR_9 = VAR_1->algotype;


 if (VAR_3 == 0)
  return;

 if (VAR_9 <= VAR_0) {
  VAR_7 = 64;


  VAR_5 = (VAR_1->count.c32[1] >> 3) & 0x3F;


  if ((VAR_1->count.c32[1] += (VAR_3 << 3)) < (VAR_3 << 3))
   VAR_1->count.c32[0]++;

  VAR_1->count.c32[0] += (VAR_3 >> 29);

 } else {
  VAR_7 = 128;


  VAR_5 = (VAR_1->count.c64[1] >> 3) & 0x7F;


  if ((VAR_1->count.c64[1] += (VAR_3 << 3)) < (VAR_3 << 3))
   VAR_1->count.c64[0]++;

  VAR_1->count.c64[0] += (VAR_3 >> 29);
 }

 VAR_6 = VAR_7 - VAR_5;


 VAR_4 = 0;
 if (VAR_3 >= VAR_6) {
  if (VAR_5) {
   FUNC_4(VAR_8, &VAR_1->buf_un.buf8[VAR_5], VAR_6);
   if (VAR_9 <= VAR_0)
    FUNC_0(VAR_1, VAR_1->buf_un.buf8);
   else
    FUNC_2(VAR_1, VAR_1->buf_un.buf8);

   VAR_4 = VAR_6;
  }


  if (VAR_9 <= VAR_0) {
   for (; VAR_4 + VAR_7 - 1 < VAR_3; VAR_4 += VAR_7) {
    FUNC_0(VAR_1, &VAR_8[VAR_4]);
   }
  } else {
   for (; VAR_4 + VAR_7 - 1 < VAR_3; VAR_4 += VAR_7) {
    FUNC_2(VAR_1, &VAR_8[VAR_4]);
   }
  }
  if (VAR_3 == VAR_4)
   return;

  VAR_5 = 0;
 }


 FUNC_4(&VAR_8[VAR_4], &VAR_1->buf_un.buf8[VAR_5], VAR_3 - VAR_4);
}
