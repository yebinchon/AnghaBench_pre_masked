
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int bool_t ;
struct TYPE_3__ {scalar_t__ x_addr; scalar_t__ x_addr_end; } ;
typedef TYPE_1__ XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static bool_t
FUNC_1(XDR *VAR_2, uint32_t *VAR_3)
{
 if (VAR_2->x_addr + sizeof (uint32_t) > VAR_2->x_addr_end)
  return (VAR_0);

 *VAR_3 = FUNC_0(*((uint32_t *)VAR_2->x_addr));

 VAR_2->x_addr += sizeof (uint32_t);

 return (VAR_1);
}
