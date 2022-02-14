
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zStr ;
typedef int sqlite_int64 ;
typedef scalar_t__ sqlite3_uint64 ;
typedef int sqlite3_file ;
struct TYPE_6__ {TYPE_3__* pLog; TYPE_4__* pReal; } ;
typedef TYPE_2__ VLogFile ;
struct TYPE_8__ {TYPE_1__* pMethods; } ;
struct TYPE_7__ {int lastReadOfs; int gzMutex; scalar_t__ zFilename; } ;
struct TYPE_5__ {int (* xRead ) (TYPE_4__*,void*,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (unsigned char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,char*,char*,unsigned int) ;
 int FUNC_4 (TYPE_4__*,void*,int,int) ;
 int FUNC_5 (TYPE_3__*,scalar_t__,scalar_t__,int ,int,int,char*,int) ;
 int FUNC_6 (void*,int,char*) ;
 scalar_t__ FUNC_7 () ;

__attribute__((used)) static int
FUNC_8(sqlite3_file *VAR_3, void *VAR_4, int VAR_5, sqlite_int64 VAR_6)
{
    int VAR_7;
    sqlite3_uint64 VAR_8, VAR_9;
    VLogFile *VAR_10 = (VLogFile *) VAR_3;

    VAR_8 = FUNC_7();
    VAR_7 = VAR_10->pReal->pMethods->xRead(VAR_10->pReal, VAR_4, VAR_5, VAR_6);
    VAR_9 = FUNC_7() - VAR_8;

    if (VAR_7 == VAR_0 && VAR_10->pLog && VAR_10->pLog->zFilename && VAR_6 <= 24 &&
        VAR_6 + VAR_5 >= 28) {

        unsigned char *VAR_11 = ((unsigned char *) VAR_4) + (24 - VAR_6);
        unsigned VAR_12, VAR_13 = -1;
        char *VAR_14 = 0;
        char VAR_15[12];
        VAR_12 = FUNC_0(VAR_11);
        if (VAR_6 + VAR_5 >= 40) {
            VAR_14 = VAR_15;
            FUNC_3(sizeof(VAR_15), VAR_15, "%d", FUNC_0(VAR_11 + 8));
            VAR_13 = FUNC_0(VAR_11 + 12);
        }


        FUNC_5(VAR_10->pLog, VAR_8, VAR_9, VAR_1, VAR_12,
                     VAR_13, VAR_14, 0);
    } else {
        char VAR_16[40];
        if (VAR_7 == VAR_0) {
            FUNC_6(VAR_4, VAR_5, VAR_16);
        } else {
            VAR_16[0] = 0;
        }


        FUNC_1(VAR_10->pLog->gzMutex);
        VAR_10->pLog->lastReadOfs = VAR_6;
        FUNC_2(VAR_10->pLog->gzMutex);

        FUNC_5(VAR_10->pLog, VAR_8, VAR_9, VAR_2, VAR_5, VAR_6, VAR_16,
                     VAR_7);
    }
    return VAR_7;
}
