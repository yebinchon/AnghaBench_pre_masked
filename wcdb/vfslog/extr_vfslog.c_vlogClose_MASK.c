
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
struct TYPE_4__ {int (* xClose ) (TYPE_3__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,int ,int,int,int ,int) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static int FUNC_4(sqlite3_file *VAR_2)
{
    sqlite3_uint64 VAR_3, VAR_4;
    int VAR_5 = VAR_0;
    VLogFile *VAR_6 = (VLogFile *) VAR_2;

    VAR_3 = FUNC_3();
    if (VAR_6->pReal->pMethods) {
        VAR_5 = VAR_6->pReal->pMethods->xClose(VAR_6->pReal);
    }
    VAR_4 = FUNC_3() - VAR_3;
    FUNC_2(VAR_6->pLog, VAR_3, VAR_4, VAR_1, -1, -1, 0, VAR_5);
    FUNC_1(VAR_6->pLog);
    return VAR_5;
}
