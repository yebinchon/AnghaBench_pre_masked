
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char const*,unsigned int) ;
 int FUNC_2 (char*,char const*,unsigned int) ;
 char* FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char const*) ;
 size_t FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(
                const char* VAR_2,
                unsigned VAR_3,
                const char* VAR_4,
                const char* VAR_5,
                char **VAR_6) {

        size_t VAR_7;
        char *VAR_8;

        VAR_7 = FUNC_5(VAR_4);
        if (VAR_7 < 2)
                return FUNC_1(FUNC_0(VAR_0),
                                       "[%s:%u] Language too short.", VAR_2, VAR_3);
        if (VAR_7 > 31)
                return FUNC_1(FUNC_0(VAR_0),
                                       "[%s:%u] language too long.", VAR_2, VAR_3);

        if (VAR_5) {
                if (FUNC_4(VAR_4, VAR_5)) {
                        FUNC_2("[%s:%u] language specified unnecessarily", VAR_2, VAR_3);
                        return 0;
                }

                FUNC_2("[%s:%u] language differs from default for file", VAR_2, VAR_3);
        }

        VAR_8 = FUNC_3(VAR_4);
        if (!VAR_8)
                return -VAR_1;

        *VAR_6 = VAR_8;
        return 0;
}
