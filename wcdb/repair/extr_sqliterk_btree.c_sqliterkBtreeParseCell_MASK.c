
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqliterk_page ;
typedef int sqliterk_column ;
typedef int sqliterk_btree ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int,int,int *) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int,char*) ;
 unsigned char* FUNC_6 (int *) ;
 int FUNC_7 (unsigned char const*,int,int*,int*) ;
 int FUNC_8 (unsigned char const*,int,int*,int *) ;

__attribute__((used)) static int FUNC_9(sqliterk_btree *VAR_3,
                                  sqliterk_page *VAR_4,
                                  const int *VAR_5,
                                  const int VAR_6)
{
    if (!VAR_3 || !VAR_4 || !VAR_5 || VAR_6 < 0) {
        return VAR_1;
    }
    const unsigned char *VAR_7 = FUNC_6(VAR_4);
    int VAR_8 = VAR_2;
    sqliterk_column *VAR_9;
    VAR_8 = FUNC_1(&VAR_9);
    if (VAR_8 != VAR_2) {
        goto sqliterkBtreeParsePayload_End;
    }

    int VAR_10;
    for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
        FUNC_2(VAR_9);
        int VAR_11 = VAR_5[VAR_10];

        int VAR_12;
        int VAR_13;
        VAR_8 = FUNC_7(VAR_7, VAR_11, &VAR_12,
                                 &VAR_13);
        if (VAR_8 != VAR_2) {
            goto sqliterkBtreeParsePayload_End;
        }
        VAR_11 += VAR_12;

        int VAR_14;
        int64_t VAR_15;
        VAR_8 = FUNC_8(VAR_7, VAR_11, &VAR_14, &VAR_15);
        if (VAR_8 != VAR_2) {
            goto sqliterkBtreeParsePayload_End;
        }
        VAR_11 += VAR_14;
        FUNC_4(VAR_9, VAR_15);

        VAR_8 =
            FUNC_0(VAR_3, VAR_4, VAR_11, VAR_13, VAR_9);
        if (VAR_8 != VAR_2) {
            goto sqliterkBtreeParsePayload_End;
        }
    }
sqliterkBtreeParsePayload_End:
    if (VAR_9) {
        FUNC_3(VAR_9);
    }
    if (VAR_8 != VAR_2 && VAR_8 != VAR_0) {
        FUNC_5(VAR_8, "Failed to parse payload.");
    }
    return VAR_8;
}
