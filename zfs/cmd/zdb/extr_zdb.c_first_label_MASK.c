
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* labels; } ;
typedef TYPE_1__ cksum_record_t ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(cksum_record_t *VAR_1)
{
 for (int VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (VAR_1->labels[VAR_2])
   return (VAR_2);

 return (-1);
}
