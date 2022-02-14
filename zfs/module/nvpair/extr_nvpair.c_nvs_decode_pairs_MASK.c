
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* nvs_ops; } ;
typedef TYPE_2__ nvstream_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
struct TYPE_6__ {int (* nvs_nvpair ) (TYPE_2__*,int *,size_t*) ;int (* nvs_nvp_op ) (TYPE_2__*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *,size_t) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (TYPE_2__*,int *,size_t*) ;
 int FUNC_8 (TYPE_2__*,int *) ;

__attribute__((used)) static int
FUNC_9(nvstream_t *VAR_2, nvlist_t *VAR_3)
{
 nvpair_t *VAR_4;
 size_t VAR_5;
 int VAR_6;





 while ((VAR_6 = VAR_2->nvs_ops->nvs_nvpair(VAR_2, ((void*)0), &VAR_5)) == 0) {
  if (VAR_5 == 0)
   break;


  if (VAR_5 < FUNC_0(1, 0))
   return (VAR_0);

  if ((VAR_4 = FUNC_2(VAR_3, VAR_5)) == ((void*)0))
   return (VAR_1);

  if ((VAR_6 = VAR_2->nvs_ops->nvs_nvp_op(VAR_2, VAR_4)) != 0) {
   FUNC_3(VAR_3, VAR_4);
   return (VAR_6);
  }

  if (FUNC_1(VAR_4) != 0) {
   FUNC_5(VAR_4);
   FUNC_3(VAR_3, VAR_4);
   return (VAR_0);
  }

  VAR_6 = FUNC_6(VAR_3, VAR_4);
  if (VAR_6 != 0) {
   FUNC_5(VAR_4);
   FUNC_3(VAR_3, VAR_4);
   return (VAR_6);
  }
  FUNC_4(VAR_3, VAR_4);
 }
 return (VAR_6);
}
