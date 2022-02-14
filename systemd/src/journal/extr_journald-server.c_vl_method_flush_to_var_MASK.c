
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VarlinkMethodFlags ;
typedef int Varlink ;
typedef int Server ;
typedef int JsonVariant ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static int FUNC_6(Varlink *VAR_0, JsonVariant *VAR_1, VarlinkMethodFlags VAR_2, void *VAR_3) {
        Server *VAR_4 = VAR_3;

        FUNC_0(VAR_0);
        FUNC_0(VAR_4);

        if (FUNC_1(VAR_1) > 0)
                return FUNC_4(VAR_0, VAR_1);

        FUNC_2("Received client request to flush runtime journal.");
        FUNC_3(VAR_4);

        return FUNC_5(VAR_0, ((void*)0));
}
