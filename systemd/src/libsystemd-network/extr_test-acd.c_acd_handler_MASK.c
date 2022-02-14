
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_ipv4acd ;





 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(sd_ipv4acd *VAR_0, int VAR_1, void *VAR_2) {
        FUNC_1(VAR_0);

        switch (VAR_1) {
        case 130:
                FUNC_3("bound");
                break;
        case 129:
                FUNC_3("conflict");
                break;
        case 128:
                FUNC_2("the client was stopped");
                break;
        default:
                FUNC_0("invalid ACD event");
        }
}
