
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int nvs_op; } ;
typedef TYPE_1__ nvstream_t ;
struct TYPE_17__ {scalar_t__ nvp_size; int nvp_name_sz; } ;
typedef TYPE_2__ nvpair_t ;
typedef int data_type_t ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_2__*) ;


 int FUNC_3 (int,int *,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*,scalar_t__) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_9(nvstream_t *VAR_2, nvpair_t *VAR_3)
{
 data_type_t VAR_4;
 int VAR_5;
 int VAR_6 = 0;






 switch (VAR_2->nvs_op) {
 case 128:
 case 129:
  if (FUNC_5(VAR_2, VAR_3, VAR_3->nvp_size) != 0)
   return (VAR_0);
  break;
 default:
  return (VAR_1);
 }


 if (FUNC_4(VAR_3) != 0)
  return (VAR_0);

 VAR_4 = FUNC_2(VAR_3);






 if ((VAR_5 = FUNC_3(VAR_4, ((void*)0), FUNC_0(VAR_3))) < 0)
  return (VAR_0);

 if (FUNC_1(VAR_3->nvp_name_sz, VAR_5) > VAR_3->nvp_size)
  return (VAR_0);

 switch (VAR_4) {
 case 132:
  VAR_6 = FUNC_6(VAR_2, VAR_3);
  break;
 case 131:
  VAR_6 = FUNC_7(VAR_2, VAR_3);
  break;
 case 130:
  FUNC_8(VAR_2, VAR_3);
  break;
 default:
  break;
 }

 return (VAR_6);
}
