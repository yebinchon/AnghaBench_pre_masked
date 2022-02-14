
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
typedef int uintmax_t ;
typedef int JsonVariant ;
typedef int JsonDispatchFlags ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ,char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(const char *VAR_3, JsonVariant *VAR_4, JsonDispatchFlags VAR_5, void *VAR_6) {
        usec_t *VAR_7 = VAR_6;
        uintmax_t VAR_8;

        VAR_8 = FUNC_2(VAR_4);
        if (VAR_8 == 0 || VAR_8 > (VAR_1-1)/VAR_2)
                return FUNC_1(VAR_4, VAR_5, FUNC_0(VAR_0),
                                "Hook timeout value out of range.");

        *VAR_7 = VAR_8 * VAR_2;
        return 0;
}
