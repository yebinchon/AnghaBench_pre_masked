
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uintmax_t ;
typedef scalar_t__ rlim_t ;
typedef int JsonVariant ;
typedef int JsonDispatchFlags ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int *,int ,int ,char*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(const char *VAR_3, JsonVariant *VAR_4, JsonDispatchFlags VAR_5, void *VAR_6) {
        rlim_t VAR_7, *VAR_8 = VAR_6;

        FUNC_1(VAR_8);

        if (FUNC_3(VAR_4))
                VAR_7 = VAR_2;
        else {
                if (!FUNC_4(VAR_4))
                        return FUNC_2(VAR_4, VAR_5, FUNC_0(VAR_1),
                                        "rlimits limit not unsigned, refusing.");

                VAR_7 = (rlim_t) FUNC_5(VAR_4);

                if ((uintmax_t) VAR_7 != FUNC_5(VAR_4))
                        return FUNC_2(VAR_4, VAR_5, FUNC_0(VAR_0),
                                        "rlimits limit out of range, refusing.");
        }

        *VAR_8 = VAR_7;
        return 0;
}
