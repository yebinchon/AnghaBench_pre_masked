
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pd_attr; int pd_name; } ;
typedef TYPE_1__ zprop_desc_t ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_1, const void *VAR_2)
{
 const zprop_desc_t *VAR_3 = *((zprop_desc_t **)VAR_1);
 const zprop_desc_t *VAR_4 = *((zprop_desc_t **)VAR_2);
 boolean_t VAR_5, VAR_6;

 VAR_5 = (VAR_3->pd_attr == VAR_0);
 VAR_6 = (VAR_4->pd_attr == VAR_0);

 if (VAR_5 == VAR_6)
  return (FUNC_0(VAR_3->pd_name, VAR_4->pd_name));

 return (VAR_5 ? -1 : 1);
}
