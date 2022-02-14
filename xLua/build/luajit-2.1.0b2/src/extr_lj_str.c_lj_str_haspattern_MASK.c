
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int len; } ;
typedef TYPE_1__ GCstr ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,int) ;
 char* FUNC_2 (TYPE_1__*) ;

int FUNC_3(GCstr *VAR_0)
{
  const char *VAR_1 = FUNC_2(VAR_0), *VAR_2 = VAR_1 + VAR_0->len;
  while (VAR_1 < VAR_2) {
    int VAR_3 = *(const uint8_t *)VAR_1++;
    if (FUNC_0(VAR_3) && FUNC_1("^$*+?.([%-", VAR_3))
      return 1;
  }
  return 0;
}
