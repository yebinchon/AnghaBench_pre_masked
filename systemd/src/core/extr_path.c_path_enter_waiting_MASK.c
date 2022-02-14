
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Path ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int,char*) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(Path *VAR_2, bool VAR_3, bool VAR_4) {
        int VAR_5;

        if (VAR_4)
                if (FUNC_3(VAR_2, VAR_3)) {
                        FUNC_1(FUNC_0(VAR_2), "Got triggered.");
                        FUNC_5(VAR_2);
                        return;
                }

        VAR_5 = FUNC_7(VAR_2);
        if (VAR_5 < 0)
                goto fail;





        if (VAR_4)
                if (FUNC_3(VAR_2, 0)) {
                        FUNC_1(FUNC_0(VAR_2), "Got triggered.");
                        FUNC_5(VAR_2);
                        return;
                }

        FUNC_6(VAR_2, VAR_1);
        return;

fail:
        FUNC_2(FUNC_0(VAR_2), VAR_5, "Failed to enter waiting state: %m");
        FUNC_4(VAR_2, VAR_0);
}
