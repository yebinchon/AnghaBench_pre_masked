
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,char*,int,char*,int,char*,int ,char*,int*,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(void) {
        int VAR_2;
        uint64_t VAR_3 = 0;

        VAR_2 = FUNC_3(((void*)0), "fake", 1, "section", 1,
                              "CapabilityBoundingSet", 0, "CAP_NET_RAW",
                              &VAR_3, ((void*)0));
        FUNC_1(VAR_2 >= 0);
        FUNC_1(VAR_3 == FUNC_4(VAR_1));

        VAR_2 = FUNC_3(((void*)0), "fake", 1, "section", 1,
                              "CapabilityBoundingSet", 0, "CAP_NET_ADMIN",
                              &VAR_3, ((void*)0));
        FUNC_1(VAR_2 >= 0);
        FUNC_1(VAR_3 == (FUNC_4(VAR_1) | FUNC_4(VAR_0)));

        VAR_2 = FUNC_3(((void*)0), "fake", 1, "section", 1,
                              "CapabilityBoundingSet", 0, "~CAP_NET_ADMIN",
                              &VAR_3, ((void*)0));
        FUNC_1(VAR_2 >= 0);
        FUNC_1(VAR_3 == FUNC_4(VAR_1));

        VAR_2 = FUNC_3(((void*)0), "fake", 1, "section", 1,
                              "CapabilityBoundingSet", 0, "",
                              &VAR_3, ((void*)0));
        FUNC_1(VAR_2 >= 0);
        FUNC_1(VAR_3 == FUNC_0(0));

        VAR_2 = FUNC_3(((void*)0), "fake", 1, "section", 1,
                              "CapabilityBoundingSet", 0, "~",
                              &VAR_3, ((void*)0));
        FUNC_1(VAR_2 >= 0);
        FUNC_1(FUNC_2(VAR_3));

        VAR_3 = 0;
        VAR_2 = FUNC_3(((void*)0), "fake", 1, "section", 1,
                              "CapabilityBoundingSet", 0, "  'CAP_NET_RAW' WAT_CAP??? CAP_NET_ADMIN CAP'_trailing_garbage",
                              &VAR_3, ((void*)0));
        FUNC_1(VAR_2 >= 0);
        FUNC_1(VAR_3 == (FUNC_4(VAR_1) | FUNC_4(VAR_0)));
}
