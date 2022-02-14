
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int uint16_t ;
typedef int Tox ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,int ,char*,int) ;

void FUNC_3(Tox *VAR_1, uint8_t *VAR_2, uint16_t VAR_3)
{
    if (VAR_3 > 1350 || VAR_3 == 0 || VAR_3 == 1)
        return;

    --VAR_3;

    if (*VAR_2 != ':')
        return;

    uint8_t VAR_4[VAR_3];
    unsigned int VAR_5;

    unsigned int VAR_6 = 0;

    for (VAR_5 = 0; VAR_5 < (VAR_3 - 1); ++VAR_5) {
        if (VAR_2[VAR_5 + 1] == ' ') {
            ++VAR_6;
        } else {
            if (VAR_6 >= 3 && VAR_2[VAR_5 + 1] == ':') {
                break;
            }
        }

        VAR_4[VAR_5] = VAR_2[VAR_5 + 1];
    }

    unsigned int VAR_7 = VAR_5;
    VAR_4[VAR_5] = 0;

    uint8_t VAR_8[VAR_3];
    uint16_t VAR_9 = 0;

    uint8_t *VAR_10 = (uint8_t *)FUNC_1((char *)VAR_4, " PRIVMSG");

    if (VAR_10 == ((void*)0))
        return;

    uint8_t *VAR_11 = VAR_4;

    for (VAR_11 = VAR_4, VAR_5 = 0; VAR_11 != VAR_10 && *VAR_11 != '!'; ++VAR_11, ++VAR_5) {
        VAR_8[VAR_5] = *VAR_11;
        ++VAR_9;
    }

    VAR_8[VAR_9] = ':';
    VAR_9 += 1;
    VAR_8[VAR_9] = ' ';
    VAR_9 += 1;

    if ((VAR_7 + 2) >= VAR_3)
        return;

    FUNC_0(VAR_8 + VAR_9, VAR_2 + VAR_7 + 2, VAR_3 - (VAR_7 + 2));
    VAR_9 += VAR_3 - (VAR_7 + 2);
    FUNC_2(VAR_1, VAR_0, VAR_8, VAR_9);
}
