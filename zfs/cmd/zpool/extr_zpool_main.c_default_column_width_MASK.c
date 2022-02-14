
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cb_literal; } ;
typedef TYPE_1__ iostat_cbdata_t ;
typedef enum iostat_type { ____Placeholder_iostat_type } iostat_type ;
__attribute__((used)) static unsigned int
FUNC_0(iostat_cbdata_t *VAR_0, enum iostat_type VAR_1)
{
 unsigned long VAR_2 = 5;
 static unsigned long VAR_3[] = {




  [132] = 15,
  [131] = 10,
  [129] = 6,
  [130] = 10,
  [128] = 6,
 };

 if (VAR_0->cb_literal)
  VAR_2 = VAR_3[VAR_1];

 return (VAR_2);
}
