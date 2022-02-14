
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_1__ ;


struct TYPE_26__ {struct TYPE_26__* ne_name; struct TYPE_26__* ne_next; int * ce_config; struct TYPE_26__* ce_next; struct TYPE_26__* ve_configs; struct TYPE_26__* ve_next; struct TYPE_26__* pe_vdevs; struct TYPE_26__* pe_next; struct TYPE_26__* rn_name; int rn_num_labels; int rn_order; int * rn_config; } ;
typedef TYPE_1__ vdev_entry_t ;
typedef scalar_t__ uint64_t ;
typedef int tpool_t ;
typedef TYPE_1__ rdsk_node_t ;
typedef int pthread_mutex_t ;
struct TYPE_27__ {TYPE_1__* names; TYPE_1__* pools; int member_0; } ;
typedef TYPE_3__ pool_list_t ;
typedef TYPE_1__ pool_entry_t ;
typedef int nvlist_t ;
typedef TYPE_1__ name_entry_t ;
typedef int libpc_handle_t ;
struct TYPE_28__ {scalar_t__ guid; size_t paths; int policy; scalar_t__ can_be_active; int * poolname; scalar_t__ path; scalar_t__ scan; } ;
typedef TYPE_6__ importargs_t ;
typedef TYPE_1__ config_entry_t ;
typedef int boolean_t ;
typedef TYPE_1__ avl_tree_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,TYPE_3__*,TYPE_1__*,int ,int ,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,void**) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*) ;
 int * FUNC_7 (int *,TYPE_3__*,scalar_t__,int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int ,char**) ;
 scalar_t__ FUNC_10 (int *,int ,scalar_t__*) ;
 int FUNC_11 (TYPE_1__*,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *) ;
 scalar_t__ FUNC_14 (int *,char*) ;
 int FUNC_15 (int ) ;
 int * FUNC_16 (int,int,int ,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int ,TYPE_1__*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int) ;
 char** FUNC_21 (size_t*) ;
 scalar_t__ FUNC_22 (int *,int *,TYPE_1__**) ;
 scalar_t__ FUNC_23 (int *,int *,TYPE_1__**,char const* const*,size_t) ;
 int VAR_11 ;

__attribute__((used)) static nvlist_t *
FUNC_24(libpc_handle_t *VAR_12, importargs_t *VAR_13)
{
 nvlist_t *VAR_14 = ((void*)0);
 pool_list_t VAR_15 = { 0 };
 pool_entry_t *VAR_16, *VAR_17;
 vdev_entry_t *VAR_18, *VAR_19;
 config_entry_t *VAR_20, *VAR_21;
 name_entry_t *VAR_22, *VAR_23;
 pthread_mutex_t VAR_24;
 avl_tree_t *VAR_25;
 rdsk_node_t *VAR_26;
 void *VAR_27;
 tpool_t *VAR_28;

 FUNC_20(VAR_13->poolname == ((void*)0) || VAR_13->guid == 0);
 FUNC_13(&VAR_24, ((void*)0));







 if (VAR_13->scan || VAR_13->paths != 0) {
  size_t VAR_29 = VAR_13->paths;
  const char * const *VAR_30 = (const char * const *)VAR_13->path;

  if (VAR_29 == 0)
   VAR_30 = FUNC_21(&VAR_29);

  if (FUNC_23(VAR_12, &VAR_24, &VAR_25, VAR_30, VAR_29) != 0)
   return (((void*)0));
 } else {
  if (FUNC_22(VAR_12, &VAR_24, &VAR_25) != 0)
   return (((void*)0));
 }






 VAR_28 = FUNC_16(1, 2 * FUNC_15(VAR_10), 0, ((void*)0));
 for (VAR_26 = FUNC_3(VAR_25); VAR_26;
     (VAR_26 = FUNC_4(VAR_25, VAR_26, VAR_0)))
  (void) FUNC_18(VAR_28, VAR_11, VAR_26);

 FUNC_19(VAR_28);
 FUNC_17(VAR_28);





 VAR_27 = ((void*)0);
 while ((VAR_26 = FUNC_2(VAR_25, &VAR_27)) != ((void*)0)) {
  if (VAR_26->rn_config != ((void*)0)) {
   nvlist_t *VAR_31 = VAR_26->rn_config;
   boolean_t VAR_32 = VAR_2;
   boolean_t VAR_33 = VAR_1;
   int VAR_34;






   if (VAR_13->poolname != ((void*)0) || VAR_13->guid != 0) {
    uint64_t VAR_35;
    VAR_33 = FUNC_10(VAR_31,
        VAR_9, &VAR_35) == 0 &&
        (VAR_35 == VAR_6 ||
        VAR_35 == VAR_5);
   }

   if (VAR_13->poolname != ((void*)0) && !VAR_33) {
    char *VAR_36;

    VAR_32 = FUNC_9(VAR_31,
        VAR_8, &VAR_36) == 0 &&
        FUNC_14(VAR_13->poolname, VAR_36) == 0;
   } else if (VAR_13->guid != 0 && !VAR_33) {
    uint64_t VAR_37;

    VAR_32 = FUNC_10(VAR_31,
        VAR_7, &VAR_37) == 0 &&
        VAR_13->guid == VAR_37;
   }
   if (VAR_32) {
    VAR_34 = FUNC_11(VAR_26->rn_name, VAR_4 | VAR_3);
    if (VAR_34 >= 0 || VAR_13->can_be_active) {
     if (VAR_34 >= 0)
      FUNC_5(VAR_34);
     FUNC_0(VAR_12, &VAR_15,
         VAR_26->rn_name, VAR_26->rn_order,
         VAR_26->rn_num_labels, VAR_31);
    }
   }
   FUNC_8(VAR_31);
  }
  FUNC_6(VAR_26->rn_name);
  FUNC_6(VAR_26);
 }
 FUNC_1(VAR_25);
 FUNC_6(VAR_25);
 FUNC_12(&VAR_24);

 VAR_14 = FUNC_7(VAR_12, &VAR_15, VAR_13->can_be_active, VAR_13->policy);

 for (VAR_16 = VAR_15.pools; VAR_16 != ((void*)0); VAR_16 = VAR_17) {
  VAR_17 = VAR_16->pe_next;
  for (VAR_18 = VAR_16->pe_vdevs; VAR_18 != ((void*)0); VAR_18 = VAR_19) {
   VAR_19 = VAR_18->ve_next;
   for (VAR_20 = VAR_18->ve_configs; VAR_20 != ((void*)0); VAR_20 = VAR_21) {
    VAR_21 = VAR_20->ce_next;
    FUNC_8(VAR_20->ce_config);
    FUNC_6(VAR_20);
   }
   FUNC_6(VAR_18);
  }
  FUNC_6(VAR_16);
 }

 for (VAR_22 = VAR_15.names; VAR_22 != ((void*)0); VAR_22 = VAR_23) {
  VAR_23 = VAR_22->ne_next;
  FUNC_6(VAR_22->ne_name);
  FUNC_6(VAR_22);
 }

 return (VAR_14);
}
