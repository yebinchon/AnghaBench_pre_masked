
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_5__ {scalar_t__ dd_crypto_obj; scalar_t__ dd_object; } ;
typedef TYPE_1__ dsl_dir_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,scalar_t__*) ;

int
FUNC_2(dsl_dir_t *VAR_1, dsl_dir_t *VAR_2)
{
 int VAR_3;
 uint64_t VAR_4, VAR_5;

 if (VAR_1->dd_crypto_obj == 0)
  return (0);

 VAR_3 = FUNC_1(VAR_1, &VAR_4);
 if (VAR_3 != 0)
  goto error;





 if (VAR_1->dd_object != VAR_4) {
  VAR_3 = FUNC_1(VAR_2,
      &VAR_5);
  if (VAR_3 != 0)
   goto error;

  if (VAR_5 != VAR_4) {
   VAR_3 = FUNC_0(VAR_0);
   goto error;
  }
 }

 return (0);

error:
 return (VAR_3);
}
