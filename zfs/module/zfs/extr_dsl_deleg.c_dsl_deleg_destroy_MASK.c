
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zap_cursor_t ;
struct TYPE_3__ {int za_integer_length; int za_num_integers; int za_first_integer; } ;
typedef TYPE_1__ zap_attribute_t ;
typedef int uint64_t ;
typedef int objset_t ;
typedef int dmu_tx_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int ) ;
 scalar_t__ FUNC_5 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_6 (int *,int ,int *) ;

int
FUNC_7(objset_t *VAR_0, uint64_t VAR_1, dmu_tx_t *VAR_2)
{
 zap_cursor_t VAR_3;
 zap_attribute_t VAR_4;

 if (VAR_1 == 0)
  return (0);

 for (FUNC_4(&VAR_3, VAR_0, VAR_1);
     FUNC_5(&VAR_3, &VAR_4) == 0;
     FUNC_2(&VAR_3)) {
  FUNC_0(VAR_4.za_integer_length == 8 && VAR_4.za_num_integers == 1);
  FUNC_1(0 == FUNC_6(VAR_0, VAR_4.za_first_integer, VAR_2));
 }
 FUNC_3(&VAR_3);
 FUNC_1(0 == FUNC_6(VAR_0, VAR_1, VAR_2));
 return (0);
}
