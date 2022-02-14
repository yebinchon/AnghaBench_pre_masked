
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (void const*,char*,int) ;

int FUNC_1(const void *VAR_0, const size_t VAR_1) {
    size_t VAR_2 = 0;
    size_t VAR_3 = VAR_1 > 512 ? 512 : VAR_1;
    const unsigned char *VAR_4 = VAR_0;
    size_t VAR_5;

    if (VAR_1 == 0) {

        return 0;
    }

    if (VAR_1 >= 3 && VAR_4[0] == 0xEF && VAR_4[1] == 0xBB && VAR_4[2] == 0xBF) {

        return 0;
    }

    if (VAR_1 >= 5 && FUNC_0(VAR_0, "%PDF-", 5) == 0) {

        return 1;
    }

    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
        if (VAR_4[VAR_5] == '\0') {

            return 1;
        } else if ((VAR_4[VAR_5] < 7 || VAR_4[VAR_5] > 14) && (VAR_4[VAR_5] < 32 || VAR_4[VAR_5] > 127)) {

            if (VAR_4[VAR_5] > 193 && VAR_4[VAR_5] < 224 && VAR_5 + 1 < VAR_3) {
                VAR_5++;
                if (VAR_4[VAR_5] > 127 && VAR_4[VAR_5] < 192) {
                    continue;
                }
            } else if (VAR_4[VAR_5] > 223 && VAR_4[VAR_5] < 240 && VAR_5 + 2 < VAR_3) {
                VAR_5++;
                if (VAR_4[VAR_5] > 127 && VAR_4[VAR_5] < 192 && VAR_4[VAR_5 + 1] > 127 && VAR_4[VAR_5 + 1] < 192) {
                    VAR_5++;
                    continue;
                }
            }
            VAR_2++;



            if (VAR_5 >= 32 && (VAR_2 * 100) / VAR_3 > 10) {
                return 1;
            }
        }
    }
    if ((VAR_2 * 100) / VAR_3 > 10) {
        return 1;
    }

    return 0;
}
