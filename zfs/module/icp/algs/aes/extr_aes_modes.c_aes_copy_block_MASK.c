
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *,int) ;

void
FUNC_2(uint8_t *VAR_0, uint8_t *VAR_1)
{
 if (FUNC_1(VAR_0, VAR_1, sizeof (uint32_t))) {

  *(uint32_t *)&VAR_1[0] = *(uint32_t *)&VAR_0[0];

  *(uint32_t *)&VAR_1[4] = *(uint32_t *)&VAR_0[4];

  *(uint32_t *)&VAR_1[8] = *(uint32_t *)&VAR_0[8];

  *(uint32_t *)&VAR_1[12] = *(uint32_t *)&VAR_0[12];
 } else {
  FUNC_0(VAR_0, VAR_1);
 }
}
