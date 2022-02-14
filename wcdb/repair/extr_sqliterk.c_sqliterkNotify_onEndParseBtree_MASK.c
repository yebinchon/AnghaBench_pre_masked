
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqliterk_table ;
typedef int sqliterk_btree ;
struct TYPE_5__ {int (* onEndParseTable ) (TYPE_2__*,int *) ;} ;
struct TYPE_6__ {TYPE_1__ notify; } ;
typedef TYPE_2__ sqliterk ;


 int FUNC_0 (TYPE_2__*,int *) ;

__attribute__((used)) static void
FUNC_1(sqliterk *VAR_0, sqliterk_btree *VAR_1, int VAR_2)
{
    if (VAR_0->notify.onEndParseTable) {
        VAR_0->notify.onEndParseTable(VAR_0, (sqliterk_table *) VAR_1);
    }
}
