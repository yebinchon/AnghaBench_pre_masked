
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char const VAR_1 ;
 char const VAR_2 ;
 char const VAR_3 ;
 char const VAR_4 ;
 char const VAR_5 ;
 char const VAR_6 ;
 int FUNC_0 (size_t*) ;
 scalar_t__ FUNC_1 (char const) ;

__attribute__((used)) static int FUNC_2(
                const char *VAR_7,
                bool VAR_8,
                unsigned VAR_9,
                unsigned VAR_10,
                size_t *VAR_11) {

        int VAR_12;

        if (!VAR_7)
                return -VAR_0;

        FUNC_0(VAR_11);

        if (FUNC_1(*VAR_7) || *VAR_7 == VAR_6) {
                *VAR_11 = 1;
                return 0;
        }

        if (*VAR_7 == VAR_1) {
                size_t VAR_13;

                if (VAR_9 >= 32)
                        return -VAR_0;

                VAR_12 = FUNC_2(VAR_7 + 1, 1, VAR_9+1, VAR_10, &VAR_13);
                if (VAR_12 < 0)
                        return VAR_12;

                *VAR_11 = VAR_13 + 1;
                return 0;
        }

        if (*VAR_7 == VAR_4) {
                const char *VAR_14 = VAR_7 + 1;

                if (VAR_10 >= 32)
                        return -VAR_0;

                while (*VAR_14 != VAR_5) {
                        size_t VAR_15;

                        VAR_12 = FUNC_2(VAR_14, 0, VAR_9, VAR_10+1, &VAR_15);
                        if (VAR_12 < 0)
                                return VAR_12;

                        VAR_14 += VAR_15;
                }

                if (VAR_14 - VAR_7 < 2)



                        return -VAR_0;

                *VAR_11 = VAR_14 - VAR_7 + 1;
                return 0;
        }

        if (*VAR_7 == VAR_2 && VAR_8) {
                const char *VAR_16 = VAR_7 + 1;
                unsigned VAR_17 = 0;

                if (VAR_10 >= 32)
                        return -VAR_0;

                while (*VAR_16 != VAR_3) {
                        size_t VAR_18;

                        if (VAR_17 == 0 && !FUNC_1(*VAR_16))
                                return -VAR_0;

                        VAR_12 = FUNC_2(VAR_16, 0, VAR_9, VAR_10+1, &VAR_18);
                        if (VAR_12 < 0)
                                return VAR_12;

                        VAR_16 += VAR_18;
                        VAR_17++;
                }

                if (VAR_17 != 2)
                        return -VAR_0;

                *VAR_11 = VAR_16 - VAR_7 + 1;
                return 0;
        }

        return -VAR_0;
}
