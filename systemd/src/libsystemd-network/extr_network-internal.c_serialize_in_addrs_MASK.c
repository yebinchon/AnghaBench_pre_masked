
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int dummy; } ;
typedef int sbuf ;
typedef struct in_addr const FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct in_addr const*) ;
 int FUNC_1 (char,struct in_addr const*) ;
 int FUNC_2 (int ,struct in_addr const*) ;
 int FUNC_3 (int ,struct in_addr const*,char*,int) ;

size_t FUNC_4(FILE *VAR_2,
                          const struct in_addr *VAR_3,
                          size_t VAR_4,
                          bool VAR_5,
                          bool (*VAR_6)(const struct in_addr *VAR_7)) {
        size_t VAR_8;
        size_t VAR_9;

        FUNC_0(VAR_2);
        FUNC_0(VAR_3);

        VAR_8 = 0;

        for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
                char VAR_10[VAR_1];

                if (VAR_6 && !VAR_6(&VAR_3[VAR_9]))
                        continue;
                if (VAR_5)
                        FUNC_1(' ', VAR_2);
                else
                        VAR_5 = 1;
                FUNC_2(FUNC_3(VAR_0, &VAR_3[VAR_9], VAR_10, sizeof(VAR_10)), VAR_2);
                VAR_8++;
        }

        return VAR_8;
}
