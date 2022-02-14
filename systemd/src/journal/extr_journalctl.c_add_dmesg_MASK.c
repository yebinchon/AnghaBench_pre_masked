
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_journal ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int ) ;

__attribute__((used)) static int FUNC_5(sd_journal *VAR_1) {
        int VAR_2;
        FUNC_1(VAR_1);

        if (!VAR_0)
                return 0;

        VAR_2 = FUNC_4(VAR_1, "_TRANSPORT=kernel",
                                 FUNC_0("_TRANSPORT=kernel"));
        if (VAR_2 < 0)
                return FUNC_2(VAR_2, "Failed to add match: %m");

        VAR_2 = FUNC_3(VAR_1);
        if (VAR_2 < 0)
                return FUNC_2(VAR_2, "Failed to add conjunction: %m");

        return 0;
}
