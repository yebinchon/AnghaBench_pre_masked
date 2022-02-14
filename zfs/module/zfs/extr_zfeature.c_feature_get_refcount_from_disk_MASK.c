
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fi_flags; int fi_guid; } ;
typedef TYPE_1__ zfeature_info_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_6__ {scalar_t__ spa_feat_for_write_obj; scalar_t__ spa_feat_for_read_obj; int spa_meta_objset; } ;
typedef TYPE_2__ spa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,scalar_t__,int ,int,int,scalar_t__*) ;

int
FUNC_2(spa_t *VAR_3, zfeature_info_t *VAR_4,
    uint64_t *VAR_5)
{
 int VAR_6;
 uint64_t VAR_7;
 uint64_t VAR_8 = (VAR_4->fi_flags & VAR_2) ?
     VAR_3->spa_feat_for_write_obj : VAR_3->spa_feat_for_read_obj;





 if (VAR_8 == 0)
  return (FUNC_0(VAR_1));

 VAR_6 = FUNC_1(VAR_3->spa_meta_objset, VAR_8,
     VAR_4->fi_guid, sizeof (uint64_t), 1, &VAR_7);
 if (VAR_6 != 0) {
  if (VAR_6 == VAR_0)
   return (FUNC_0(VAR_1));
  else
   return (VAR_6);
 }
 *VAR_5 = VAR_7;
 return (0);
}
