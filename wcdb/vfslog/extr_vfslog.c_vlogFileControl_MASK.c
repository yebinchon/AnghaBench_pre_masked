
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ sqlite3_uint64 ;
typedef int sqlite3_int64 ;
typedef int sqlite3_file ;
typedef int VLogStat ;
struct TYPE_6__ {int pLog; TYPE_4__* pReal; } ;
typedef TYPE_2__ VLogFile ;
struct TYPE_7__ {TYPE_1__* pMethods; } ;
struct TYPE_5__ {int (* xFileControl ) (TYPE_4__*,int,void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_0 (char*,char*) ;
 int FUNC_1 (TYPE_4__*,int,void*) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__,int ,int,int,char const*,int) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static int FUNC_5(sqlite3_file *VAR_7, int VAR_8, void *VAR_9)
{
    VLogFile *VAR_10 = (VLogFile *) VAR_7;
    if (VAR_8 == VAR_3) {
        return FUNC_2(VAR_10, (VLogStat *) VAR_9);
    }

    sqlite3_uint64 VAR_11, VAR_12;
    int VAR_13;
    VAR_11 = FUNC_4();
    VAR_13 = VAR_10->pReal->pMethods->xFileControl(VAR_10->pReal, VAR_8, VAR_9);
    if (VAR_8 == VAR_4 && VAR_13 == VAR_5) {
        *(char **) VAR_9 = FUNC_0("vlog/%z", *(char **) VAR_9);
    }
    VAR_12 = FUNC_4() - VAR_11;
    if (VAR_8 == VAR_2) {
        FUNC_3(VAR_10->pLog, VAR_11, VAR_12, VAR_6, VAR_8, -1,
                     VAR_9, VAR_13);
    } else if (VAR_8 == VAR_0) {
        const char **VAR_14 = (const char **) VAR_9;
        FUNC_3(VAR_10->pLog, VAR_11, VAR_12, VAR_6, VAR_8, -1,
                     VAR_14[1], VAR_13);
    } else if (VAR_8 == VAR_1) {
        sqlite3_int64 VAR_15 = *(sqlite3_int64 *) VAR_9;
        FUNC_3(VAR_10->pLog, VAR_11, VAR_12, VAR_6, VAR_8, VAR_15, 0,
                     VAR_13);
    } else {
        FUNC_3(VAR_10->pLog, VAR_11, VAR_12, VAR_6, VAR_8, -1, 0,
                     VAR_13);
    }
    return VAR_13;
}
