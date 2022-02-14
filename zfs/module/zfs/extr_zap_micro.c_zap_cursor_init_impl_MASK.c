
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zc_prefetch; scalar_t__ zc_cd; scalar_t__ zc_hash; void* zc_serialized; void* zc_zapobj; int * zc_leaf; int * zc_zap; int * zc_objset; } ;
typedef TYPE_1__ zap_cursor_t ;
typedef void* uint64_t ;
typedef int objset_t ;
typedef int boolean_t ;



__attribute__((used)) static void
FUNC_0(zap_cursor_t *VAR_0, objset_t *VAR_1, uint64_t VAR_2,
    uint64_t VAR_3, boolean_t VAR_4)
{
 VAR_0->zc_objset = VAR_1;
 VAR_0->zc_zap = ((void*)0);
 VAR_0->zc_leaf = ((void*)0);
 VAR_0->zc_zapobj = VAR_2;
 VAR_0->zc_serialized = VAR_3;
 VAR_0->zc_hash = 0;
 VAR_0->zc_cd = 0;
 VAR_0->zc_prefetch = VAR_4;
}
