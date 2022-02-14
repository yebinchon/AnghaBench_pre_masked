
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int rankLast ;
struct TYPE_3__ {size_t nbBits; size_t count; } ;
typedef TYPE_1__ nodeElt ;
typedef size_t U32 ;
typedef size_t const BYTE ;


 size_t FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (size_t*,int,int) ;

__attribute__((used)) static U32 FUNC_2(nodeElt *VAR_1, U32 VAR_2, U32 VAR_3)
{
 const U32 VAR_4 = VAR_1[VAR_2].nbBits;
 if (VAR_4 <= VAR_3)
  return VAR_4;


 {
  int VAR_5 = 0;
  const U32 VAR_6 = 1 << (VAR_4 - VAR_3);
  U32 VAR_7 = VAR_2;

  while (VAR_1[VAR_7].nbBits > VAR_3) {
   VAR_5 += VAR_6 - (1 << (VAR_4 - VAR_1[VAR_7].nbBits));
   VAR_1[VAR_7].nbBits = (BYTE)VAR_3;
   VAR_7--;
  }
  while (VAR_1[VAR_7].nbBits == VAR_3)
   VAR_7--;


  VAR_5 >>= (VAR_4 - VAR_3);


  {
   U32 const VAR_8 = 0xF0F0F0F0;
   U32 VAR_9[VAR_0 + 2];
   int VAR_10;


   FUNC_1(VAR_9, 0xF0, sizeof(VAR_9));
   {
    U32 VAR_11 = VAR_3;
    for (VAR_10 = VAR_7; VAR_10 >= 0; VAR_10--) {
     if (VAR_1[VAR_10].nbBits >= VAR_11)
      continue;
     VAR_11 = VAR_1[VAR_10].nbBits;
     VAR_9[VAR_3 - VAR_11] = VAR_10;
    }
   }

   while (VAR_5 > 0) {
    U32 VAR_12 = FUNC_0(VAR_5) + 1;
    for (; VAR_12 > 1; VAR_12--) {
     U32 VAR_13 = VAR_9[VAR_12];
     U32 VAR_14 = VAR_9[VAR_12 - 1];
     if (VAR_13 == VAR_8)
      continue;
     if (VAR_14 == VAR_8)
      break;
     {
      U32 const VAR_15 = VAR_1[VAR_13].count;
      U32 const VAR_16 = 2 * VAR_1[VAR_14].count;
      if (VAR_15 <= VAR_16)
       break;
     }
    }


    while ((VAR_12 <= VAR_0) && (VAR_9[VAR_12] == VAR_8))
     VAR_12++;
    VAR_5 -= 1 << (VAR_12 - 1);
    if (VAR_9[VAR_12 - 1] == VAR_8)
     VAR_9[VAR_12 - 1] = VAR_9[VAR_12];
    VAR_1[VAR_9[VAR_12]].nbBits++;
    if (VAR_9[VAR_12] == 0)
     VAR_9[VAR_12] = VAR_8;
    else {
     VAR_9[VAR_12]--;
     if (VAR_1[VAR_9[VAR_12]].nbBits != VAR_3 - VAR_12)
      VAR_9[VAR_12] = VAR_8;
    }
   }

   while (VAR_5 < 0) {
    if (VAR_9[1] == VAR_8) {

     while (VAR_1[VAR_7].nbBits == VAR_3)
      VAR_7--;
     VAR_1[VAR_7 + 1].nbBits--;
     VAR_9[1] = VAR_7 + 1;
     VAR_5++;
     continue;
    }
    VAR_1[VAR_9[1] + 1].nbBits--;
    VAR_9[1]++;
    VAR_5++;
   }
  }
 }

 return VAR_3;
}
