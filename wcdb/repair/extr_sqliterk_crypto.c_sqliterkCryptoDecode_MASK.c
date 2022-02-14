
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqliterk_codec ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned char*,...) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int,int ,int,unsigned char*,unsigned char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*,int,int ) ;

int FUNC_7(sqliterk_codec *VAR_5, int VAR_6, void *VAR_7)
{
    int VAR_8;
    int VAR_9 = 0;
    unsigned char *VAR_10 = (unsigned char *) VAR_7;

    int VAR_11 = FUNC_2(VAR_5);
    unsigned char *VAR_12 =
        (unsigned char *) FUNC_1(VAR_5);

    VAR_8 = FUNC_3(VAR_5);
    if (VAR_8 != VAR_4)
        return VAR_8;

    if (VAR_6 == 1) {
        VAR_9 = 16;
        FUNC_0(VAR_12, "SQLite format 3", 16);
    }
    VAR_8 = FUNC_4(VAR_5, VAR_1, VAR_6, VAR_0,
                               VAR_11 - VAR_9, VAR_10 + VAR_9,
                               VAR_12 + VAR_9);
    if (VAR_8 != VAR_4)
        goto bail;
    FUNC_0(VAR_10, VAR_12, VAR_11);

    return VAR_3;

bail:
    FUNC_6(VAR_2, "Failed to decode page %d: %s", VAR_6,
                    FUNC_5(VAR_8));
    return VAR_8;
}
