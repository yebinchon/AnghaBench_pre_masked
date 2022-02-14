
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {int dp_meta_objset; int dp_root_dir_obj; int dp_spa; } ;
typedef TYPE_1__ dsl_pool_t ;
typedef int dsl_dir_t ;
typedef int ddobj ;
struct TYPE_7__ {int dd_child_dir_zapobj; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (char*,char const*,char const*,...) ;
 int FUNC_3 (TYPE_1__*,int ,char*,void*,int **) ;
 TYPE_3__* FUNC_4 (int *) ;
 int FUNC_5 (int *,void*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char const*,char*,char const**) ;
 char* FUNC_8 (int ,int ) ;
 int FUNC_9 (char*,int ) ;
 char* FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (char*,char const*) ;
 int FUNC_12 (int ,int ,char*,int,int,int *) ;

int
FUNC_13(dsl_pool_t *VAR_4, const char *VAR_5, void *VAR_6,
    dsl_dir_t **VAR_7, const char **VAR_8)
{
 char *VAR_9;
 const char *VAR_10, *VAR_11, *VAR_12 = ((void*)0);
 int VAR_13;
 dsl_dir_t *VAR_14;
 uint64_t VAR_15;

 VAR_9 = FUNC_8(VAR_3, VAR_2);
 VAR_13 = FUNC_7(VAR_5, VAR_9, &VAR_11);
 if (VAR_13 != 0)
  goto error;


 VAR_10 = FUNC_10(VAR_4->dp_spa);
 if (FUNC_11(VAR_9, VAR_10) != 0) {
  VAR_13 = FUNC_1(VAR_1);
  goto error;
 }

 FUNC_0(FUNC_6(VAR_4));

 VAR_13 = FUNC_3(VAR_4, VAR_4->dp_root_dir_obj, ((void*)0), VAR_6, &VAR_14);
 if (VAR_13 != 0) {
  goto error;
 }

 while (VAR_11 != ((void*)0)) {
  dsl_dir_t *VAR_16;
  VAR_13 = FUNC_7(VAR_11, VAR_9, &VAR_12);
  if (VAR_13 != 0)
   break;
  FUNC_0(VAR_11[0] != '\0');
  if (VAR_11[0] == '@')
   break;
  FUNC_2("looking up %s in obj%lld\n",
      VAR_9, FUNC_4(VAR_14)->dd_child_dir_zapobj);

  VAR_13 = FUNC_12(VAR_4->dp_meta_objset,
      FUNC_4(VAR_14)->dd_child_dir_zapobj,
      VAR_9, sizeof (VAR_15), 1, &VAR_15);
  if (VAR_13 != 0) {
   if (VAR_13 == VAR_0)
    VAR_13 = 0;
   break;
  }

  VAR_13 = FUNC_3(VAR_4, VAR_15, VAR_9, VAR_6, &VAR_16);
  if (VAR_13 != 0)
   break;
  FUNC_5(VAR_14, VAR_6);
  VAR_14 = VAR_16;
  VAR_11 = VAR_12;
 }

 if (VAR_13 != 0) {
  FUNC_5(VAR_14, VAR_6);
  goto error;
 }





 if (VAR_11 != ((void*)0) &&
     (VAR_8 == ((void*)0) || (VAR_12 && VAR_12[0] != '\0'))) {

  FUNC_5(VAR_14, VAR_6);
  FUNC_2("next=%p (%s) tail=%p\n", VAR_11, VAR_11?VAR_11:"", VAR_8);
  VAR_13 = FUNC_1(VAR_0);
 }
 if (VAR_8 != ((void*)0))
  *VAR_8 = VAR_11;
 if (VAR_13 == 0)
  *VAR_7 = VAR_14;
error:
 FUNC_9(VAR_9, VAR_3);
 return (VAR_13);
}
