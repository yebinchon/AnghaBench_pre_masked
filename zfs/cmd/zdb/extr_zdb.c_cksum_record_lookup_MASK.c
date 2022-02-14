
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zio_cksum_t ;
struct TYPE_5__ {int cksum; } ;
typedef TYPE_1__ cksum_record_t ;
typedef int avl_tree_t ;
typedef int avl_index_t ;


 TYPE_1__* FUNC_0 (int *,TYPE_1__*,int *) ;

__attribute__((used)) static cksum_record_t *
FUNC_1(avl_tree_t *VAR_0, zio_cksum_t *VAR_1)
{
 cksum_record_t VAR_2 = { .cksum = *VAR_1 };
 avl_index_t VAR_3;

 return (FUNC_0(VAR_0, &VAR_2, &VAR_3));
}
