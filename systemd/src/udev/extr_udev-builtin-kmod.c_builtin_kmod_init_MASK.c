
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (scalar_t__,int ,int *) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(void) {
        if (VAR_1)
                return 0;

        VAR_1 = FUNC_1(((void*)0), ((void*)0));
        if (!VAR_1)
                return -VAR_0;

        FUNC_3("Load module index");
        FUNC_2(VAR_1, VAR_2, ((void*)0));
        FUNC_0(VAR_1);
        return 0;
}
