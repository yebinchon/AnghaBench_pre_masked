
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
struct TYPE_4__ {int (* xSectorSize ) (TYPE_3__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,int ,int,int,int ,int) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static int FUNC_3(sqlite3_file *VAR_1)
{
    int VAR_2;
    sqlite3_uint64 VAR_3, VAR_4;
    VLogFile *VAR_5 = (VLogFile *) VAR_1;
    VAR_3 = FUNC_2();
    VAR_2 = VAR_5->pReal->pMethods->xSectorSize(VAR_5->pReal);
    VAR_4 = FUNC_2() - VAR_3;
    FUNC_1(VAR_5->pLog, VAR_3, VAR_4, VAR_0, -1, -1, 0, VAR_2);
    return VAR_2;
}
