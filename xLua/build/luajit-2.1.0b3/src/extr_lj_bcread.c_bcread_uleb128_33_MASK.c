
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {char* p; char* pe; } ;
typedef TYPE_1__ LexState ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static uint32_t FUNC_2(LexState *VAR_0)
{
  const uint8_t *VAR_1 = (const uint8_t *)VAR_0->p;
  uint32_t VAR_2 = (*VAR_1++ >> 1);
  if (FUNC_0(VAR_2 >= 0x40)) {
    int VAR_3 = -1;
    VAR_2 &= 0x3f;
    do {
     VAR_2 |= ((*VAR_1 & 0x7f) << (VAR_3 += 7));
   } while (*VAR_1++ >= 0x80);
  }
  VAR_0->p = (char *)VAR_1;
  FUNC_1(VAR_0->p <= VAR_0->pe);
  return VAR_2;
}
