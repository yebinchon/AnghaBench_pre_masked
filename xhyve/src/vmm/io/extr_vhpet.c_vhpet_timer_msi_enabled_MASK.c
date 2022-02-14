
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct vhpet {TYPE_1__* timer; } ;
struct TYPE_2__ {int const cap_config; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static __inline bool
FUNC_0(struct vhpet *VAR_2, int VAR_3)
{
 const uint64_t VAR_4 = VAR_0 | VAR_1;

 if ((VAR_2->timer[VAR_3].cap_config & VAR_4) == VAR_4)
  return (1);
 else
  return (0);
}
