
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ConditionType ;
typedef int Condition ;


 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (void*) ;
 int * FUNC_2 (int *,int) ;
 int * FUNC_3 (int,char const*,int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 () ;

int FUNC_6(const char *VAR_1,
                               const char *VAR_2,
                               unsigned VAR_3,
                               const char *VAR_4,
                               unsigned VAR_5,
                               const char *VAR_6,
                               int VAR_7,
                               const char *VAR_8,
                               void *VAR_9,
                               void *VAR_10) {

        ConditionType VAR_11 = VAR_7;
        Condition **VAR_12 = VAR_9, *VAR_13;
        bool VAR_14;

        FUNC_1(VAR_2);
        FUNC_1(VAR_6);
        FUNC_1(VAR_8);
        FUNC_1(VAR_9);

        if (FUNC_4(VAR_8)) {
                *VAR_12 = FUNC_2(*VAR_12, VAR_11);
                return 0;
        }

        VAR_14 = VAR_8[0] == '!';
        if (VAR_14)
                VAR_8++;

        VAR_13 = FUNC_3(VAR_11, VAR_8, 0, VAR_14);
        if (!VAR_13)
                return FUNC_5();


        *VAR_12 = FUNC_2(*VAR_12, VAR_11);

        FUNC_0(VAR_0, *VAR_12, VAR_13);
        return 0;
}
