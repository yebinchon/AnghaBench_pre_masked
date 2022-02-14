
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pagesize; int integrity; int freepagecount; int reservedBytes; int pagecount; size_t usableSize; int file; scalar_t__ codec; } ;
typedef TYPE_1__ sqliterk_pager ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (unsigned char*,char*,int) ;
 int FUNC_1 (scalar_t__,int,unsigned char*) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int ,size_t*) ;
 int FUNC_4 (unsigned char*) ;
 int FUNC_5 (int ) ;
 unsigned char* FUNC_6 (size_t) ;
 int FUNC_7 (int ,int ,unsigned char*,size_t*) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (unsigned char*,int,int,int*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(sqliterk_pager *VAR_8, int VAR_9)
{



    if (!VAR_8) {
        return VAR_2;
    }
    int VAR_10 = VAR_4;


    if (VAR_9) {
        VAR_8->pagesize = VAR_9;
    }

    size_t VAR_11 = VAR_8->codec ? VAR_8->pagesize : 100;


    unsigned char *VAR_12 = FUNC_6(VAR_11);
    if (!VAR_12) {
        VAR_10 = VAR_3;
        FUNC_2(VAR_10, "Not enough memory, required %zu bytes.", VAR_11);
        goto sqliterkPagerParseHeader_End;
    }

    VAR_10 = FUNC_7(VAR_8->file, 0, VAR_12, &VAR_11);
    if (VAR_10 != VAR_4) {
        if (VAR_10 == VAR_5)
            FUNC_2(VAR_10, "File truncated.");
        else
            FUNC_2(VAR_10, "Cannot read file '%s': %s",
                            FUNC_5(VAR_8->file),
                            FUNC_10(VAR_7));
        VAR_8->integrity &= ~VAR_1;
        goto sqliterkPagerParseHeader_End;
    }

    VAR_8->integrity |= VAR_1;

    if (VAR_8->codec) {
        VAR_10 = FUNC_1(VAR_8->codec, 1, VAR_12);
        if (VAR_10 != VAR_4) {
            FUNC_8(VAR_0,
                              "Failed to decode page 1, header corrupted.");
            VAR_8->integrity &= ~VAR_1;
        }
    }

    if (VAR_8->integrity & VAR_1) {
        if (FUNC_0(VAR_12, "SQLite format 3\000", 16) == 0) {

            int VAR_13;
            FUNC_9(VAR_12, 16, 2, &VAR_13);
            if (VAR_8->codec || VAR_9) {

                if (VAR_13 != VAR_8->pagesize) {
                    FUNC_8(
                        VAR_0,
                        "Invalid page size: %d expected, %d returned.",
                        VAR_8->pagesize, VAR_13);
                    VAR_8->integrity &= ~VAR_1;
                }
            } else if (((VAR_13 - 1) & VAR_13) != 0 || VAR_13 < 512) {


                FUNC_8(VAR_0,
                                  "Page size field is corrupted. Default page "
                                  "size %d is used",
                                  VAR_6);
                VAR_8->pagesize = VAR_6;
                VAR_8->integrity &= ~VAR_1;
            } else {


                VAR_8->pagesize = VAR_13;
            }


            FUNC_9(VAR_12, 36, 4, &VAR_8->freepagecount);


            int VAR_14;
            FUNC_9(VAR_12, 20, 1, &VAR_14);
            if (VAR_8->codec) {
                if (VAR_14 != VAR_8->reservedBytes) {
                    FUNC_8(VAR_0,
                                      "Reserved bytes field doesn't match. %d "
                                      "expected, %d returned.",
                                      VAR_8->reservedBytes, VAR_14);
                    VAR_8->integrity &= ~VAR_1;
                }
            } else if (VAR_14 < 0 || VAR_14 > 255) {
                FUNC_8(
                    VAR_0,
                    "The [reserved bytes] field is corrupted. 0 is used");
                VAR_8->reservedBytes = 0;
                VAR_8->integrity &= ~VAR_1;
            } else
                VAR_8->reservedBytes = VAR_14;
        } else {

            FUNC_8(VAR_0,
                              "SQLite format magic corrupted.");
            if (!VAR_8->codec) {
                VAR_8->pagesize = VAR_6;
                VAR_8->reservedBytes = 0;
            }
            VAR_8->freepagecount = 0;
            VAR_8->integrity &= ~VAR_1;
        }
    }


    size_t VAR_15;
    VAR_10 = FUNC_3(VAR_8->file, &VAR_15);
    if (VAR_10 != VAR_4) {
        FUNC_2(VAR_10, "Failed to get size of file '%s': %s",
                        FUNC_5(VAR_8->file), FUNC_10(VAR_7));
        goto sqliterkPagerParseHeader_End;
    }

    VAR_8->pagecount =
        (int) ((VAR_15 + VAR_8->pagesize - 1) / VAR_8->pagesize);
    if (VAR_8->pagecount < 1) {
        VAR_10 = VAR_0;
        FUNC_2(VAR_10, "File truncated.");
        goto sqliterkPagerParseHeader_End;
    }


    if (VAR_8->freepagecount < 0 || VAR_8->freepagecount > VAR_8->pagecount) {
        FUNC_8(
            VAR_0,
            "The [free page count] field is corrupted. 0 is used");
        VAR_8->freepagecount = 0;
        VAR_8->integrity &= ~VAR_1;
    }


    VAR_8->usableSize = VAR_8->pagesize - VAR_8->reservedBytes;

sqliterkPagerParseHeader_End:
    if (VAR_12) {
        FUNC_4(VAR_12);
    }
    return VAR_10;
}
