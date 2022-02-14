
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int zio_cksum_t ;
struct TYPE_6__ {int * labels; } ;
typedef TYPE_1__ cksum_record_t ;
typedef int avl_tree_t ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 TYPE_1__* FUNC_2 (int *,int *) ;

__attribute__((used)) static cksum_record_t *
FUNC_3(avl_tree_t *VAR_1, zio_cksum_t *VAR_2, int VAR_3)
{
 cksum_record_t *VAR_4;

 VAR_4 = FUNC_2(VAR_1, VAR_2);
 if (VAR_4) {
  VAR_4->labels[VAR_3] = VAR_0;
 } else {
  VAR_4 = FUNC_1(VAR_2, VAR_3);
  FUNC_0(VAR_1, VAR_4);
 }

 return (VAR_4);
}
