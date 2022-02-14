
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_3__ {size_t nbBits; } ;
typedef TYPE_1__ HUF_CElt ;
typedef int BYTE ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int ) ;
 size_t FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int*,size_t,int*,int,void*,size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

size_t FUNC_4(void *VAR_7, size_t VAR_8, const HUF_CElt *VAR_9, U32 VAR_10, U32 VAR_11, void *VAR_12, size_t VAR_13)
{
 BYTE *VAR_14 = (BYTE *)VAR_7;
 U32 VAR_15;

 BYTE *VAR_16;
 BYTE *VAR_17;
 size_t VAR_18 = 0;

 VAR_16 = (BYTE *)((U32 *)VAR_12 + VAR_18);
 VAR_18 += FUNC_0(VAR_2 + 1, sizeof(U32)) >> 2;
 VAR_17 = (BYTE *)((U32 *)VAR_12 + VAR_18);
 VAR_18 += FUNC_0(VAR_1, sizeof(U32)) >> 2;

 if ((VAR_18 << 2) > VAR_13)
  return FUNC_2(VAR_6);
 VAR_12 = (U32 *)VAR_12 + VAR_18;
 VAR_13 -= (VAR_18 << 2);


 if (VAR_10 > VAR_1)
  return FUNC_2(VAR_5);


 VAR_16[0] = 0;
 for (VAR_15 = 1; VAR_15 < VAR_11 + 1; VAR_15++)
  VAR_16[VAR_15] = (BYTE)(VAR_11 + 1 - VAR_15);
 for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++)
  VAR_17[VAR_15] = VAR_16[VAR_9[VAR_15].nbBits];


 {
  FUNC_1(VAR_4, FUNC_3(VAR_14 + 1, VAR_8 - 1, VAR_17, VAR_10, VAR_12, VAR_13));
  if ((VAR_4 > 1) & (VAR_4 < VAR_10 / 2)) {
   VAR_14[0] = (BYTE)VAR_4;
   return VAR_4 + 1;
  }
 }


 if (VAR_10 > (256 - 128))
  return FUNC_2(VAR_0);
 if (((VAR_10 + 1) / 2) + 1 > VAR_8)
  return FUNC_2(VAR_3);
 VAR_14[0] = (BYTE)(128 + (VAR_10 - 1));
 VAR_17[VAR_10] = 0;
 for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15 += 2)
  VAR_14[(VAR_15 / 2) + 1] = (BYTE)((VAR_17[VAR_15] << 4) + VAR_17[VAR_15 + 1]);
 return ((VAR_10 + 1) / 2) + 1;
}
