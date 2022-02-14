
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int,char**,void*) ;

__attribute__((used)) static int FUNC_3(int VAR_4, char *VAR_5[], void *VAR_6) {


        if (VAR_3 != VAR_2)
                return FUNC_1(FUNC_0(VAR_0),
                                       "Bad action for %s mode.",
                                       VAR_3 == VAR_1 ? "--global" : "--user");

        return FUNC_2(VAR_4, VAR_5, VAR_6);
}
