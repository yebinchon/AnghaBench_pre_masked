
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_5__* gme_ds; scalar_t__ raw; } ;
typedef TYPE_2__ guid_map_entry_t ;
typedef int ds_hold_flags_t ;
typedef TYPE_2__ avl_tree_t ;
struct TYPE_12__ {TYPE_1__* ds_objset; } ;
struct TYPE_10__ {int os_raw_receive; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,void**) ;
 int FUNC_2 (TYPE_5__*,int ,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_4(void *VAR_2)
{
 avl_tree_t *VAR_3 = VAR_2;
 void *VAR_4 = ((void*)0);
 guid_map_entry_t *VAR_5;

 while ((VAR_5 = FUNC_1(VAR_3, &VAR_4)) != ((void*)0)) {
  ds_hold_flags_t VAR_6 = VAR_1;

  if (VAR_5->raw) {
   VAR_5->gme_ds->ds_objset->os_raw_receive = VAR_0;
   VAR_6 &= ~VAR_1;
  }

  FUNC_2(VAR_5->gme_ds, VAR_6, VAR_5);
  FUNC_3(VAR_5, sizeof (guid_map_entry_t));
 }
 FUNC_0(VAR_3);
 FUNC_3(VAR_3, sizeof (avl_tree_t));
}
