
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct kcf_sreq_node {int dummy; } ;
struct kcf_context {int dummy; } ;
struct kcf_areq_node {int dummy; } ;
typedef int kstat_named_t ;
typedef int kcf_stats_t ;
struct TYPE_9__ {int rt_curid; int rt_lock; } ;
typedef TYPE_1__ kcf_reqid_table_t ;
typedef int kcf_global_swq_t ;
struct TYPE_11__ {int gs_maxjobs; int * gs_last; int gs_first; scalar_t__ gs_njobs; int gs_cv; int gs_lock; } ;
struct TYPE_10__ {int ks_update; int * ks_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int *,int ,int *) ;
 TYPE_5__* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_2__* VAR_16 ;
 int VAR_17 ;
 TYPE_1__** VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 () ;
 TYPE_5__* FUNC_2 (int,int ) ;
 void* FUNC_3 (char*,int,int,int ,int ,int *,int *,int *,int ) ;
 TYPE_1__* FUNC_4 (int,int ) ;
 TYPE_2__* FUNC_5 (char*,int ,char*,char*,int ,int,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *,int *,int ,int *) ;
 int VAR_22 ;
 int VAR_23 ;

void
FUNC_8(void)
{
 int VAR_24;
 kcf_reqid_table_t *VAR_25;
 VAR_19 = FUNC_3("kcf_sreq_cache",
     sizeof (struct kcf_sreq_node), 64, VAR_20,
     VAR_21, ((void*)0), ((void*)0), ((void*)0), 0);

 VAR_8 = FUNC_3("kcf_areq_cache",
     sizeof (struct kcf_areq_node), 64, VAR_9,
     VAR_10, ((void*)0), ((void*)0), ((void*)0), 0);

 VAR_11 = FUNC_3("kcf_context_cache",
     sizeof (struct kcf_context), 64, VAR_12,
     VAR_13, ((void*)0), ((void*)0), ((void*)0), 0);

 VAR_7 = FUNC_2(sizeof (kcf_global_swq_t), VAR_1);

 FUNC_7(&VAR_7->gs_lock, ((void*)0), VAR_4, ((void*)0));
 FUNC_0(&VAR_7->gs_cv, ((void*)0), VAR_0, ((void*)0));
 VAR_7->gs_njobs = 0;
 VAR_7->gs_maxjobs = VAR_15 * VAR_6;
 VAR_7->gs_first = *(VAR_7->gs_last = ((void*)0));


 for (VAR_24 = 0; VAR_24 < VAR_5; VAR_24++) {
  VAR_25 = FUNC_4(sizeof (kcf_reqid_table_t), VAR_1);
  VAR_18[VAR_24] = VAR_25;
  FUNC_7(&VAR_25->rt_lock, ((void*)0), VAR_4, ((void*)0));
  VAR_25->rt_curid = VAR_24;
 }


 FUNC_1();


 FUNC_7(&VAR_23, ((void*)0), VAR_4, ((void*)0));
 FUNC_0(&VAR_22, ((void*)0), VAR_0, ((void*)0));


 VAR_16 = FUNC_5("kcf", 0, "framework_stats", "crypto",
     VAR_3, sizeof (kcf_stats_t) / sizeof (kstat_named_t),
     VAR_2);

 if (VAR_16 != ((void*)0)) {
  VAR_16->ks_data = &VAR_14;
  VAR_16->ks_update = VAR_17;
  FUNC_6(VAR_16);
 }
}
