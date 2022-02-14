
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *,int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int,int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(void) {

        if (FUNC_2(0, ((void*)0), ((void*)0)) >= 0)
                return 0;


        FUNC_1(FUNC_0(VAR_4, VAR_1, VAR_0));

        if (FUNC_3(1, VAR_4 == VAR_1 ? VAR_2 : VAR_3) < 0)
                return FUNC_4(VAR_5, "kill() failed: %m");

        return 0;
}
