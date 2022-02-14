
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uintmax_t ;
typedef int JsonVariant ;
typedef int JsonDispatchFlags ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int*) ;
 int FUNC_3 (int *,int ,int ,char*,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(const char *VAR_1, JsonVariant *VAR_2, JsonDispatchFlags VAR_3, void *VAR_4) {
        unsigned *VAR_5 = VAR_4;
        uintmax_t VAR_6;

        FUNC_2(VAR_5);

        VAR_6 = FUNC_4(VAR_2);
        if (!FUNC_0(VAR_6))
                return FUNC_3(VAR_2, VAR_3, FUNC_1(VAR_0),
                                "Device minor %ji out of range.", VAR_6);

        *VAR_5 = (unsigned) VAR_6;
        return 0;
}
