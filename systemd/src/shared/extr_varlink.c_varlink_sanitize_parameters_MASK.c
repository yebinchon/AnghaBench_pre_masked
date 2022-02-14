
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JsonVariant ;


 int VAR_0 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int *,int ) ;

__attribute__((used)) static int FUNC_3(JsonVariant **VAR_1) {
        FUNC_0(VAR_1);


        if (!*VAR_1)
                return FUNC_2(VAR_1, ((void*)0), 0);
        else if (!FUNC_1(*VAR_1))
                return -VAR_0;

        return 0;
}
