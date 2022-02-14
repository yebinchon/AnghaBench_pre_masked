
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static uint64_t
FUNC_1(int VAR_1, const void *VAR_2)
{
 switch (VAR_1) {
 case 1:
  return (*(uint8_t *)VAR_2);
 case 2:
  return (*(uint16_t *)VAR_2);
 case 4:
  return (*(uint32_t *)VAR_2);
 case 8:
  return (*(uint64_t *)VAR_2);
 default:
  FUNC_0(VAR_0, "bad int len %d", VAR_1);
 }
 return (0xFEEDFACEDEADBEEFULL);
}
