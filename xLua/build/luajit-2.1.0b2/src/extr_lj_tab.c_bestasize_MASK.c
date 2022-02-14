
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static uint32_t FUNC_0(uint32_t VAR_0[], uint32_t *VAR_1)
{
  uint32_t VAR_2, VAR_3, VAR_4 = 0, VAR_5 = 0, VAR_6 = *VAR_1;
  for (VAR_2 = 0, VAR_3 = 0; 2*VAR_6 > (1u<<VAR_2) && VAR_3 != VAR_6; VAR_2++)
    if (VAR_0[VAR_2] > 0 && 2*(VAR_3 += VAR_0[VAR_2]) > (1u<<VAR_2)) {
      VAR_5 = (2u<<VAR_2)+1;
      VAR_4 = VAR_3;
    }
  *VAR_1 = VAR_5;
  return VAR_4;
}
