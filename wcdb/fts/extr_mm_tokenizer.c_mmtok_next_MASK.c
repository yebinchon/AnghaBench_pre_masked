
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_tokenizer_cursor ;
struct TYPE_4__ {char* in_buffer; scalar_t__ ideo_state; scalar_t__ ideo_end; scalar_t__ ideo_start; int iter; } ;
typedef TYPE_1__ mm_cursor_t ;
typedef scalar_t__ int32_t ;
typedef char UChar32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,scalar_t__,char const**,int*,int*,int*,int*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(sqlite3_tokenizer_cursor *VAR_7,
           const char **VAR_8,
           int *VAR_9,
           int *VAR_10,
           int *VAR_11,
           int *VAR_12
           )
{
    mm_cursor_t *VAR_13 = (mm_cursor_t *) VAR_7;
    int32_t VAR_14, VAR_15;
    int32_t VAR_16;


    if (FUNC_0(VAR_13, &VAR_14, &VAR_15))
        return FUNC_1(VAR_13, VAR_14, VAR_15, VAR_8, VAR_9, VAR_10,
                            VAR_11, VAR_12);

    VAR_14 = FUNC_5(VAR_13->iter);


    for (;;) {
        VAR_15 = FUNC_8(VAR_13->iter);
        if (VAR_15 == VAR_2) {
            FUNC_2();
            return VAR_0;
        }

        VAR_16 = FUNC_6(VAR_13->iter);
        if (VAR_16 >= VAR_5 && VAR_16 < VAR_6) {


            UChar32 VAR_17 = VAR_13->in_buffer[VAR_14];
            if (VAR_17 == '*' || VAR_17 == 0x200b || FUNC_4(VAR_17)) {
                VAR_14 = VAR_15;
                continue;
            }
        }

        break;
    }


    if (VAR_16 < VAR_3 || VAR_16 >= VAR_4)
        return FUNC_1(VAR_13, VAR_14, VAR_15, VAR_8, VAR_9, VAR_10,
                            VAR_11, VAR_12);


    for (;;) {
        int32_t VAR_18 = FUNC_8(VAR_13->iter);
        if (VAR_18 == VAR_2)
            break;
        VAR_16 = FUNC_6(VAR_13->iter);
        if (VAR_16 < VAR_3 || VAR_16 >= VAR_4)
            break;
        VAR_15 = VAR_18;
    }
    FUNC_7(VAR_13->iter, VAR_15);

    VAR_13->ideo_start = VAR_14;
    VAR_13->ideo_end = VAR_15;
    VAR_13->ideo_state = 0;
    if (FUNC_0(VAR_13, &VAR_14, &VAR_15))
        return FUNC_1(VAR_13, VAR_14, VAR_15, VAR_8, VAR_9, VAR_10,
                            VAR_11, VAR_12);

    FUNC_3("IDEO token found but can't output token.");
    return VAR_1;
}
