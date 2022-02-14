
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* out_buffer; int out_length; int* in_offset; int token_count; int * in_buffer; } ;
typedef TYPE_1__ mm_cursor_t ;
typedef int int32_t ;
typedef int buf2 ;
typedef int buf1 ;
typedef int UErrorCode ;
typedef int UChar ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*,int ,char*) ;
 scalar_t__ FUNC_5 (char*,int) ;
 int FUNC_6 (int *,int,int *,int,int ,int *) ;
 int FUNC_7 (char*,int,int*,int *,int,int *) ;
 int FUNC_8 (int *,int,int ,int ,int *,int,int *) ;

__attribute__((used)) static int FUNC_9(mm_cursor_t *VAR_7,
                        int32_t VAR_8,
                        int32_t VAR_9,
                        const char **VAR_10,
                        int *VAR_11,
                        int *VAR_12,
                        int *VAR_13,
                        int *VAR_14)
{
    UChar VAR_15[256];
    UChar VAR_16[256];
    UErrorCode VAR_17 = VAR_6;
    int32_t VAR_18;
    int32_t VAR_19;

    VAR_19 = VAR_9 - VAR_8;
    if (VAR_19 > 256)
        VAR_19 = 256;
    VAR_18 = FUNC_8(VAR_7->in_buffer + VAR_8, VAR_19, VAR_4, 0,
                             VAR_15, sizeof(VAR_15) / sizeof(UChar), &VAR_17);

    if (FUNC_0(VAR_17) || VAR_18 > sizeof(VAR_15) / sizeof(UChar)) {
        char *VAR_20 =
            FUNC_2(VAR_7->in_buffer + VAR_8, VAR_19);
        FUNC_4(
            "Normalize token failed. ICU status: %d, input: %s", VAR_17, VAR_20);
        FUNC_1(VAR_20);
        return VAR_1;
    }

    VAR_19 = VAR_18;
    VAR_18 = FUNC_6(VAR_16, sizeof(VAR_16) / sizeof(UChar), VAR_15, VAR_19,
                           VAR_5, &VAR_17);

    if (FUNC_0(VAR_17) || VAR_18 > sizeof(VAR_16) / sizeof(UChar)) {
        char *VAR_21 = FUNC_2(VAR_15, VAR_19);
        FUNC_4(
            "FoldCase token failed. ICU status: %d, input: %s", VAR_17, VAR_21);
        FUNC_1(VAR_21);
        return VAR_1;
    }

    if (VAR_7->out_buffer == ((void*)0)) {
        VAR_7->out_buffer =
            (char *) FUNC_3(VAR_0 * sizeof(char));
        if (!VAR_7->out_buffer)
            return VAR_2;
        VAR_7->out_length = VAR_0;
    }

    VAR_19 = VAR_18;
    FUNC_7(VAR_7->out_buffer, VAR_7->out_length, &VAR_18, VAR_16, VAR_19,
                &VAR_17);
    if (VAR_18 > VAR_7->out_length) {
        char *VAR_22 =
            (char *) FUNC_5(VAR_7->out_buffer, VAR_18 * sizeof(char));
        if (!VAR_22)
            return VAR_2;

        VAR_7->out_buffer = VAR_22;
        VAR_7->out_length = VAR_18;

        VAR_17 = VAR_6;
        FUNC_7(VAR_7->out_buffer, VAR_7->out_length, &VAR_18, VAR_16, VAR_19,
                    &VAR_17);
    }
    if (FUNC_0(VAR_17) || VAR_18 > VAR_7->out_length) {
        char *VAR_23 = FUNC_2(VAR_16, VAR_19);
        FUNC_4(
            "Transform token to UTF-8 failed. ICU status: %d, input: %s",
            VAR_17, VAR_23);
        FUNC_1(VAR_23);
        return VAR_1;
    }

    *VAR_10 = VAR_7->out_buffer;
    *VAR_11 = VAR_18;
    *VAR_12 = VAR_7->in_offset[VAR_8];
    *VAR_13 = VAR_7->in_offset[VAR_9];
    *VAR_14 = VAR_7->token_count++;

    return VAR_3;
}
