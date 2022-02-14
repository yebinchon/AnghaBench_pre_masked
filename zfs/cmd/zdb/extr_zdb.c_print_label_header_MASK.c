
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ header_printed; } ;
typedef TYPE_1__ zdb_label_t ;


 scalar_t__ VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(zdb_label_t *VAR_2, int VAR_3)
{

 if (VAR_1['q'])
  return;

 if (VAR_2->header_printed == VAR_0)
  return;

 (void) FUNC_0("------------------------------------\n");
 (void) FUNC_0("LABEL %d\n", VAR_3);
 (void) FUNC_0("------------------------------------\n");

 VAR_2->header_printed = VAR_0;
}
