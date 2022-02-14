
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ id; } ;
struct TYPE_4__ {TYPE_1__ fd; } ;
typedef TYPE_2__ Dimension ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const Dimension *VAR_2 = (Dimension *) VAR_0;
 const Dimension *VAR_3 = (Dimension *) VAR_1;

 if (VAR_2->fd.id < VAR_3->fd.id)
  return -1;

 if (VAR_2->fd.id > VAR_3->fd.id)
  return 1;

 return 0;
}
