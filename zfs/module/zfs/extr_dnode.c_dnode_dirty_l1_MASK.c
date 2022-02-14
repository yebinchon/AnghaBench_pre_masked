
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int dnode_t ;
typedef int dmu_tx_t ;
struct TYPE_4__ {int db; } ;
typedef TYPE_1__ dmu_buf_impl_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void
FUNC_3(dnode_t *VAR_1, uint64_t VAR_2, dmu_tx_t *VAR_3)
{
 dmu_buf_impl_t *VAR_4 = FUNC_0(VAR_1, 1, VAR_2, VAR_0);
 if (VAR_4 != ((void*)0)) {
  FUNC_2(&VAR_4->db, VAR_3);
  FUNC_1(VAR_4, VAR_0);
 }
}
