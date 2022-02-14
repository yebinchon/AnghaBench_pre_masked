
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sc_prop; scalar_t__ sc_reverse; struct TYPE_4__* sc_next; } ;
typedef TYPE_1__ zfs_sort_column_t ;
typedef int zfs_prop_t ;
struct TYPE_5__ {scalar_t__ si_numname; TYPE_1__* si_sortcol; } ;
typedef TYPE_2__ us_sort_info_t ;
struct TYPE_6__ {int * usn_nvl; } ;
typedef TYPE_3__ us_node_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int nvlist_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;




 scalar_t__ FUNC_0 (int *,char*,scalar_t__*) ;
 int FUNC_1 (int *,char const*,char**) ;
 int FUNC_2 (int *,char const*,int *) ;
 int FUNC_3 (int *,char const*,int *) ;
 int FUNC_4 (char*,char*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_5(const void *VAR_2, const void *VAR_3, void *VAR_4)
{
 const us_node_t *VAR_5 = VAR_2;
 const us_node_t *VAR_6 = VAR_3;
 us_sort_info_t *VAR_7 = (us_sort_info_t *)VAR_4;
 zfs_sort_column_t *VAR_8 = VAR_7->si_sortcol;
 boolean_t VAR_9 = VAR_7->si_numname;
 nvlist_t *VAR_10 = VAR_5->usn_nvl;
 nvlist_t *VAR_11 = VAR_6->usn_nvl;
 int VAR_12 = 0;
 boolean_t VAR_13, VAR_14;

 for (; VAR_8 != ((void*)0); VAR_8 = VAR_8->sc_next) {
  char *VAR_15 = "";
  char *VAR_16 = "";
  uint32_t VAR_17 = 0;
  uint32_t VAR_18 = 0;
  uint64_t VAR_19 = 0;
  uint64_t VAR_20 = 0;
  zfs_prop_t VAR_21 = VAR_8->sc_prop;
  const char *VAR_22 = ((void*)0);
  boolean_t VAR_23 = VAR_8->sc_reverse;

  switch (VAR_21) {
  case 129:
   VAR_22 = "type";
   (void) FUNC_2(VAR_10, VAR_22, &VAR_17);
   (void) FUNC_2(VAR_11, VAR_22, &VAR_18);
   if (VAR_18 != VAR_17)
    VAR_12 = (VAR_18 < VAR_17) ? 1 : -1;
   break;
  case 131:
   VAR_22 = "name";
   if (VAR_9) {
compare_nums:
    (void) FUNC_3(VAR_10, VAR_22,
        &VAR_19);
    (void) FUNC_3(VAR_11, VAR_22,
        &VAR_20);
    if (VAR_20 != VAR_19)
     VAR_12 = (VAR_20 < VAR_19) ? 1 : -1;
   } else {
    if ((FUNC_1(VAR_10, VAR_22,
        &VAR_15) == VAR_0) ||
        (FUNC_1(VAR_11, VAR_22,
        &VAR_16) == VAR_0)) {
     goto compare_nums;
    }
    VAR_12 = FUNC_4(VAR_15, VAR_16);
   }
   break;
  case 128:
  case 130:
   if (!VAR_1)
    break;
   if (VAR_21 == 128)
    VAR_22 = "used";
   else
    VAR_22 = "quota";
   (void) FUNC_3(VAR_10, VAR_22, &VAR_19);
   (void) FUNC_3(VAR_11, VAR_22, &VAR_20);
   if (VAR_20 != VAR_19)
    VAR_12 = (VAR_20 < VAR_19) ? 1 : -1;
   break;

  default:
   break;
  }

  if (VAR_12 != 0) {
   if (VAR_12 < 0)
    return (VAR_23 ? 1 : -1);
   else
    return (VAR_23 ? -1 : 1);
  }
 }






 if (FUNC_0(VAR_10, "smbentity", &VAR_13) == 0 &&
     FUNC_0(VAR_11, "smbentity", &VAR_14) == 0 &&
     VAR_13 != VAR_14)
  return (VAR_13 < VAR_14 ? -1 : 1);

 return (0);
}
