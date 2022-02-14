
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zvec_nvl_key_count; TYPE_2__* zvec_nvl_keys; } ;
typedef TYPE_1__ zfs_ioc_vec_t ;
struct TYPE_5__ {int zkey_flags; char* zkey_name; scalar_t__ zkey_type; } ;
typedef TYPE_2__ zfs_ioc_key_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef scalar_t__ data_type_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,char*) ;
 int * FUNC_2 (int *,int *) ;
 char* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static int
FUNC_6(nvlist_t *VAR_9, const zfs_ioc_vec_t *VAR_10)
{
 const zfs_ioc_key_t *VAR_11 = VAR_10->zvec_nvl_keys;
 boolean_t VAR_12 = VAR_0;




 for (nvpair_t *VAR_13 = FUNC_2(VAR_9, ((void*)0));
     VAR_13 != ((void*)0); VAR_13 = FUNC_2(VAR_9, VAR_13)) {
  char *VAR_14 = FUNC_3(VAR_13);
  data_type_t VAR_15 = FUNC_4(VAR_13);
  boolean_t VAR_16 = VAR_0;




  for (int VAR_17 = 0; VAR_17 < VAR_10->zvec_nvl_key_count; VAR_17++) {

   if ((VAR_11[VAR_17].zkey_flags & VAR_8) == 0 &&
       FUNC_5(VAR_11[VAR_17].zkey_name, VAR_14) != 0)
    continue;

   VAR_16 = VAR_1;

   if (VAR_11[VAR_17].zkey_type != VAR_2 &&
       VAR_11[VAR_17].zkey_type != VAR_15) {
    return (FUNC_0(VAR_4));
   }

   if (VAR_11[VAR_17].zkey_flags & VAR_7)
    continue;

   VAR_12 = VAR_1;
   break;
  }


  if (!VAR_16 &&
      (FUNC_5(VAR_14, "optional") != 0 ||
      VAR_15 != VAR_3)) {
   return (FUNC_0(VAR_6));
  }
 }


 for (int VAR_18 = 0; VAR_18 < VAR_10->zvec_nvl_key_count; VAR_18++) {
  if (VAR_11[VAR_18].zkey_flags & VAR_7)
   continue;

  if (VAR_11[VAR_18].zkey_flags & VAR_8) {

   if (!VAR_12)
    return (FUNC_0(VAR_5));
   continue;
  }

  if (!FUNC_1(VAR_9, VAR_11[VAR_18].zkey_name))
   return (FUNC_0(VAR_5));
 }

 return (0);
}
