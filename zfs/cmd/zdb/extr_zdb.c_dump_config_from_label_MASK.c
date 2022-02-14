
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int config_nv; int config; } ;
typedef TYPE_1__ zdb_label_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,size_t) ;
 int* VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static void
FUNC_5(zdb_label_t *VAR_1, size_t VAR_2, int VAR_3)
{
 if (VAR_0['q'])
  return;

 if ((VAR_0['l'] < 3) && (FUNC_2(VAR_1->config) != VAR_3))
  return;

 FUNC_3(VAR_1, VAR_3);
 FUNC_0(VAR_1->config_nv, 4);
 FUNC_4("    labels = ", VAR_1->config);

 if (VAR_0['l'] >= 2)
  FUNC_1(VAR_1->config_nv, VAR_2);
}
