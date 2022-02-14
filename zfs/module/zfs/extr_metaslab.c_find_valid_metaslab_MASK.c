
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int zio_alloc_list_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_15__ {scalar_t__ ms_disabled; int ms_allocator; int ms_primary; scalar_t__ ms_start; int ms_weight; scalar_t__ ms_condensing; } ;
typedef TYPE_1__ metaslab_t ;
struct TYPE_16__ {int mg_metaslab_tree; } ;
typedef TYPE_2__ metaslab_group_t ;
typedef int dva_t ;
typedef int boolean_t ;
typedef int avl_tree_t ;
typedef int avl_index_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int *,TYPE_1__*,int *) ;
 TYPE_1__* FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_5 (int *,TYPE_2__*,TYPE_1__*,scalar_t__,int,int ,int) ;

__attribute__((used)) static metaslab_t *
FUNC_6(metaslab_group_t *VAR_3, uint64_t VAR_4,
    dva_t *VAR_5, int VAR_6, boolean_t VAR_7, uint64_t VAR_8, int VAR_9,
    boolean_t VAR_10, zio_alloc_list_t *VAR_11, metaslab_t *VAR_12,
    boolean_t *VAR_13)
{
 avl_index_t VAR_14;
 avl_tree_t *VAR_15 = &VAR_3->mg_metaslab_tree;
 metaslab_t *VAR_16 = FUNC_1(VAR_15, VAR_12, &VAR_14);
 if (VAR_16 == ((void*)0))
  VAR_16 = FUNC_2(VAR_15, VAR_14, VAR_0);

 for (; VAR_16 != ((void*)0); VAR_16 = FUNC_0(VAR_15, VAR_16)) {
  int VAR_17;
  if (!FUNC_4(VAR_16, VAR_8, VAR_10)) {
   FUNC_5(VAR_11, VAR_3, VAR_16, VAR_8, VAR_6,
       VAR_2, VAR_9);
   continue;
  }





  if (VAR_16->ms_condensing || VAR_16->ms_disabled > 0)
   continue;

  *VAR_13 = VAR_16->ms_allocator != -1;







  if (VAR_4 == VAR_1 || *VAR_13)
   break;

  for (VAR_17 = 0; VAR_17 < VAR_6; VAR_17++) {
   if (VAR_7 &&
       !FUNC_3(VAR_16, &VAR_5[VAR_17]))
    break;
  }
  if (VAR_17 == VAR_6)
   break;
 }

 if (VAR_16 != ((void*)0)) {
  VAR_12->ms_weight = VAR_16->ms_weight;
  VAR_12->ms_start = VAR_16->ms_start + 1;
  VAR_12->ms_allocator = VAR_16->ms_allocator;
  VAR_12->ms_primary = VAR_16->ms_primary;
 }
 return (VAR_16);
}
