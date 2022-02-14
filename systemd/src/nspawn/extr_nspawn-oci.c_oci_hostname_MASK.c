
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hostname; } ;
typedef TYPE_1__ Settings ;
typedef int JsonVariant ;
typedef int JsonDispatchFlags ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (char const*,int) ;
 int FUNC_5 (int *,int ,int ,char*,char const*) ;
 char* FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(const char *VAR_1, JsonVariant *VAR_2, JsonDispatchFlags VAR_3, void *VAR_4) {
        Settings *VAR_5 = VAR_4;
        const char *VAR_6;

        FUNC_1(VAR_5);

        FUNC_2(VAR_6 = FUNC_6(VAR_2));

        if (!FUNC_4(VAR_6, 0))
                return FUNC_5(VAR_2, VAR_3, FUNC_0(VAR_0),
                                "Hostname string is not a valid hostname: %s", VAR_6);

        return FUNC_3(&VAR_5->hostname, VAR_6);
}
