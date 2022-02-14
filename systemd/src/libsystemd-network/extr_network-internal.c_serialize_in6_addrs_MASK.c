
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int dummy; } ;
typedef int buffer ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (char,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,struct in6_addr const*,char*,int) ;

void FUNC_4(FILE *VAR_2, const struct in6_addr *VAR_3, size_t VAR_4) {
        unsigned VAR_5;

        FUNC_0(VAR_2);
        FUNC_0(VAR_3);
        FUNC_0(VAR_4);

        for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
                char VAR_6[VAR_1];

                FUNC_2(FUNC_3(VAR_0, VAR_3+VAR_5, VAR_6, sizeof(VAR_6)), VAR_2);

                if (VAR_5 < VAR_4 - 1)
                        FUNC_1(' ', VAR_2);
        }
}
