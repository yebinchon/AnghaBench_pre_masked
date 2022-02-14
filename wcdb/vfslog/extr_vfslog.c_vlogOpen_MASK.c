
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sqlite3_vfs ;
typedef scalar_t__ sqlite3_uint64 ;
typedef int sqlite3_int64 ;
struct TYPE_8__ {TYPE_3__* pMethods; } ;
typedef TYPE_1__ sqlite3_file ;
struct TYPE_9__ {scalar_t__ pLog; TYPE_1__* pReal; } ;
typedef TYPE_2__ VLogFile ;
struct TYPE_11__ {int (* xOpen ) (TYPE_5__*,char const*,TYPE_1__*,int,int*) ;} ;
struct TYPE_10__ {int iVersion; } ;


 TYPE_5__* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_5__*,char const*,TYPE_1__*,int,int*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__,int ,int,int,int ,int) ;
 TYPE_3__ VAR_5 ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static int FUNC_6(sqlite3_vfs *VAR_6,
                    const char *VAR_7,
                    sqlite3_file *VAR_8,
                    int VAR_9,
                    int *VAR_10)
{
    int VAR_11;
    sqlite3_uint64 VAR_12, VAR_13;
    sqlite3_int64 VAR_14;
    VLogFile *VAR_15 = (VLogFile *) VAR_8;

    VAR_15->pReal = (sqlite3_file *) &VAR_15[1];
    if ((VAR_9 & (VAR_1 | VAR_2 |
                  VAR_3)) != 0) {
        VAR_15->pLog = FUNC_3(VAR_7);
    } else {
        VAR_15->pLog = 0;
    }
    VAR_12 = FUNC_5();
    VAR_11 = FUNC_0(VAR_6)->xOpen(FUNC_0(VAR_6), VAR_7, VAR_15->pReal, VAR_9, VAR_10);
    VAR_13 = FUNC_5() - VAR_12;
    VAR_14 = VAR_10 ? *VAR_10 : -1;
    FUNC_4(VAR_15->pLog, VAR_12, VAR_13, VAR_4, VAR_9, VAR_14, 0, VAR_11);
    if (VAR_11 == VAR_0) {
        VAR_5.iVersion = VAR_15->pReal->pMethods->iVersion;
        VAR_8->pMethods = &VAR_5;
    } else {
        if (VAR_15->pLog)
            FUNC_2(VAR_15->pLog);
        VAR_15->pLog = 0;
    }
    return VAR_11;
}
