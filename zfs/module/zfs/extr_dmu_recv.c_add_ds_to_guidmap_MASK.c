
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_9__ {int os_raw_receive; } ;
typedef TYPE_1__ objset_t ;
struct TYPE_10__ {int * gme_ds; int guid; scalar_t__ raw; } ;
typedef TYPE_2__ guid_map_entry_t ;
typedef int dsl_pool_t ;
typedef int dsl_dataset_t ;
typedef int ds_hold_flags_t ;
typedef scalar_t__ boolean_t ;
typedef int avl_tree_t ;
struct TYPE_11__ {int ds_guid; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_1__**) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,int ,TYPE_2__*,int **) ;
 TYPE_5__* FUNC_5 (int *) ;
 int FUNC_6 (char const*,int ,int **) ;
 int FUNC_7 (int *,int ) ;
 TYPE_2__* FUNC_8 (int,int ) ;
 int FUNC_9 (TYPE_2__*,int) ;

__attribute__((used)) static int
FUNC_10(const char *VAR_4, avl_tree_t *VAR_5, uint64_t VAR_6,
    boolean_t VAR_7)
{
 dsl_pool_t *VAR_8;
 dsl_dataset_t *VAR_9;
 guid_map_entry_t *VAR_10;
 objset_t *VAR_11;
 ds_hold_flags_t VAR_12 = (VAR_7) ? 0 : VAR_1;
 int VAR_13;

 FUNC_0(VAR_5 != ((void*)0));

 VAR_13 = FUNC_6(VAR_4, VAR_2, &VAR_8);
 if (VAR_13 != 0)
  return (VAR_13);
 VAR_10 = FUNC_8(sizeof (*VAR_10), VAR_3);
 VAR_13 = FUNC_4(VAR_8, VAR_6, VAR_12, VAR_10, &VAR_9);

 if (VAR_13 == 0) {






  if (VAR_7) {
   VAR_13 = FUNC_2(VAR_9, &VAR_11);
   if (VAR_13 != 0) {
    FUNC_3(VAR_9, VAR_12, VAR_2);
    FUNC_7(VAR_8, VAR_2);
    FUNC_9(VAR_10, sizeof (*VAR_10));
    return (VAR_13);
   }
   VAR_11->os_raw_receive = VAR_0;
  }

  VAR_10->raw = VAR_7;
  VAR_10->guid = FUNC_5(VAR_9)->ds_guid;
  VAR_10->gme_ds = VAR_9;
  FUNC_1(VAR_5, VAR_10);
 } else {
  FUNC_9(VAR_10, sizeof (*VAR_10));
 }

 FUNC_7(VAR_8, VAR_2);
 return (VAR_13);
}
