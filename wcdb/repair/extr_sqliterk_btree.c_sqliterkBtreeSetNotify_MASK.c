
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqliterk_btree_notify ;
struct TYPE_3__ {int notify; } ;
typedef TYPE_1__ sqliterk_btree ;



void FUNC_0(sqliterk_btree *VAR_0,
                            sqliterk_btree_notify *VAR_1)
{
    if (!VAR_0 || !VAR_1) {
        return;
    }
    VAR_0->notify = *VAR_1;
}
