
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zns_list_count; size_t zns_leaf_count; size_t zns_leaf_total; int * zns_boolean; int * zns_uint64; int * zns_string; scalar_t__ zns_leaf_largest; int member_0; } ;
typedef TYPE_1__ zdb_nvl_stats_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int* VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,size_t*,int ) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static void
FUNC_7(nvlist_t *VAR_2, size_t VAR_3)
{
 zdb_nvl_stats_t VAR_4 = { 0 };
 size_t VAR_5, VAR_6 = 0, VAR_7;
 size_t VAR_8;


 FUNC_0(FUNC_3(&VAR_4.zns_string, 0, 0));
 FUNC_0(FUNC_3(&VAR_4.zns_uint64, 0, 0));
 FUNC_0(FUNC_3(&VAR_4.zns_boolean, 0, 0));
 FUNC_0(FUNC_5(VAR_4.zns_boolean, &VAR_8, VAR_0));

 (void) FUNC_6("\n\nZFS Label NVList Config Stats:\n");

 FUNC_0(FUNC_5(VAR_2, &VAR_7, VAR_0));
 (void) FUNC_6("  %d bytes used, %d bytes free (using %4.1f%%)\n\n",
     (int)VAR_7, (int)(VAR_3 - VAR_7), 100.0 * VAR_7 / VAR_3);

 FUNC_1(VAR_2, &VAR_4);

 FUNC_0(FUNC_5(VAR_4.zns_uint64, &VAR_5, VAR_0));
 VAR_5 -= VAR_8;
 VAR_6 += VAR_5;
 (void) FUNC_6("%12s %4d %6d bytes (%5.2f%%)\n", "integers:",
     (int)FUNC_2(VAR_4.zns_uint64),
     (int)VAR_5, 100.0 * VAR_5 / VAR_7);

 FUNC_0(FUNC_5(VAR_4.zns_string, &VAR_5, VAR_0));
 VAR_5 -= VAR_8;
 VAR_6 += VAR_5;
 (void) FUNC_6("%12s %4d %6d bytes (%5.2f%%)\n", "strings:",
     (int)FUNC_2(VAR_4.zns_string),
     (int)VAR_5, 100.0 * VAR_5 / VAR_7);

 FUNC_0(FUNC_5(VAR_4.zns_boolean, &VAR_5, VAR_0));
 VAR_5 -= VAR_8;
 VAR_6 += VAR_5;
 (void) FUNC_6("%12s %4d %6d bytes (%5.2f%%)\n", "booleans:",
     (int)FUNC_2(VAR_4.zns_boolean),
     (int)VAR_5, 100.0 * VAR_5 / VAR_7);

 VAR_5 = VAR_7 - VAR_6;
 (void) FUNC_6("%12s %4d %6d bytes (%5.2f%%)\n\n", "nvlists:",
     VAR_4.zns_list_count, (int)VAR_5, 100.0 * VAR_5 / VAR_7);

 if (VAR_4.zns_leaf_count > 0) {
  size_t VAR_9 = VAR_4.zns_leaf_total / VAR_4.zns_leaf_count;

  (void) FUNC_6("%12s %4d %6d bytes average\n", "leaf vdevs:",
      VAR_4.zns_leaf_count, (int)VAR_9);
  (void) FUNC_6("%24d bytes largest\n",
      (int)VAR_4.zns_leaf_largest);

  if (VAR_1['l'] >= 3 && VAR_9 > 0)
   (void) FUNC_6("  space for %d additional leaf vdevs\n",
       (int)((VAR_3 - VAR_7) / VAR_9));
 }
 (void) FUNC_6("\n");

 FUNC_4(VAR_4.zns_string);
 FUNC_4(VAR_4.zns_uint64);
 FUNC_4(VAR_4.zns_boolean);
}
