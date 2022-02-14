
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct logger {scalar_t__ fd; int nerror; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char) ;
 struct logger VAR_2 ;
 scalar_t__ FUNC_1 (char*,int,char*,...) ;
 scalar_t__ FUNC_2 (scalar_t__,char*,int) ;

void
FUNC_3(const char *VAR_3, int VAR_4, char *VAR_5, int VAR_6,
             const char *VAR_7, ...)
{
    struct logger *VAR_8 = &VAR_2;
    char VAR_9[8 * VAR_0];
    int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    ssize_t VAR_15;

    if (VAR_8->fd < 0) {
        return;
    }


    VAR_14 = VAR_1;
    VAR_11 = 0;
    VAR_12 = 0;
    VAR_13 = 8 * VAR_0;

    while (VAR_6 != 0 && (VAR_12 < VAR_13 - 1)) {
        char *VAR_16, *VAR_17;
        unsigned char VAR_18;
        int VAR_19;

        VAR_12 += FUNC_1(VAR_9 + VAR_12, VAR_13 - VAR_12, "%08x  ", VAR_11);

        VAR_16 = VAR_5;
        VAR_19 = VAR_6;

        for (VAR_10 = 0; VAR_6 != 0 && VAR_10 < 16; VAR_5++, VAR_6--, VAR_10++) {
            VAR_18 = (unsigned char)(*VAR_5);
            VAR_17 = (VAR_10 == 7) ? "  " : " ";
            VAR_12 += FUNC_1(VAR_9 + VAR_12, VAR_13 - VAR_12, "%02x%s", VAR_18, VAR_17);
        }
        for ( ; VAR_10 < 16; VAR_10++) {
            VAR_17 = (VAR_10 == 7) ? "  " : " ";
            VAR_12 += FUNC_1(VAR_9 + VAR_12, VAR_13 - VAR_12, "  %s", VAR_17);
        }

        VAR_5 = VAR_16;
        VAR_6 = VAR_19;

        VAR_12 += FUNC_1(VAR_9 + VAR_12, VAR_13 - VAR_12, "  |");

        for (VAR_10 = 0; VAR_6 != 0 && VAR_10 < 16; VAR_5++, VAR_6--, VAR_10++) {
            VAR_18 = (unsigned char)(FUNC_0(*VAR_5) ? *VAR_5 : '.');
            VAR_12 += FUNC_1(VAR_9 + VAR_12, VAR_13 - VAR_12, "%c", VAR_18);
        }
        VAR_12 += FUNC_1(VAR_9 + VAR_12, VAR_13 - VAR_12, "|\n");

        VAR_11 += 16;
    }

    VAR_15 = FUNC_2(VAR_8->fd, VAR_9, VAR_12);
    if (VAR_15 < 0) {
        VAR_8->nerror++;
    }

    if (VAR_12 >= VAR_13 - 1) {
        VAR_15 = FUNC_2(VAR_8->fd, "\n", 1);
        if (VAR_15 < 0) {
            VAR_8->nerror++;
        }
    }

    VAR_1 = VAR_14;
}
