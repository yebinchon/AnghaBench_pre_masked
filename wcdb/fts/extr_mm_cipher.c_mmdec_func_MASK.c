
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int src_buf ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_3__ {int cnv; } ;
typedef TYPE_1__ mm_cipher_context_t ;
typedef int int32_t ;
typedef int buf ;
typedef scalar_t__ UErrorCode ;
typedef char UChar ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,char*,int,int ) ;
 int FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,char*,int,char*,int,scalar_t__*) ;

__attribute__((used)) static void FUNC_14(sqlite3_context *VAR_7, int VAR_8, sqlite3_value **VAR_9)
{
    mm_cipher_context_t *VAR_10;
    char VAR_11[1024];
    char *VAR_12 = VAR_11;
    int32_t VAR_13;
    UChar VAR_14[512];
    UChar *VAR_15 = VAR_14;
    int32_t VAR_16;
    UErrorCode VAR_17 = VAR_6;
    int VAR_18;


    if (VAR_8 != 1)
        goto error_misuse;

    VAR_18 = FUNC_12(VAR_9[0]);


    if (VAR_18 != VAR_0) {
        FUNC_8(VAR_7, VAR_9[0]);
        return;
    }

    VAR_10 = (mm_cipher_context_t *) FUNC_9(VAR_7);
    VAR_13 = FUNC_11(VAR_9[0]);
    if (VAR_13 > sizeof(VAR_11)) {
        VAR_12 = (char *) FUNC_4(VAR_13);
        if (!VAR_12)
            goto error_error;
    }
    FUNC_2(VAR_12, FUNC_10(VAR_9[0]), VAR_13);


    FUNC_1(VAR_10, VAR_12, VAR_13);



    VAR_16 = FUNC_13(VAR_10->cnv, VAR_15, sizeof(VAR_14), VAR_12, VAR_13, &VAR_17);
    if (VAR_17 == VAR_4) {
        VAR_17 = VAR_6;
        VAR_15 = (UChar *) FUNC_4(VAR_16 * sizeof(UChar));
        VAR_16 = FUNC_13(VAR_10->cnv, VAR_15, VAR_16, VAR_12, VAR_13, &VAR_17);
    }
    if (FUNC_0(VAR_17) && VAR_17 != VAR_5) {
        FUNC_5(
            "Failed transforming text from internal encoding.");
        goto error_error;
    }


    FUNC_7(VAR_7, VAR_15, VAR_16 * sizeof(UChar), VAR_3);
    if (VAR_12 != VAR_11)
        FUNC_3(VAR_12);
    if (VAR_15 != VAR_14)
        FUNC_3(VAR_15);
    return;

error_error:
    if (VAR_12 != VAR_11)
        FUNC_3(VAR_12);
    if (VAR_15 != VAR_14)
        FUNC_3(VAR_15);
    FUNC_6(VAR_7, VAR_1);
    return;

error_misuse:
    if (VAR_12 != VAR_11)
        FUNC_3(VAR_12);
    if (VAR_15 != VAR_14)
        FUNC_3(VAR_15);
    FUNC_6(VAR_7, VAR_2);
    return;
}
