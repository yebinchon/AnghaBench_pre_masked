
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VarlinkReplyFlags ;
typedef int Varlink ;
typedef int JsonVariant ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char const*,int ) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(Varlink *VAR_1, JsonVariant *VAR_2, const char *VAR_3, VarlinkReplyFlags VAR_4, void *VAR_5) {




        FUNC_1("Over reply triggered with error: %s", FUNC_4(VAR_3));
        FUNC_0(FUNC_3(VAR_3, VAR_0));
        FUNC_2(FUNC_5(VAR_1), 0);

        return 0;
}
