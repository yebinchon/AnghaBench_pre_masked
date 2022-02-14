
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ wk_ddobj; } ;
typedef TYPE_1__ dsl_wrapping_key_t ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const dsl_wrapping_key_t *VAR_2 = VAR_0;
 const dsl_wrapping_key_t *VAR_3 = VAR_1;

 if (VAR_2->wk_ddobj < VAR_3->wk_ddobj)
  return (-1);
 if (VAR_2->wk_ddobj > VAR_3->wk_ddobj)
  return (1);
 return (0);
}
