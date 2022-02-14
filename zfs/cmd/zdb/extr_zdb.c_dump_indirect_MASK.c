
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int zb_blkid; } ;
typedef TYPE_1__ zbookmark_phys_t ;
struct TYPE_9__ {int dn_objset; int dn_object; TYPE_3__* dn_phys; } ;
typedef TYPE_2__ dnode_t ;
struct TYPE_10__ {int dn_nblkptr; int * dn_blkptr; scalar_t__ dn_nlevels; } ;
typedef TYPE_3__ dnode_phys_t ;


 int FUNC_0 (TYPE_1__*,int ,int ,scalar_t__,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,TYPE_3__*,int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(dnode_t *VAR_0)
{
 dnode_phys_t *VAR_1 = VAR_0->dn_phys;
 int VAR_2;
 zbookmark_phys_t VAR_3;

 (void) FUNC_3("Indirect blocks:\n");

 FUNC_0(&VAR_3, FUNC_1(VAR_0->dn_objset),
     VAR_0->dn_object, VAR_1->dn_nlevels - 1, 0);
 for (VAR_2 = 0; VAR_2 < VAR_1->dn_nblkptr; VAR_2++) {
  VAR_3.zb_blkid = VAR_2;
  (void) FUNC_4(FUNC_2(VAR_0->dn_objset), VAR_1,
      &VAR_1->dn_blkptr[VAR_2], &VAR_3);
 }

 (void) FUNC_3("\n");
}
