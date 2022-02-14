
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_3__ {int cnv; } ;
typedef TYPE_1__ mm_cipher_context_t ;
typedef int int32_t ;
typedef int buf ;
typedef scalar_t__ UErrorCode ;
typedef int UChar ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,char*,int,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,char*,int,int const*,int,scalar_t__*) ;

__attribute__((used)) static void FUNC_13(sqlite3_context *VAR_8, int VAR_9, sqlite3_value **VAR_10)
{
    mm_cipher_context_t *VAR_11;
    const UChar *VAR_12;
    int32_t VAR_13;
    char VAR_14[1024];
    char *VAR_15 = VAR_14;
    int32_t VAR_16;
    UErrorCode VAR_17 = VAR_7;
    int VAR_18;


    if (VAR_9 != 1)
        goto error_misuse;


    VAR_18 = FUNC_11(VAR_10[0]);
    if (VAR_18 == VAR_0)
        goto error_misuse;


    if (VAR_18 != VAR_3) {
        FUNC_7(VAR_8, VAR_10[0]);
        return;
    }

    VAR_11 = (mm_cipher_context_t *) FUNC_8(VAR_8);
    VAR_13 = FUNC_9(VAR_10[0]) / 2;
    VAR_12 = (const UChar *) FUNC_10(VAR_10[0]);



    VAR_16 =
        FUNC_12(VAR_11->cnv, VAR_15, sizeof(VAR_14), VAR_12, VAR_13, &VAR_17);
    if (VAR_17 == VAR_5) {
        VAR_17 = VAR_7;
        VAR_15 = (char *) FUNC_3(VAR_16);
        VAR_16 =
            FUNC_12(VAR_11->cnv, VAR_15, VAR_16, VAR_12, VAR_13, &VAR_17);
    }
    if (FUNC_0(VAR_17) && VAR_17 != VAR_6) {
        FUNC_4(
            "Failed transforming text to internal encoding.");
        goto error_error;
    }


    FUNC_1(VAR_11, VAR_15, VAR_16);


    FUNC_5(VAR_8, VAR_15, VAR_16, VAR_4);
    if (VAR_15 != VAR_14)
        FUNC_2(VAR_15);
    return;

error_error:
    if (VAR_15 != VAR_14)
        FUNC_2(VAR_15);
    FUNC_6(VAR_8, VAR_1);
    return;

error_misuse:
    if (VAR_15 != VAR_14)
        FUNC_2(VAR_15);
    FUNC_6(VAR_8, VAR_2);
    return;
}
