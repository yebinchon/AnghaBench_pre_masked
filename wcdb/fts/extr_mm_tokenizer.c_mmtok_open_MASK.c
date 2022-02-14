
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_tokenizer_cursor ;
typedef int sqlite3_tokenizer ;
struct TYPE_5__ {int locale; } ;
typedef TYPE_1__ mm_tokenizer_t ;
struct TYPE_6__ {int* in_offset; int ideo_start; int ideo_end; int ideo_state; int in_length; int iter; int * in_buffer; scalar_t__ token_count; scalar_t__ out_length; int * out_buffer; } ;
typedef TYPE_2__ mm_cursor_t ;
typedef int int32_t ;
typedef char UErrorCode ;
typedef char UChar32 ;
typedef int UChar ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int,int,char,int) ;
 int FUNC_2 (char const*,int,int,char) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (char) ;
 char VAR_4 ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (char*,char) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int *,int,char*) ;

__attribute__((used)) static int FUNC_11(sqlite3_tokenizer *VAR_5,
                      const char *VAR_6,
                      int VAR_7,
                      sqlite3_tokenizer_cursor **VAR_8)
{
    mm_tokenizer_t *VAR_9 = (mm_tokenizer_t *) VAR_5;
    mm_cursor_t *VAR_10;
    int VAR_11;
    int VAR_12;

    UErrorCode VAR_13 = VAR_4;
    int32_t VAR_14;
    UChar32 VAR_15;



    if (VAR_7 < 0)
        VAR_7 = FUNC_8(VAR_6);

    VAR_14 = FUNC_0(VAR_7 + 1);
    VAR_10 = (mm_cursor_t *) FUNC_6(
        sizeof(mm_cursor_t) + VAR_14 * sizeof(UChar)
        + (VAR_14 + 1) * sizeof(int)
        );
    if (!VAR_10)
        return VAR_1;

    FUNC_4(VAR_10, 0, sizeof(mm_cursor_t));
    VAR_10->in_buffer = (UChar *) &VAR_10[1];
    VAR_10->in_offset = (int *) &VAR_10->in_buffer[VAR_14];
    VAR_10->out_buffer = ((void*)0);
    VAR_10->out_length = 0;
    VAR_10->token_count = 0;
    VAR_10->ideo_start = -1;
    VAR_10->ideo_end = -1;
    VAR_10->ideo_state = -1;

    VAR_11 = 0;
    VAR_12 = 0;
    VAR_10->in_offset[VAR_12] = VAR_11;
    for (;;) {
        if (VAR_11 >= VAR_7)
            break;

        FUNC_2(VAR_6, VAR_11, VAR_7, VAR_15);
        if (!VAR_15)
            break;
        if (VAR_15 < 0)
            VAR_15 = ' ';

        int VAR_16 = 0;
        FUNC_1(VAR_10->in_buffer, VAR_12, VAR_14, VAR_15, VAR_16);
        if (VAR_16) {
            FUNC_5(VAR_10);
            FUNC_7(
                "Writing UTF-16 character failed. Code point: 0x%x", VAR_15);
            return VAR_0;
        }
        VAR_10->in_offset[VAR_12] = VAR_11;
    }

    VAR_10->iter =
        FUNC_10(VAR_3, VAR_9->locale, VAR_10->in_buffer, VAR_12, &VAR_13);
    if (FUNC_3(VAR_13)) {
        FUNC_7(
            "Open UBreakIterator failed. ICU error code: %d", VAR_13);
        return VAR_0;
    }
    VAR_10->in_length = VAR_12;

    FUNC_9(VAR_10->iter);
    *VAR_8 = (sqlite3_tokenizer_cursor *) VAR_10;
    return VAR_2;
}
