
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Socket ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int,char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(Socket *VAR_2) {
        int VAR_3;
        FUNC_1(VAR_2);

        VAR_3 = FUNC_5(VAR_2);
        if (VAR_3 < 0) {
                FUNC_2(FUNC_0(VAR_2), VAR_3, "Failed to watch sockets: %m");
                goto fail;
        }

        FUNC_4(VAR_2, VAR_1);
        return;

fail:
        FUNC_3(VAR_2, VAR_0);
}
