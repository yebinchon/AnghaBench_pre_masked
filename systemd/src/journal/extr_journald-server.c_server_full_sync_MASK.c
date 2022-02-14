
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Server ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static void FUNC_5(Server *VAR_1) {
        int VAR_2;

        FUNC_0(VAR_1);

        FUNC_3(VAR_1);


        VAR_2 = FUNC_4("/run/systemd/journal/synced", FUNC_2(VAR_0));
        if (VAR_2 < 0)
                FUNC_1(VAR_2, "Failed to write /run/systemd/journal/synced, ignoring: %m");

        return;
}
