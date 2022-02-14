
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int values; int overflowPages; scalar_t__ rowid; } ;
typedef TYPE_1__ sqliterk_column ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

int FUNC_1(sqliterk_column *VAR_2)
{
    if (!VAR_2) {
        return VAR_0;
    }
    VAR_2->rowid = 0;
    FUNC_0(VAR_2->overflowPages);
    FUNC_0(VAR_2->values);
    return VAR_1;
}
