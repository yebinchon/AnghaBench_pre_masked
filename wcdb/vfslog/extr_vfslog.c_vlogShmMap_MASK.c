
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
struct TYPE_4__ {int (* xShmMap ) (TYPE_3__*,int,int,int,void volatile**) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int,int,int,void volatile**) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,int ,int,int,int ,int) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static int FUNC_3(sqlite3_file *VAR_1,
                      int VAR_2,
                      int VAR_3,
                      int VAR_4,
                      void volatile **VAR_5)
{
    int VAR_6;
    sqlite3_uint64 VAR_7, VAR_8;
    VLogFile *VAR_9 = (VLogFile *) VAR_1;
    VAR_7 = FUNC_2();
    VAR_6 = VAR_9->pReal->pMethods->xShmMap(VAR_9->pReal, VAR_2, VAR_3, VAR_4, VAR_5);
    VAR_8 = FUNC_2() - VAR_7;
    FUNC_1(VAR_9->pLog, VAR_7, VAR_8, VAR_0, VAR_2, VAR_3, 0,
                 VAR_6);
    return VAR_6;
}
