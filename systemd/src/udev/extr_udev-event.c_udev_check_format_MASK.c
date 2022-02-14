
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ FormatSubstitutionType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (char const**,int,scalar_t__*,char*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*,unsigned int*) ;

int FUNC_4(const char *VAR_5, size_t *VAR_6, const char **VAR_7) {
        FormatSubstitutionType VAR_8;
        const char *VAR_9 = VAR_5;
        char VAR_10[VAR_4];
        int VAR_11;

        while (*VAR_9) {
                VAR_11 = FUNC_1(&VAR_9, 1, &VAR_8, VAR_10);
                if (VAR_11 < 0) {
                        if (VAR_6)
                                *VAR_6 = VAR_9 - VAR_5;
                        if (VAR_7)
                                *VAR_7 = "invalid substitution type";
                        return VAR_11;
                } else if (VAR_11 == 0) {
                        VAR_9++;
                        continue;
                }

                if (FUNC_0(VAR_8, VAR_1, VAR_2) && FUNC_2(VAR_10)) {
                        if (VAR_6)
                                *VAR_6 = VAR_9 - VAR_5;
                        if (VAR_7)
                                *VAR_7 = "attribute value missing";
                        return -VAR_0;
                }

                if (VAR_8 == VAR_3 && !FUNC_2(VAR_10)) {
                        unsigned VAR_12;

                        VAR_11 = FUNC_3(VAR_10, &VAR_12);
                        if (VAR_11 < 0) {
                                if (VAR_6)
                                        *VAR_6 = VAR_9 - VAR_5;
                                if (VAR_7)
                                        *VAR_7 = "attribute value not a valid number";
                                return VAR_11;
                        }
                }
        }

        return 0;
}
