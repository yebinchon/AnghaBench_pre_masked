
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ sqlite3_uint64 ;
typedef int sqlite3_file ;
struct TYPE_5__ {int pLog; TYPE_3__* pReal; } ;
typedef TYPE_2__ VLogFile ;
struct TYPE_6__ {TYPE_1__* pMethods; } ;
struct TYPE_4__ {int (* xSync ) (TYPE_3__*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,int ,int,int,int ,int) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static int FUNC_3(sqlite3_file *VAR_1, int VAR_2)
{
    int VAR_3;
    sqlite3_uint64 VAR_4, VAR_5;
    VLogFile *VAR_6 = (VLogFile *) VAR_1;
    VAR_4 = FUNC_2();
    VAR_3 = VAR_6->pReal->pMethods->xSync(VAR_6->pReal, VAR_2);
    VAR_5 = FUNC_2() - VAR_4;
    FUNC_1(VAR_6->pLog, VAR_4, VAR_5, VAR_0, VAR_2, -1, 0, VAR_3);
    return VAR_3;
}
