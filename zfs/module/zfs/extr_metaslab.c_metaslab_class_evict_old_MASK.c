
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int multilist_t ;
typedef int multilist_sublist_t ;
struct TYPE_8__ {scalar_t__ ms_selected_txg; scalar_t__ ms_selected_time; int ms_lock; int ms_class_txg_node; } ;
typedef TYPE_1__ metaslab_t ;
struct TYPE_9__ {int * mc_metaslab_txg_list; } ;
typedef TYPE_2__ metaslab_class_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int *) ;
 int * FUNC_6 (int *,int) ;
 TYPE_1__* FUNC_7 (int *,TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void
FUNC_11(metaslab_class_t *VAR_2, uint64_t VAR_3)
{
 multilist_t *VAR_4 = VAR_2->mc_metaslab_txg_list;
 for (int VAR_5 = 0; VAR_5 < FUNC_3(VAR_4); VAR_5++) {
  multilist_sublist_t *VAR_6 = FUNC_6(VAR_4, VAR_5);
  metaslab_t *VAR_7 = FUNC_5(VAR_6);
  FUNC_8(VAR_6);
  while (VAR_7 != ((void*)0)) {
   FUNC_9(&VAR_7->ms_lock);







   if (!FUNC_4(&VAR_7->ms_class_txg_node)) {
    FUNC_10(&VAR_7->ms_lock);
    VAR_5--;
    break;
   }
   VAR_6 = FUNC_6(VAR_4, VAR_5);
   metaslab_t *VAR_8 = FUNC_7(VAR_6, VAR_7);
   FUNC_8(VAR_6);
   if (VAR_3 >
       VAR_7->ms_selected_txg + VAR_0 &&
       FUNC_1() > VAR_7->ms_selected_time +
       (uint64_t)FUNC_0(VAR_1)) {
    FUNC_2(VAR_7, VAR_3);
   } else {





    FUNC_10(&VAR_7->ms_lock);
    break;
   }
   FUNC_10(&VAR_7->ms_lock);
   VAR_7 = VAR_8;
  }
 }
}
