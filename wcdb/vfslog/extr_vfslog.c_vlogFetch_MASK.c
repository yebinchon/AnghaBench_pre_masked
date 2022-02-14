
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
struct TYPE_4__ {int (* xFetch ) (TYPE_3__*,int ,int,void**) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,int,void**) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,int ,int ,int,char const*,int) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static int
FUNC_3(sqlite3_file *VAR_1, sqlite3_int64 VAR_2, int VAR_3, void **VAR_4)
{
    int VAR_5;
    sqlite3_uint64 VAR_6, VAR_7;
    VLogFile *VAR_8 = (VLogFile *) VAR_1;
    VAR_6 = FUNC_2();
    VAR_5 = VAR_8->pReal->pMethods->xFetch(VAR_8->pReal, VAR_2, VAR_3, VAR_4);
    VAR_7 = FUNC_2() - VAR_6;
    const char *VAR_9 = VAR_4 ? "OK" : "Failed";
    FUNC_1(VAR_8->pLog, VAR_6, VAR_7, VAR_0, VAR_2, VAR_3, VAR_9,
                 VAR_5);
    return VAR_5;
}
