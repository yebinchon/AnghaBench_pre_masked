
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int OutputFlags ;
typedef char const FILE ;


 scalar_t__ FUNC_0 (char const,char,char) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (char const,char const*) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char const*,size_t) ;

void FUNC_6(
                FILE *VAR_2,
                const char* VAR_3,
                size_t VAR_4,
                OutputFlags VAR_5) {

        FUNC_1(VAR_2);
        FUNC_1(VAR_3);

        if (!(VAR_5 & VAR_1) && VAR_4 >= VAR_0)
                FUNC_4("null", VAR_2);

        else if (!(VAR_5 & VAR_1) && !FUNC_5(VAR_3, VAR_4)) {
                bool VAR_6 = 0;

                FUNC_4("[ ", VAR_2);

                while (VAR_4 > 0) {
                        if (VAR_6)
                                FUNC_2(VAR_2, ", %u", (uint8_t) *VAR_3);
                        else {
                                VAR_6 = 1;
                                FUNC_2(VAR_2, "%u", (uint8_t) *VAR_3);
                        }

                        VAR_3++;
                        VAR_4--;
                }

                FUNC_4(" ]", VAR_2);
        } else {
                FUNC_3('"', VAR_2);

                while (VAR_4 > 0) {
                        if (FUNC_0(*VAR_3, '"', '\\')) {
                                FUNC_3('\\', VAR_2);
                                FUNC_3(*VAR_3, VAR_2);
                        } else if (*VAR_3 == '\n')
                                FUNC_4("\\n", VAR_2);
                        else if ((uint8_t) *VAR_3 < ' ')
                                FUNC_2(VAR_2, "\\u%04x", (uint8_t) *VAR_3);
                        else
                                FUNC_3(*VAR_3, VAR_2);

                        VAR_3++;
                        VAR_4--;
                }

                FUNC_3('"', VAR_2);
        }
}
