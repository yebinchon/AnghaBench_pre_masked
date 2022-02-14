
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int dsl_pool_t ;
struct TYPE_5__ {scalar_t__ dd_crypto_obj; scalar_t__ dd_object; } ;
typedef TYPE_1__ dsl_dir_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,scalar_t__*) ;
 int FUNC_2 (int *,char const*,int ,TYPE_1__**,int *) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (char const*,int ,int **) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 int FUNC_7 (char const*,int ) ;

int
FUNC_8(const char *VAR_4, const char *VAR_5)
{
 int VAR_6 = 0;
 dsl_dir_t *VAR_7 = ((void*)0);
 dsl_pool_t *VAR_8 = ((void*)0);
 uint64_t VAR_9;


 VAR_6 = FUNC_4(VAR_4, VAR_3, &VAR_8);
 if (VAR_6 != 0)
  goto out;

 VAR_6 = FUNC_2(VAR_8, VAR_4, VAR_3, &VAR_7, ((void*)0));
 if (VAR_6 != 0) {
  VAR_7 = ((void*)0);
  goto out;
 }


 if (VAR_7->dd_crypto_obj == 0) {
  if (FUNC_6(VAR_5, "none") != 0) {
   VAR_6 = FUNC_0(VAR_1);
   goto out;
  }

  VAR_6 = 0;
  goto out;
 }


 if (!FUNC_7(VAR_5, VAR_0)) {
  VAR_6 = FUNC_0(VAR_2);
  goto out;
 }


 VAR_6 = FUNC_1(VAR_7, &VAR_9);
 if (VAR_6 != 0)
  goto out;

 if (VAR_9 != VAR_7->dd_object) {
  VAR_6 = FUNC_0(VAR_1);
  goto out;
 }

 FUNC_3(VAR_7, VAR_3);
 FUNC_5(VAR_8, VAR_3);

 return (0);

out:
 if (VAR_7 != ((void*)0))
  FUNC_3(VAR_7, VAR_3);
 if (VAR_8 != ((void*)0))
  FUNC_5(VAR_8, VAR_3);

 return (VAR_6);
}
