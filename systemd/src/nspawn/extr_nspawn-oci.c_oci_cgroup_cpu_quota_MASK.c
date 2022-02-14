
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uintmax_t ;
typedef scalar_t__ uint64_t ;
typedef int JsonVariant ;
typedef int JsonDispatchFlags ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int *,int ,int ,char*) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(const char *VAR_2, JsonVariant *VAR_3, JsonDispatchFlags VAR_4, void *VAR_5) {
        uint64_t *VAR_6 = VAR_5;
        uintmax_t VAR_7;

        FUNC_1(VAR_6);

        VAR_7 = FUNC_3(VAR_3);
        if (VAR_7 <= 0 || VAR_7 >= VAR_1)
                return FUNC_2(VAR_3, VAR_4, FUNC_0(VAR_0),
                                "period/quota value out of range.");

        *VAR_6 = (uint64_t) VAR_7;
        return 0;
}
