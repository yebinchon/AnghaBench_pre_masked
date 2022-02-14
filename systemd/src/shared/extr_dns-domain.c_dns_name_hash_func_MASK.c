
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siphash {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const**,char*,int,int ) ;
 int FUNC_3 (char*,int,struct siphash*) ;
 int FUNC_4 (int ,struct siphash*) ;
 int FUNC_5 (char*,struct siphash*) ;

void FUNC_6(const char *VAR_1, struct siphash *VAR_2) {
        int VAR_3;

        FUNC_1(VAR_1);

        for (;;) {
                char VAR_4[VAR_0+1];

                VAR_3 = FUNC_2(&VAR_1, VAR_4, sizeof VAR_4, 0);
                if (VAR_3 < 0)
                        break;
                if (VAR_3 == 0)
                        break;

                FUNC_0(VAR_4, VAR_3);
                FUNC_3(VAR_4, VAR_3, VAR_2);
                FUNC_4(0, VAR_2);
        }


        FUNC_5("", VAR_2);
}
