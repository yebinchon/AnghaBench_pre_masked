
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct local_address {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct local_address*) ;
 int FUNC_2 (int *,int ,int ,struct local_address**) ;
 int FUNC_3 (int *,int ,int ,struct local_address**) ;
 struct local_address* FUNC_4 (struct local_address*) ;
 int FUNC_5 (struct local_address*,unsigned int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;

int FUNC_8(int VAR_2, char *VAR_3[]) {
        struct local_address *VAR_4;
        int VAR_5;

        FUNC_7(VAR_1);

        VAR_4 = ((void*)0);
        VAR_5 = FUNC_2(((void*)0), 0, VAR_0, &VAR_4);
        FUNC_0(VAR_5 >= 0);

        FUNC_6("Local Addresses:\n");
        FUNC_5(VAR_4, (unsigned) VAR_5);
        VAR_4 = FUNC_4(VAR_4);

        VAR_5 = FUNC_3(((void*)0), 0, VAR_0, &VAR_4);
        FUNC_0(VAR_5 >= 0);

        FUNC_6("Local Gateways:\n");
        FUNC_5(VAR_4, (unsigned) VAR_5);
        FUNC_1(VAR_4);

        return 0;
}
