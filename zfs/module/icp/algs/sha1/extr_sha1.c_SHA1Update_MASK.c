
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {int const* buf8; } ;
struct TYPE_7__ {int* count; TYPE_1__ buf_un; } ;
typedef TYPE_2__ SHA1_CTX ;


 int FUNC_0 (TYPE_2__*,int const*) ;
 int FUNC_1 (TYPE_2__*,int const*,int) ;
 int FUNC_2 (int const*,int const*,size_t) ;

void
FUNC_3(SHA1_CTX *VAR_0, const void *VAR_1, size_t VAR_2)
{
 uint32_t VAR_3, VAR_4, VAR_5;
 const uint8_t *VAR_6 = VAR_1;

 uint32_t VAR_7;



 if (VAR_2 == 0)
  return;


 VAR_4 = (VAR_0->count[1] >> 3) & 0x3F;


 if ((VAR_0->count[1] += (VAR_2 << 3)) < (VAR_2 << 3))
  VAR_0->count[0]++;

 VAR_0->count[0] += (VAR_2 >> 29);

 VAR_5 = 64 - VAR_4;


 VAR_3 = 0;
 if (VAR_2 >= VAR_5) {
  if (VAR_4) {
   FUNC_2(VAR_6, &VAR_0->buf_un.buf8[VAR_4], VAR_5);
   FUNC_0(VAR_0, VAR_0->buf_un.buf8);
   VAR_3 = VAR_5;
  }





  VAR_7 = (VAR_2 - VAR_3) >> 6;
  if (VAR_7 > 0) {
   FUNC_1(VAR_0, &VAR_6[VAR_3], VAR_7);
   VAR_3 += VAR_7 << 6;
  }
  if (VAR_2 == VAR_3)
   return;

  VAR_4 = 0;
 }


 FUNC_2(&VAR_6[VAR_3], &VAR_0->buf_un.buf8[VAR_4], VAR_2 - VAR_3);
}
