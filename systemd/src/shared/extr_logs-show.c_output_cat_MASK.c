
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_journal ;
typedef int Set ;
typedef int OutputMode ;
typedef int OutputFlags ;
typedef int FILE ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char,int *) ;
 int FUNC_2 (char const*,int,size_t const,int *) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int *,char*,void const**,size_t*) ;
 int FUNC_6 (int *,int ) ;
 size_t FUNC_7 (char const*) ;

__attribute__((used)) static int FUNC_8(
                FILE *VAR_5,
                sd_journal *VAR_6,
                OutputMode VAR_7,
                unsigned VAR_8,
                OutputFlags VAR_9,
                Set *VAR_10,
                const size_t VAR_11[2]) {

        const void *VAR_12;
        size_t VAR_13;
        int VAR_14;
        const char *VAR_15 = "", *VAR_16 = "";

        FUNC_0(*VAR_6);
        FUNC_0(*VAR_5);

        if (VAR_9 & VAR_4) {
                VAR_15 = VAR_0;
                VAR_16 = VAR_1;
        }

        FUNC_6(VAR_6, 0);

        VAR_14 = FUNC_5(VAR_6, "MESSAGE", &VAR_12, &VAR_13);
        if (VAR_14 == -VAR_2) {
                FUNC_3(VAR_14, "Skipping message we can't read: %m");
                return 0;
        }
        if (VAR_14 < 0) {

                if (VAR_14 == -VAR_3)
                        return 0;

                return FUNC_4(VAR_14, "Failed to get data: %m");
        }

        FUNC_0(VAR_13 >= 8);

        if (VAR_11 && (VAR_9 & VAR_4)) {
                FUNC_0(VAR_11[0] <= VAR_11[1]);
                FUNC_0(VAR_11[1] <= VAR_13 - 8);

                FUNC_2((const char*) VAR_12 + 8, 1, VAR_11[0], VAR_5);
                FUNC_2(VAR_15, 1, FUNC_7(VAR_15), VAR_5);
                FUNC_2((const char*) VAR_12 + 8 + VAR_11[0], 1, VAR_11[1] - VAR_11[0], VAR_5);
                FUNC_2(VAR_16, 1, FUNC_7(VAR_16), VAR_5);
                FUNC_2((const char*) VAR_12 + 8 + VAR_11[1], 1, VAR_13 - 8 - VAR_11[1], VAR_5);
        } else
                FUNC_2((const char*) VAR_12 + 8, 1, VAR_13 - 8, VAR_5);
        FUNC_1('\n', VAR_5);

        return 0;
}
