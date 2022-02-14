
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zbookmark_phys_t ;
typedef int uint64_t ;
typedef int traverse_data_t ;
struct TYPE_4__ {int dn_nblkptr; int dn_flags; int * dn_blkptr; scalar_t__ dn_nlevels; } ;
typedef TYPE_1__ dnode_phys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int *,int ,int ,scalar_t__,int) ;
 int FUNC_2 (int *,int *,int *) ;

__attribute__((used)) static void
FUNC_3(traverse_data_t *VAR_2, const dnode_phys_t *VAR_3,
    uint64_t VAR_4, uint64_t VAR_5)
{
 int VAR_6;
 zbookmark_phys_t VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_3->dn_nblkptr; VAR_6++) {
  FUNC_1(&VAR_7, VAR_4, VAR_5, VAR_3->dn_nlevels - 1, VAR_6);
  FUNC_2(VAR_2, &VAR_3->dn_blkptr[VAR_6], &VAR_7);
 }

 if (VAR_3->dn_flags & VAR_1) {
  FUNC_1(&VAR_7, VAR_4, VAR_5, 0, VAR_0);
  FUNC_2(VAR_2, FUNC_0(VAR_3), &VAR_7);
 }
}
