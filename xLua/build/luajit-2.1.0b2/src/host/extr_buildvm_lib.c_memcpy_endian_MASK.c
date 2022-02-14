
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;


 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (void*,void*,size_t) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, void *VAR_1, size_t VAR_2)
{
  union { uint8_t b; uint32_t u; } VAR_3;
  VAR_3.u = 1;
  if (VAR_3.b == FUNC_0(1, 0)) {
    FUNC_1(VAR_0, VAR_1, VAR_2);
  } else {
    size_t VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
      ((uint8_t *)VAR_0)[VAR_4] = ((uint8_t *)VAR_1)[VAR_2-VAR_4-1];
  }
}
