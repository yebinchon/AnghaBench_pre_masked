
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* labels; } ;
typedef TYPE_1__ cksum_record_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(char *VAR_2, cksum_record_t *VAR_3)
{
 FUNC_0("%s", VAR_2);
 for (int VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  if (VAR_3->labels[VAR_4] == VAR_0)
   FUNC_0("%d ", VAR_4);
 FUNC_0("\n");
}
