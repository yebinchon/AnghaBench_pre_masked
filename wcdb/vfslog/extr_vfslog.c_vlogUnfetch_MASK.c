
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ sqlite3_uint64 ;
typedef int sqlite3_int64 ;
typedef int sqlite3_file ;
struct TYPE_5__ {int pLog; TYPE_3__* pReal; } ;
typedef TYPE_2__ VLogFile ;
struct TYPE_6__ {TYPE_1__* pMethods; } ;
struct TYPE_4__ {int (* xUnfetch ) (TYPE_3__*,int ,void*) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,void*) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,int ,int ,int,int ,int) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static int FUNC_3(sqlite3_file *VAR_1, sqlite3_int64 VAR_2, void *VAR_3)
{
    int VAR_4;
    sqlite3_uint64 VAR_5, VAR_6;
    VLogFile *VAR_7 = (VLogFile *) VAR_1;
    VAR_5 = FUNC_2();
    VAR_4 = VAR_7->pReal->pMethods->xUnfetch(VAR_7->pReal, VAR_2, VAR_3);
    VAR_6 = FUNC_2() - VAR_5;
    FUNC_1(VAR_7->pLog, VAR_5, VAR_6, VAR_0, VAR_2, -1, 0, VAR_4);
    return VAR_4;
}
