
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ zb_object; scalar_t__ zb_blkid; scalar_t__ zb_level; scalar_t__ zb_objset; } ;
typedef TYPE_2__ zbookmark_phys_t ;
typedef int longlong_t ;
typedef scalar_t__ int64_t ;
struct TYPE_15__ {scalar_t__ zb_object; } ;
struct TYPE_12__ {TYPE_5__ scn_bookmark; } ;
struct TYPE_14__ {TYPE_1__ scn_phys; } ;
typedef TYPE_3__ dsl_scan_t ;
typedef int dnode_phys_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*) ;
 scalar_t__ FUNC_1 (TYPE_2__ const*,TYPE_5__*,int) ;
 int FUNC_2 (TYPE_5__*,int) ;
 int FUNC_3 (char*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int const*,TYPE_2__ const*,TYPE_5__*) ;

__attribute__((used)) static boolean_t
FUNC_5(dsl_scan_t *VAR_2, const dnode_phys_t *VAR_3,
    const zbookmark_phys_t *VAR_4)
{



 if (!FUNC_0(&VAR_2->scn_phys.scn_bookmark) &&
     (int64_t)VAR_4->zb_object >= 0) {




  if (FUNC_4(VAR_3, VAR_4,
      &VAR_2->scn_phys.scn_bookmark))
   return (VAR_1);







  if (FUNC_1(VAR_4, &VAR_2->scn_phys.scn_bookmark, sizeof (*VAR_4)) == 0 ||
      VAR_4->zb_object > VAR_2->scn_phys.scn_bookmark.zb_object) {
   FUNC_3("resuming at %llx/%llx/%llx/%llx\n",
       (longlong_t)VAR_4->zb_objset,
       (longlong_t)VAR_4->zb_object,
       (longlong_t)VAR_4->zb_level,
       (longlong_t)VAR_4->zb_blkid);
   FUNC_2(&VAR_2->scn_phys.scn_bookmark, sizeof (*VAR_4));
  }
 }
 return (VAR_0);
}
