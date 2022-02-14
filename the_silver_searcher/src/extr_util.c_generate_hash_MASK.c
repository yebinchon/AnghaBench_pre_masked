
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* as_chars; size_t as_word; } ;
typedef TYPE_1__ word_t ;
typedef int uint8_t ;
typedef int uint16_t ;


 size_t VAR_0 ;
 int FUNC_0 (char**,char const*,int) ;

void FUNC_1(const char *VAR_1, const size_t VAR_2, uint8_t *VAR_3, const int VAR_4) {
    int VAR_5;
    for (VAR_5 = VAR_2 - sizeof(uint16_t); VAR_5 >= 0; VAR_5--) {

        int VAR_6;
        for (VAR_6 = 0; VAR_6 < (1 << sizeof(uint16_t)); VAR_6++) {
            word_t VAR_7;
            FUNC_0(&VAR_7.as_chars, VAR_1 + VAR_5, sizeof(uint16_t));
            int VAR_8;

            for (VAR_8 = 0; VAR_6 >> VAR_8; VAR_8++) {
                if ((VAR_6 >> VAR_8) & 1)
                    VAR_7.as_chars[VAR_8] -= 'a' - 'A';
            }
            size_t VAR_9;

            for (VAR_9 = VAR_7.as_word % VAR_0; VAR_3[VAR_9]; VAR_9 = (VAR_9 + 1) % VAR_0)
                ;
            VAR_3[VAR_9] = VAR_5 + 1;

            if (VAR_4)
                break;
        }
    }
}
