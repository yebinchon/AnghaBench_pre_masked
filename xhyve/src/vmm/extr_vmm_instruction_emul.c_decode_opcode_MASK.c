
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_2__ {scalar_t__ op_type; } ;
struct vie {TYPE_1__ op; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct vie*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (struct vie*) ;
 scalar_t__ FUNC_2 (struct vie*,size_t*) ;

__attribute__((used)) static int
FUNC_3(struct vie *VAR_3)
{
 uint8_t VAR_4;

 if (FUNC_2(VAR_3, &VAR_4))
  return (-1);

 VAR_3->op = VAR_2[VAR_4];

 if (VAR_3->op.op_type == VAR_0)
  return (-1);

 FUNC_1(VAR_3);

 if (VAR_3->op.op_type == VAR_1)
  return (FUNC_0(VAR_3));

 return (0);
}
