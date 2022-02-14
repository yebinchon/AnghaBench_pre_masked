
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uintmax_t ;
typedef scalar_t__ uint64_t ;
typedef int JsonVariant ;
typedef int JsonDispatchFlags ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int *,int ,int ,char*) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(const char *VAR_3, JsonVariant *VAR_4, JsonDispatchFlags VAR_5, void *VAR_6) {
        uint64_t *VAR_7 = VAR_6;
        uintmax_t VAR_8;

        FUNC_1(VAR_7);

        VAR_8 = FUNC_3(VAR_4);
        if (VAR_8 < VAR_1 || VAR_8 > VAR_0)
                return FUNC_2(VAR_4, VAR_5, FUNC_0(VAR_2),
                                "shares value out of range.");

        *VAR_7 = (uint64_t) VAR_8;
        return 0;
}
