
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_journal ;
typedef int match ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(sd_journal *VAR_3) {
        char VAR_4[] = "PRIORITY=0";
        int VAR_5, VAR_6;
        FUNC_0(VAR_3);

        if (VAR_2 == 0xFF)
                return 0;

        for (VAR_5 = VAR_1; VAR_5 <= VAR_0; VAR_5++)
                if (VAR_2 & (1 << VAR_5)) {
                        VAR_4[sizeof(VAR_4)-2] = '0' + VAR_5;

                        VAR_6 = FUNC_3(VAR_3, VAR_4, FUNC_4(VAR_4));
                        if (VAR_6 < 0)
                                return FUNC_1(VAR_6, "Failed to add match: %m");
                }

        VAR_6 = FUNC_2(VAR_3);
        if (VAR_6 < 0)
                return FUNC_1(VAR_6, "Failed to add conjunction: %m");

        return 0;
}
