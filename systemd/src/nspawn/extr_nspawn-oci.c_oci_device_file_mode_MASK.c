
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uintmax_t ;
typedef int mode_t ;
typedef int JsonVariant ;
typedef int JsonDispatchFlags ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int *,int ,int ,char*) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(const char *VAR_1, JsonVariant *VAR_2, JsonDispatchFlags VAR_3, void *VAR_4) {
        mode_t *VAR_5 = VAR_4, VAR_6;
        uintmax_t VAR_7;

        FUNC_1(VAR_5);

        VAR_7 = FUNC_3(VAR_2);
        VAR_6 = (mode_t) VAR_7;

        if ((VAR_6 & ~07777) != 0 || (uintmax_t) VAR_6 != VAR_7)
                return FUNC_2(VAR_2, VAR_3, FUNC_0(VAR_0),
                                "fileMode out of range, refusing.");

        *VAR_5 = VAR_6;
        return 0;
}
