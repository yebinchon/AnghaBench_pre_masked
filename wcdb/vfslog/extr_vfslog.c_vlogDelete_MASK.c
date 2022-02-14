
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vfs ;
typedef scalar_t__ sqlite3_uint64 ;
typedef int VLogLog ;
struct TYPE_3__ {int (* xDelete ) (TYPE_1__*,char const*,int) ;} ;


 TYPE_1__* FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,char const*,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*) ;
 int FUNC_4 (int *,scalar_t__,scalar_t__,int ,int,int,int ,int) ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static int FUNC_6(sqlite3_vfs *VAR_1, const char *VAR_2, int VAR_3)
{
    int VAR_4;
    sqlite3_uint64 VAR_5, VAR_6;
    VLogLog *VAR_7;
    VAR_5 = FUNC_5();
    VAR_4 = FUNC_0(VAR_1)->xDelete(FUNC_0(VAR_1), VAR_2, VAR_3);
    VAR_6 = FUNC_5() - VAR_5;
    VAR_7 = FUNC_3(VAR_2);
    FUNC_4(VAR_7, VAR_5, VAR_6, VAR_0, VAR_3, -1, 0, VAR_4);
    FUNC_2(VAR_7);
    return VAR_4;
}
