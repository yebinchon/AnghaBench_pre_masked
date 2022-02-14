
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const sd_journal ;


 size_t VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char const*,void const**,size_t*) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (char const*,size_t) ;

__attribute__((used)) static char *FUNC_5(const char *VAR_1, void *VAR_2) {
        sd_journal *VAR_3 = VAR_2;
        const void *VAR_4;
        size_t VAR_5, VAR_6;
        int VAR_7;

        FUNC_0(VAR_1);
        FUNC_0(VAR_3);

        VAR_7 = FUNC_1(VAR_3, VAR_1, &VAR_4, &VAR_5);
        if (VAR_7 < 0 ||
            VAR_5 > VAR_0)
                return FUNC_2(VAR_1);

        VAR_6 = FUNC_3(VAR_1) + 1;

        return FUNC_4((const char*) VAR_4 + VAR_6, VAR_5 - VAR_6);
}
