
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqliterk_btree_type ;
struct TYPE_3__ {int type; } ;
typedef TYPE_1__ sqliterk_btree ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

int FUNC_1(sqliterk_btree *VAR_2, sqliterk_btree_type VAR_3)
{
    if (!VAR_2) {
        return VAR_0;
    }
    if (FUNC_0(VAR_2->type)) {

        return VAR_0;
    }
    VAR_2->type = VAR_3;
    return VAR_1;
}
