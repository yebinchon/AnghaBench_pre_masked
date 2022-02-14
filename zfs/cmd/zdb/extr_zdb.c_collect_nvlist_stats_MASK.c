
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t zns_leaf_total; size_t zns_leaf_largest; int zns_leaf_count; int zns_boolean; int zns_uint64; int zns_string; int zns_list_count; } ;
typedef TYPE_1__ zdb_nvl_stats_t ;
typedef size_t uint_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;







 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,size_t*,int ) ;
 char* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int **) ;
 int FUNC_10 (int *,int ***,size_t*) ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 (char*,char*) ;

__attribute__((used)) static void
FUNC_13(nvlist_t *VAR_1, zdb_nvl_stats_t *VAR_2)
{
 nvlist_t *VAR_3, **VAR_4;
 nvpair_t *VAR_5 = ((void*)0);
 char *VAR_6;
 uint_t VAR_7, VAR_8;

 VAR_2->zns_list_count++;

 while ((VAR_5 = FUNC_5(VAR_1, VAR_5)) != ((void*)0)) {
  VAR_6 = FUNC_7(VAR_5);

  switch (FUNC_8(VAR_5)) {
  case 129:
   FUNC_1(VAR_2->zns_string, VAR_6,
       FUNC_3(VAR_5));
   break;
  case 128:
   FUNC_2(VAR_2->zns_uint64, VAR_6,
       FUNC_4(VAR_5));
   break;
  case 132:
   FUNC_0(VAR_2->zns_boolean, VAR_6);
   break;
  case 131:
   if (FUNC_9(VAR_5, &VAR_3) == 0)
    FUNC_13(VAR_3, VAR_2);
   break;
  case 130:
   if (FUNC_10(VAR_5, &VAR_4, &VAR_8) != 0)
    break;

   for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
    FUNC_13(VAR_4[VAR_7], VAR_2);


    if (FUNC_12(VAR_6, "children") == 0) {
     size_t VAR_9;

     (void) FUNC_6(VAR_4[VAR_7], &VAR_9,
         VAR_0);
     VAR_2->zns_leaf_total += VAR_9;
     if (VAR_9 > VAR_2->zns_leaf_largest)
      VAR_2->zns_leaf_largest = VAR_9;
     VAR_2->zns_leaf_count++;
    }
   }
   break;
  default:
   (void) FUNC_11("skip type %d!\n", (int)FUNC_8(VAR_5));
  }
 }
}
