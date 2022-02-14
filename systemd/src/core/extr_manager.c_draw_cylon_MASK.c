
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 char* FUNC_2 (char*,char,unsigned int) ;
 char* FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static void FUNC_5(char VAR_4[], size_t VAR_5, unsigned VAR_6, unsigned VAR_7) {
        char *VAR_8 = VAR_4;

        FUNC_0(VAR_5 >= VAR_3 + VAR_6 + 1);
        FUNC_0(VAR_7 <= VAR_6+1);

        if (VAR_7 > 1) {
                if (VAR_7 > 2)
                        VAR_8 = FUNC_2(VAR_8, ' ', VAR_7-2);
                if (FUNC_1())
                        VAR_8 = FUNC_3(VAR_8, VAR_2);
                *VAR_8++ = '*';
        }

        if (VAR_7 > 0 && VAR_7 <= VAR_6) {
                if (FUNC_1())
                        VAR_8 = FUNC_3(VAR_8, VAR_0);
                *VAR_8++ = '*';
        }

        if (FUNC_1())
                VAR_8 = FUNC_3(VAR_8, VAR_1);

        if (VAR_7 < VAR_6) {
                if (FUNC_1())
                        VAR_8 = FUNC_3(VAR_8, VAR_2);
                *VAR_8++ = '*';
                if (VAR_7 < VAR_6-1)
                        VAR_8 = FUNC_2(VAR_8, ' ', VAR_6-1-VAR_7);
                if (FUNC_1())
                        FUNC_4(VAR_8, VAR_1);
        }
}
