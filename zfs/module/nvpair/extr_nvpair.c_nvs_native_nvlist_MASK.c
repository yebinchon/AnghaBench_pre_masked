
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int nvs_op; TYPE_2__* nvs_private; } ;
typedef TYPE_1__ nvstream_t ;
struct TYPE_8__ {int n_flag; } ;
typedef TYPE_2__ nvs_native_t ;
struct TYPE_9__ {int nvl_nvflag; int nvl_version; } ;
typedef TYPE_3__ nvlist_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (TYPE_1__*,int *,int) ;

__attribute__((used)) static int
FUNC_1(nvstream_t *VAR_2, nvlist_t *VAR_3, size_t *VAR_4)
{
 nvs_native_t *VAR_5 = VAR_2->nvs_private;

 switch (VAR_2->nvs_op) {
 case 129:
 case 130:
  if (VAR_5->n_flag)
   return (0);

  VAR_5->n_flag = 1;


  if (FUNC_0(VAR_2, &VAR_3->nvl_version, sizeof (int32_t)) != 0 ||
      FUNC_0(VAR_2, &VAR_3->nvl_nvflag, sizeof (int32_t)) != 0)
   return (VAR_0);

  return (0);

 case 128:







  if (VAR_5->n_flag) {
   *VAR_4 += 4;
  } else {
   VAR_5->n_flag = 1;
   *VAR_4 += 2 * sizeof (int32_t) + 4;
  }

  return (0);

 default:
  return (VAR_1);
 }
}
