
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_tokenizer ;
struct TYPE_3__ {scalar_t__* locale; } ;
typedef TYPE_1__ mm_tokenizer_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*,char const* const,int) ;

__attribute__((used)) static int
FUNC_2(int VAR_2, const char *const *VAR_3, sqlite3_tokenizer **VAR_4)
{
    mm_tokenizer_t *VAR_5 = FUNC_0(sizeof(mm_tokenizer_t));
    if (!VAR_5)
        return VAR_0;

    if (VAR_2 > 0) {
        FUNC_1(VAR_5->locale, VAR_3[0], 15);
        VAR_5->locale[15] = 0;
    } else
        VAR_5->locale[0] = 0;

    *VAR_4 = (sqlite3_tokenizer *) VAR_5;
    return VAR_1;
}
