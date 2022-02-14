
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HUF_CElt ;
typedef int BYTE ;
typedef int BIT_CStream_t ;


 size_t FUNC_0 (int *) ;
 size_t FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int const,int const*) ;
 scalar_t__ FUNC_6 (size_t const) ;

size_t FUNC_7(void *VAR_0, size_t VAR_1, const void *VAR_2, size_t VAR_3, const HUF_CElt *VAR_4)
{
 const BYTE *VAR_5 = (const BYTE *)VAR_2;
 BYTE *const VAR_6 = (BYTE *)VAR_0;
 BYTE *const VAR_7 = VAR_6 + VAR_1;
 BYTE *VAR_8 = VAR_6;
 size_t VAR_9;
 BIT_CStream_t VAR_10;


 if (VAR_1 < 8)
  return 0;
 {
  size_t const VAR_11 = FUNC_1(&VAR_10, VAR_8, VAR_7 - VAR_8);
  if (FUNC_6(VAR_11))
   return 0;
 }

 VAR_9 = VAR_3 & ~3;
 switch (VAR_3 & 3) {
 case 3: FUNC_5(&VAR_10, VAR_5[VAR_9 + 2], VAR_4); FUNC_4(&VAR_10);
 case 2: FUNC_5(&VAR_10, VAR_5[VAR_9 + 1], VAR_4); FUNC_3(&VAR_10);
 case 1: FUNC_5(&VAR_10, VAR_5[VAR_9 + 0], VAR_4); FUNC_2(&VAR_10);
 case 0:
 default:;
 }

 for (; VAR_9 > 0; VAR_9 -= 4) {
  FUNC_5(&VAR_10, VAR_5[VAR_9 - 1], VAR_4);
  FUNC_3(&VAR_10);
  FUNC_5(&VAR_10, VAR_5[VAR_9 - 2], VAR_4);
  FUNC_4(&VAR_10);
  FUNC_5(&VAR_10, VAR_5[VAR_9 - 3], VAR_4);
  FUNC_3(&VAR_10);
  FUNC_5(&VAR_10, VAR_5[VAR_9 - 4], VAR_4);
  FUNC_2(&VAR_10);
 }

 return FUNC_0(&VAR_10);
}
