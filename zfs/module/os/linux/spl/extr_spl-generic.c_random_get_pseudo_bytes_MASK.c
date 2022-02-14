
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (size_t,int) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;

int
FUNC_5(uint8_t *VAR_1, size_t VAR_2)
{
 uint64_t *VAR_3, VAR_4[2];

 FUNC_0(VAR_1);

 VAR_3 = FUNC_2(VAR_0);

 VAR_4[0] = VAR_3[0];
 VAR_4[1] = VAR_3[1];

 while (VAR_2) {
  union {
   uint64_t ui64;
   uint8_t byte[sizeof (uint64_t)];
  }VAR_5;
  int VAR_6 = FUNC_1(VAR_2, sizeof (uint64_t));

  VAR_2 -= VAR_6;
  VAR_5.ui64 = FUNC_4(VAR_4);

  while (VAR_6--)
   *VAR_1++ = VAR_5.byte[VAR_6];
 }

 VAR_3[0] = VAR_4[0];
 VAR_3[1] = VAR_4[1];

 FUNC_3(VAR_0);

 return (0);
}
