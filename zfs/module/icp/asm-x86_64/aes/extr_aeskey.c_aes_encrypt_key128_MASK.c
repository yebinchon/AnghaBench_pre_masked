
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int*,int) ;
 int FUNC_1 (unsigned char const*,int) ;

__attribute__((used)) static void
FUNC_2(const unsigned char *VAR_0, uint32_t VAR_1[])
{
 uint32_t VAR_2[4];

 VAR_1[0] = VAR_2[0] = FUNC_1(VAR_0, 0);
 VAR_1[1] = VAR_2[1] = FUNC_1(VAR_0, 1);
 VAR_1[2] = VAR_2[2] = FUNC_1(VAR_0, 2);
 VAR_1[3] = VAR_2[3] = FUNC_1(VAR_0, 3);
 {
  uint32_t VAR_3;
  for (VAR_3 = 0; VAR_3 < 9; ++VAR_3)
   FUNC_0(VAR_1, VAR_3);
 }

 FUNC_0(VAR_1, 9);
}
