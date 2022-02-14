
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vfs ;
typedef int sqlite3_int64 ;
struct TYPE_3__ {int (* xCurrentTimeInt64 ) (TYPE_1__*,int *) ;} ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_2(sqlite3_vfs *VAR_0, sqlite3_int64 *VAR_1)
{
    return FUNC_0(VAR_0)->xCurrentTimeInt64(FUNC_0(VAR_0), VAR_1);
}
