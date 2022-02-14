
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ name; } ;
typedef TYPE_1__ name_and_columns_t ;



__attribute__((used)) static unsigned int
FUNC_0(const name_and_columns_t *VAR_0)
{
 int VAR_1 = 0;

 while (VAR_0[VAR_1].name)
  VAR_1++;

 return (VAR_1);
}
