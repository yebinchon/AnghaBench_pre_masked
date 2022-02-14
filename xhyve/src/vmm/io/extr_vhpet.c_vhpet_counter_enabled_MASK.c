
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhpet {int config; } ;


 int VAR_0 ;

__attribute__((used)) static __inline bool
FUNC_0(struct vhpet *VAR_1)
{

 return ((VAR_1->config & VAR_0) ? 1 : 0);
}
