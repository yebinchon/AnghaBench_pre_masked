
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* bt_crtxg; void* bt_txg; void* bt_gen; void* bt_offset; void* bt_dnodesize; void* bt_object; int bt_objset; int bt_magic; } ;
typedef TYPE_1__ ztest_block_tag_t ;
typedef void* uint64_t ;
typedef int objset_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(ztest_block_tag_t *VAR_1, objset_t *VAR_2, uint64_t VAR_3,
    uint64_t VAR_4, uint64_t VAR_5, uint64_t VAR_6, uint64_t VAR_7,
    uint64_t VAR_8)
{
 VAR_1->bt_magic = VAR_0;
 VAR_1->bt_objset = FUNC_0(VAR_2);
 VAR_1->bt_object = VAR_3;
 VAR_1->bt_dnodesize = VAR_4;
 VAR_1->bt_offset = VAR_5;
 VAR_1->bt_gen = VAR_6;
 VAR_1->bt_txg = VAR_7;
 VAR_1->bt_crtxg = VAR_8;
}
