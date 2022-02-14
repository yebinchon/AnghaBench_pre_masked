
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static uint8_t *FUNC_0(uint8_t *VAR_0, uint32_t *VAR_1)
{
  uint32_t VAR_2 = *VAR_0++;
  if (VAR_2 >= 0x80) {
    int VAR_3 = 0; VAR_2 &= 0x7f;
    do { VAR_2 |= ((*VAR_0 & 0x7f) << (VAR_3 += 7)); } while (*VAR_0++ >= 0x80);
  }
  *VAR_1 = VAR_2;
  return VAR_0;
}
