
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int sqlite3_stmt ;
struct TYPE_6__ {int total_out; int total_in; } ;
struct TYPE_7__ {int succ_count; TYPE_1__ zstrm; int db; int fail_count; scalar_t__ canceled; } ;
typedef TYPE_2__ mm_recover_ctx ;
typedef int int64_t ;
typedef int databuf ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (int,char*,char*) ;
 int FUNC_6 (int,char*,int ) ;
 int FUNC_7 (int,char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (TYPE_2__*,...) ;
 int FUNC_9 (TYPE_2__*,int *,int) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (int *,int,char*,char*,int (*) (char*)) ;
 int FUNC_13 (int *,int,double) ;
 int FUNC_14 (int *,int,int ) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *,int,char*,char*,int (*) (char*)) ;
 int FUNC_17 (int ,char*,int ,int ,char**) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (int ,char*,int ,int **,int *) ;
 int FUNC_21 (int *) ;
 char* FUNC_22 (int *) ;
 int FUNC_23 (int *) ;

__attribute__((used)) static int FUNC_24(mm_recover_ctx *VAR_5, int VAR_6)
{
    int VAR_7;
    uint8_t VAR_8;
    uint8_t VAR_9;
    uint16_t VAR_10;
    char *VAR_11 = ((void*)0);
    char *VAR_12 = ((void*)0);
    sqlite3_stmt *VAR_13 = ((void*)0);
    int VAR_14;
    char *VAR_15 = ((void*)0);
    char VAR_16[8192];

    while (!VAR_5->canceled) {
        VAR_7 = FUNC_8(VAR_5, &VAR_8, 1);
        if (VAR_7 == 0)
            return VAR_2;
        else if (VAR_7 != 1)
            return VAR_1;

        switch (VAR_8) {
            case 130:
                if (VAR_11 != ((void*)0))
                    FUNC_0(VAR_8, "Internal error.");
                if ((VAR_7 = FUNC_8(VAR_5, &VAR_10, 2)) != 2)
                    FUNC_4(VAR_8, 2, VAR_7);

                VAR_11 = (char *) FUNC_11((VAR_10 + 1) * 65536);
                if (!VAR_11)
                    FUNC_3(VAR_8, (VAR_10 + 1) * 65536);

                if ((VAR_7 = FUNC_8(VAR_5, VAR_11, VAR_10 * 65536)) !=
                    VAR_10 * 65536)
                    FUNC_4(VAR_8, VAR_10 * 65536, VAR_7);

                VAR_12 = VAR_11;

                break;

            case 129:
                if ((VAR_7 = FUNC_8(VAR_5, &VAR_10, 2)) != 2)
                    FUNC_4(VAR_8, 2, VAR_7);

                if (!VAR_12) {
                    if (VAR_10 < sizeof(VAR_16))
                        VAR_11 = VAR_16;
                    else {
                        VAR_11 = (char *) FUNC_11(VAR_10 + 1);
                        if (!VAR_11)
                            FUNC_3(VAR_8, VAR_10 + 1);
                    }
                    VAR_12 = VAR_11;
                }

                if ((VAR_7 = FUNC_8(VAR_5, VAR_12, VAR_10)) != VAR_10)
                    FUNC_4(VAR_8, VAR_10, VAR_7);
                VAR_12[VAR_10] = '\0';

                VAR_7 = FUNC_17(VAR_5->db, VAR_11, 0, 0, &VAR_15);
                if (VAR_7 != VAR_3) {
                    FUNC_5(VAR_8, VAR_11, VAR_15);
                    if (VAR_6)
                        goto bail;

                    FUNC_19(VAR_15);
                    VAR_5->fail_count++;
                } else
                    VAR_5->succ_count++;


                if (VAR_11 != VAR_16)
                    FUNC_10(VAR_11);
                VAR_12 = VAR_11 = ((void*)0);
                break;

            case 128:
                if ((VAR_7 = FUNC_8(VAR_5, &VAR_10, 2)) != 2)
                    FUNC_4(VAR_8, 2, VAR_7);

                if (!VAR_12) {
                    if (VAR_10 < sizeof(VAR_16))
                        VAR_11 = VAR_16;
                    else {
                        VAR_11 = (char *) FUNC_11(VAR_10 + 1);
                        if (!VAR_11)
                            FUNC_3(VAR_8, VAR_10 + 1);
                    }
                    VAR_12 = VAR_11;
                }
                if ((VAR_7 = FUNC_8(VAR_5, VAR_12, VAR_10)) != VAR_10)
                    FUNC_4(VAR_8, VAR_10, VAR_7);
                VAR_12[VAR_10] = '\0';

                VAR_7 = FUNC_20(VAR_5->db, VAR_11,
                                         (VAR_12 - VAR_11) + VAR_10, &VAR_13, ((void*)0));
                if (VAR_7 != VAR_3) {
                    FUNC_7(VAR_8, VAR_11, VAR_5->db);
                    if (VAR_6)
                        goto bail;

                    VAR_13 = ((void*)0);
                }


                if (VAR_11 != VAR_16)
                    FUNC_10(VAR_11);
                VAR_12 = VAR_11 = ((void*)0);

                VAR_14 = 0;
                do {

                    if (VAR_5->canceled) {
                        if (VAR_11 && VAR_11 != VAR_16)
                            FUNC_10(VAR_11);
                        if (VAR_13)
                            FUNC_18(VAR_13);
                        return VAR_0;
                    }

                    if ((VAR_7 = FUNC_8(VAR_5, &VAR_8, 1)) != 1)
                        FUNC_4(VAR_8, 1, VAR_7);

                    switch (VAR_8) {
                        union {
                            int64_t i;
                            double f;
                        } VAR_17;

                        case 130:
                            if (VAR_11 != ((void*)0))
                                FUNC_0(VAR_8, "Internal error.");
                            if ((VAR_7 = FUNC_8(VAR_5, &VAR_10, 2)) != 2)
                                FUNC_4(VAR_8, 2, VAR_7);

                            VAR_11 = (char *) FUNC_11((VAR_10 + 1) * 65536);
                            if (!VAR_11)
                                FUNC_3(VAR_8, (VAR_10 + 1) * 65536);

                            if ((VAR_7 = FUNC_8(VAR_5, VAR_11,
                                                        VAR_10 * 65536)) !=
                                VAR_10 * 65536)
                                FUNC_4(VAR_8, VAR_10 * 65536, VAR_7);

                            VAR_12 = VAR_11;

                            break;

                        case 132:
                            if (!VAR_13)
                                VAR_5->fail_count++;
                            else {
                                while (FUNC_23(VAR_13) == VAR_4) {
                                }
                                VAR_7 = FUNC_21(VAR_13);
                                if (VAR_7 != VAR_3) {
                                    FUNC_7(
                                        VAR_8, FUNC_22(VAR_13), VAR_5->db);
                                    if (VAR_6)
                                        goto bail;

                                    VAR_5->fail_count++;
                                } else {
                                    VAR_5->succ_count++;
                                    if (VAR_5->succ_count % 256 == 0) {

                                        VAR_7 = FUNC_17(VAR_5->db,
                                                           "COMMIT; BEGIN;", 0,
                                                           0, &VAR_15);
                                        if (VAR_7 != VAR_3) {
                                            FUNC_5(VAR_8, VAR_11,
                                                                    VAR_15);
                                            if (VAR_6)
                                                goto bail;

                                            FUNC_19(VAR_15);
                                            VAR_5->fail_count++;
                                        }
                                    }
                                }
                            }

                            VAR_14 = 0;

                            break;

                        case 131:

                            break;

                        case 137:
                            if (VAR_13)
                                FUNC_15(VAR_13, ++VAR_14);

                            break;

                        case 134:
                        case 133:
                            if (FUNC_9(
                                    VAR_5, &VAR_17.i,
                                    VAR_8 == 133) != 0)
                                FUNC_0(VAR_8, "Read varint failed.");
                            if (VAR_13)
                                FUNC_14(VAR_13, ++VAR_14, VAR_17.i);

                            break;

                        case 138:
                            if ((VAR_7 = FUNC_8(VAR_5, &VAR_17, 8)) != 8)
                                FUNC_4(VAR_8, 8, VAR_7);
                            if (VAR_13)
                                FUNC_13(VAR_13, ++VAR_14, VAR_17.f);

                            break;

                        case 136:
                        case 140:
                            if ((VAR_7 = FUNC_8(VAR_5, &VAR_10, 2)) != 2)
                                FUNC_4(VAR_8, 2, VAR_7);
                            if (!VAR_12) {
                                VAR_11 = (char *) FUNC_11(VAR_10);
                                if (!VAR_11)
                                    FUNC_3(VAR_8, VAR_10);
                                VAR_12 = VAR_11;
                            }
                            if ((VAR_7 = FUNC_8(VAR_5, VAR_12, VAR_10)) !=
                                VAR_10)
                                FUNC_4(VAR_8, VAR_10, VAR_7);


                            if (VAR_13) {
                                if (VAR_8 == 136)
                                    FUNC_16(VAR_13, ++VAR_14, VAR_11,
                                                      (VAR_12 - VAR_11) + VAR_10,
                                                      FUNC_10);
                                else
                                    FUNC_12(VAR_13, ++VAR_14, VAR_11,
                                                      (VAR_12 - VAR_11) + VAR_10,
                                                      FUNC_10);
                            } else
                                FUNC_10(VAR_11);

                            VAR_12 = VAR_11 = ((void*)0);
                            break;

                        case 135:
                        case 139:
                            if ((VAR_7 = FUNC_8(VAR_5, &VAR_9,
                                                        1)) != 1)
                                FUNC_4(VAR_8, 1, VAR_7);
                            VAR_10 = VAR_9;
                            if (!VAR_12) {
                                VAR_11 = (char *) FUNC_11(VAR_10);
                                if (!VAR_11)
                                    FUNC_3(VAR_8, VAR_10);
                                VAR_12 = VAR_11;
                            }
                            if ((VAR_7 = FUNC_8(VAR_5, VAR_12, VAR_10)) !=
                                VAR_10)
                                FUNC_4(VAR_8, VAR_10, VAR_7);


                            if (VAR_13) {
                                if (VAR_8 == 135)
                                    FUNC_16(VAR_13, ++VAR_14, VAR_11,
                                                      (VAR_12 - VAR_11) + VAR_10,
                                                      FUNC_10);
                                else
                                    FUNC_12(VAR_13, ++VAR_14, VAR_11,
                                                      (VAR_12 - VAR_11) + VAR_10,
                                                      FUNC_10);
                            } else
                                FUNC_10(VAR_11);

                            VAR_12 = VAR_11 = ((void*)0);
                            break;

                        default:
                            FUNC_2("Unrecognized tag: %d", VAR_8);
                    }
                } while (VAR_8 != 131);

                if (VAR_13 && FUNC_18(VAR_13) != VAR_3)
                    FUNC_6(VAR_8, "(FINALIZE)", VAR_5->db);
                break;

            default:
                FUNC_2("Unrecognized tag: %d", VAR_8);
        }
    }
    return VAR_0;

bail:
    if (VAR_11 && VAR_11 != VAR_16)
        FUNC_10(VAR_11);
    if (VAR_15)
        FUNC_19(VAR_15);
    if (VAR_13)
        FUNC_18(VAR_13);
    FUNC_1("Fatal Offset [in: %lu, out: %lu]", VAR_5->zstrm.total_in,
         VAR_5->zstrm.total_out);
    return VAR_1;
}
