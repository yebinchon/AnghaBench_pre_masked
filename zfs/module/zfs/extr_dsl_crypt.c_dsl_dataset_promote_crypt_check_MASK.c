
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_6__ {scalar_t__ dd_crypto_obj; scalar_t__ dd_object; struct TYPE_6__* dd_parent; } ;
typedef TYPE_1__ dsl_dir_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,scalar_t__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

int
FUNC_3(dsl_dir_t *VAR_2, dsl_dir_t *VAR_3)
{
 int VAR_4;
 uint64_t VAR_5, VAR_6, VAR_7;


 if (VAR_3->dd_crypto_obj == 0)
  return (0);





 if (FUNC_2(VAR_3))
  return (0);





 VAR_4 = FUNC_1(VAR_3, &VAR_5);
 if (VAR_4 != 0)
  return (VAR_4);

 if (VAR_5 == VAR_3->dd_object)
  return (0);





 VAR_4 = FUNC_1(VAR_3->dd_parent, &VAR_6);
 if (VAR_4 == VAR_1)
  return (FUNC_0(VAR_0));
 else if (VAR_4 != 0)
  return (VAR_4);

 VAR_4 = FUNC_1(VAR_2->dd_parent, &VAR_7);
 if (VAR_4 == VAR_1)
  return (FUNC_0(VAR_0));
 else if (VAR_4 != 0)
  return (VAR_4);

 if (VAR_6 != VAR_7)
  return (FUNC_0(VAR_0));

 return (0);
}
