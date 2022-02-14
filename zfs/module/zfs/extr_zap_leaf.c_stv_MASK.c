
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
typedef void* uint64_t ;
typedef void* uint32_t ;
typedef void* uint16_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_1(int VAR_1, void *VAR_2, uint64_t VAR_3)
{
 switch (VAR_1) {
 case 1:
  *(uint8_t *)VAR_2 = VAR_3;
  return;
 case 2:
  *(uint16_t *)VAR_2 = VAR_3;
  return;
 case 4:
  *(uint32_t *)VAR_2 = VAR_3;
  return;
 case 8:
  *(uint64_t *)VAR_2 = VAR_3;
  return;
 default:
  FUNC_0(VAR_0, "bad int len %d", VAR_1);
 }
}
