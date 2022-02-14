
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VarlinkReplyFlags ;
typedef int Varlink ;
typedef int JsonVariant ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(Varlink *VAR_2, JsonVariant *VAR_3, const char *VAR_4, VarlinkReplyFlags VAR_5, void *VAR_6) {
        JsonVariant *VAR_7;

        VAR_7 = FUNC_1(VAR_3, "sum");

        FUNC_0(FUNC_2(VAR_7) == 7+22);

        if (++VAR_1 == 2)
                FUNC_3(FUNC_4(VAR_2), VAR_0);

        return 0;
}
