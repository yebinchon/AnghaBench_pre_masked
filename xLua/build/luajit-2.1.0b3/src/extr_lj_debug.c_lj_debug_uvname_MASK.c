
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ sizeuv; } ;
typedef TYPE_1__ GCproto ;


 int FUNC_0 (int) ;
 int * FUNC_1 (TYPE_1__*) ;

const char *FUNC_2(GCproto *VAR_0, uint32_t VAR_1)
{
  const uint8_t *VAR_2 = FUNC_1(VAR_0);
  FUNC_0(VAR_1 < VAR_0->sizeuv);
  if (!VAR_2) return "";
  if (VAR_1) while (*VAR_2++ || --VAR_1) ;
  return (const char *)VAR_2;
}
