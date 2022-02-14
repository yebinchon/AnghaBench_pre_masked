
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char* const*) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char* const*,int ,size_t) ;
 char* FUNC_3 (char const*,size_t) ;
 char* FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(const uint8_t *VAR_2, size_t VAR_3, char **VAR_4) {
        FUNC_0(VAR_2);
        FUNC_0(VAR_4);

        if (VAR_3 <= 0)
                *VAR_4 = FUNC_4(*VAR_4);
        else {
                char *VAR_5;





                if (FUNC_2(VAR_2, 0, VAR_3 - 1))
                        return -VAR_0;

                VAR_5 = FUNC_3((const char *) VAR_2, VAR_3);
                if (!VAR_5)
                        return -VAR_1;

                FUNC_1(*VAR_4, VAR_5);
        }

        return 0;
}
