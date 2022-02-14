
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int nvs_op; int nvs_recursion; int nvs_priv; } ;
typedef TYPE_1__ nvstream_t ;
typedef int nvpriv_t ;
struct TYPE_10__ {int nvl_nvflag; int nvl_version; } ;
typedef TYPE_2__ nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int *) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,int *) ;

__attribute__((used)) static int
FUNC_4(nvstream_t *VAR_5, nvlist_t *VAR_6)
{
 switch (VAR_5->nvs_op) {
 case 128: {
  int VAR_7;

  if (VAR_5->nvs_recursion >= VAR_4)
   return (VAR_0);
  VAR_5->nvs_recursion++;
  VAR_7 = FUNC_3(VAR_5, VAR_6, ((void*)0));
  VAR_5->nvs_recursion--;
  return (VAR_7);
 }
 case 129: {
  nvpriv_t *VAR_8;
  int VAR_9;

  if (VAR_6->nvl_version != VAR_3)
   return (VAR_2);

  if ((VAR_8 = FUNC_0(VAR_5->nvs_priv)) == ((void*)0))
   return (VAR_1);

  FUNC_2(VAR_6, VAR_6->nvl_nvflag, VAR_8);

  if (VAR_5->nvs_recursion >= VAR_4) {
   FUNC_1(VAR_6);
   return (VAR_0);
  }
  VAR_5->nvs_recursion++;
  if ((VAR_9 = FUNC_3(VAR_5, VAR_6, ((void*)0))) != 0)
   FUNC_1(VAR_6);
  VAR_5->nvs_recursion--;
  return (VAR_9);
 }
 default:
  break;
 }

 return (VAR_0);
}
