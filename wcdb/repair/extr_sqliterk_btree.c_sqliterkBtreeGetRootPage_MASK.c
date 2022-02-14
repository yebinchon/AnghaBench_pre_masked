
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqliterk_page ;
struct TYPE_3__ {int * rootpage; } ;
typedef TYPE_1__ sqliterk_btree ;



sqliterk_page *FUNC_0(sqliterk_btree *VAR_0)
{
    if (!VAR_0) {
        return ((void*)0);
    }
    return VAR_0->rootpage;
}
