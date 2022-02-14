
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int) ;

__attribute__((used)) static void
FUNC_2(uint8_t *VAR_0, uint64_t *VAR_1)
{
 if (FUNC_1(VAR_0, sizeof (uint64_t))) {

  VAR_1[0] = *(uint64_t *)&VAR_0[0];

  VAR_1[1] = *(uint64_t *)&VAR_0[8];
 } else {
  uint8_t *VAR_2 = (uint8_t *)&VAR_1[0];

  FUNC_0(VAR_0, VAR_2);
 }
}
