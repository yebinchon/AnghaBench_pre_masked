
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3_mutex ;
typedef int buf ;
struct TYPE_7__ {int nFilename; char* zFilename; int lastReadOfs; int lastWriteOfs; int nRef; struct TYPE_7__* pNext; struct TYPE_7__** ppPrev; void* gzMutex; scalar_t__ gzOut; scalar_t__ tmpOut; int flags; } ;
typedef TYPE_1__ VLogLog ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int,int,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (scalar_t__,char*,int) ;
 int FUNC_8 (char*,char const*,int) ;
 int FUNC_9 (TYPE_1__*,int ,int) ;
 int FUNC_10 (TYPE_1__*) ;
 TYPE_1__* FUNC_11 (int) ;
 void* FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (void*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int,char*,char*,int,char const*) ;
 scalar_t__ FUNC_17 (char*,char const*) ;
 scalar_t__ FUNC_18 (char const*,char*) ;
 scalar_t__ FUNC_19 (char const*) ;
 int VAR_5 ;

__attribute__((used)) static VLogLog *FUNC_20(const char *VAR_6)
{
    int VAR_7 = (int) FUNC_19(VAR_6);
    int VAR_8 = 0;
    sqlite3_mutex *VAR_9;
    VLogLog *VAR_10, *VAR_11;
    if (VAR_7 > 4 && FUNC_18(VAR_6 + VAR_7 - 4, "-wal") == 0) {
        VAR_7 -= 4;
        VAR_8 = 1;
    }

    if (VAR_7 > 8 && FUNC_18(VAR_6 + VAR_7 - 8, "-journal") == 0) {
        VAR_7 -= 8;
        VAR_8 = 1;
    } else if (VAR_7 > 12 &&
               FUNC_17("-mj??????9??", VAR_6 + VAR_7 - 12) == 0) {
        return 0;
    }

    VAR_11 = FUNC_11(sizeof(*VAR_10) * 2 + VAR_7 + 60);
    if (VAR_11 == 0)
        return 0;
    VAR_9 = FUNC_12(VAR_3);
    FUNC_13(VAR_9);
    for (VAR_10 = VAR_4; VAR_10; VAR_10 = VAR_10->pNext) {
        if (VAR_10->nFilename == VAR_7 &&
            !FUNC_8(VAR_10->zFilename, VAR_6, VAR_7)) {
            break;
        }
    }

    if (VAR_10 == 0) {
        VAR_10 = VAR_11;
        VAR_11 = 0;
        FUNC_9(VAR_10, 0, sizeof(*VAR_10) * 2);
        VAR_10->zFilename = (char *) &VAR_10[2];
        FUNC_16(VAR_7 + 60, VAR_10->zFilename, "%.*s-vfslog", VAR_7,
                         VAR_6);

        char *VAR_12 = FUNC_0(VAR_7 + 60);
        FUNC_16(VAR_7 + 60, VAR_12, "%.*s-vfslo1", VAR_7, VAR_6);

        VAR_10->tmpOut = FUNC_2(VAR_12, "ab+");
        VAR_10->gzOut = FUNC_6(VAR_10->zFilename, "ab");
        VAR_10->gzMutex = FUNC_12(VAR_2);
        if (!VAR_10->tmpOut || !VAR_10->gzOut || !VAR_10->gzMutex) {
            if (VAR_10->tmpOut)
                FUNC_1(VAR_10->tmpOut);
            if (VAR_10->gzOut)
                FUNC_5(VAR_10->gzOut);
            if (VAR_10->gzMutex)
                FUNC_14(VAR_10->gzMutex);

            FUNC_15(VAR_9);
            FUNC_10(VAR_10);
            return 0;
        }


        if (FUNC_4(VAR_10->tmpOut, 0, VAR_0) > 0) {
            FUNC_4(VAR_10->tmpOut, 0, VAR_1);
            char VAR_13[1024];
            int VAR_14;
            while ((VAR_14 = FUNC_3(VAR_13, 1, sizeof(VAR_13), VAR_10->tmpOut)) >= 0) {
                FUNC_7(VAR_10->gzOut, VAR_13, VAR_14);
            }
            FUNC_4(VAR_10->tmpOut, 0, VAR_0);
        }

        VAR_10->nFilename = VAR_7;
        VAR_10->flags = VAR_5;
        VAR_10[1].tmpOut = VAR_10[0].tmpOut;
        VAR_10[1].gzOut = VAR_10[0].gzOut;
        VAR_10[1].gzMutex = VAR_10[0].gzMutex;
        VAR_10->ppPrev = &VAR_4;
        if (VAR_4)
            VAR_4->ppPrev = &VAR_10->pNext;
        VAR_10->pNext = VAR_4;
        VAR_4 = VAR_10;
    }
    FUNC_15(VAR_9);
    if (VAR_11) {
        FUNC_10(VAR_11);
    }
    if (VAR_10)
        VAR_10 += VAR_8;
    VAR_10->nRef++;

    VAR_10->lastReadOfs = -1;
    VAR_10->lastWriteOfs = -1;
    return VAR_10;
}
