
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int z3 ;
typedef int z2 ;
typedef int z1 ;
typedef int sqlite3_int64 ;
typedef int buf ;
typedef int VLogOp ;
struct TYPE_3__ {int flags; scalar_t__ zFilename; int gzMutex; int tmpOut; int gzOut; } ;
typedef TYPE_1__ VLogLog ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,int,int,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (char*,int,char*,int ,int ,int ,int,char*,char*,char*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int,char*,char*,int,...) ;

__attribute__((used)) static void FUNC_12(VLogLog *VAR_4,
                         sqlite3_int64 VAR_5,
                         sqlite3_int64 VAR_6,
                         VLogOp VAR_7,
                         sqlite3_int64 VAR_8,
                         sqlite3_int64 VAR_9,
                         const char *VAR_10,
                         int VAR_11
                         )
{
    if (!VAR_4 || (VAR_4->flags & (1 << VAR_7)) == 0)
        return;

    char VAR_12[40], VAR_13[40], VAR_14[1024];
    if (VAR_8 >= 0) {
        FUNC_11(sizeof(VAR_12), VAR_12, "%lld", VAR_8);
    } else {
        VAR_12[0] = 0;
    }
    if (VAR_9 >= 0) {
        FUNC_11(sizeof(VAR_13), VAR_13, "%lld", VAR_9);
    } else {
        VAR_13[0] = 0;
    }
    if (VAR_10) {
        FUNC_11(sizeof(VAR_14), VAR_14, "\"%.*w\"", sizeof(VAR_14) - 4, VAR_10);
    } else {
        VAR_14[0] = 0;
    }

    char VAR_15[2048];
    int VAR_16 = FUNC_8(VAR_15, sizeof(VAR_15), "%lld,%lld,%s,%d,%s,%s,%s,%d\n",
                       VAR_5, VAR_6, VAR_2[VAR_7], VAR_4->zFilename == 0,
                       VAR_12, VAR_13, VAR_14, VAR_11);

    FUNC_9(VAR_4->gzMutex);
    FUNC_5(VAR_15, 1, VAR_16, VAR_4->tmpOut);
    FUNC_0(VAR_4->tmpOut);
    FUNC_7(VAR_4->gzOut, VAR_15, VAR_16);
    if (FUNC_3(VAR_4->tmpOut) >= VAR_1) {
        FUNC_6(VAR_4->gzOut, VAR_3);
        FUNC_2(VAR_4->tmpOut, 0, VAR_0);
        FUNC_4(FUNC_1(VAR_4->tmpOut), 0);
    }
    FUNC_10(VAR_4->gzMutex);
}
