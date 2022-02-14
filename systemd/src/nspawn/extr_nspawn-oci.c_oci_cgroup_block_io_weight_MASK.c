
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uintmax_t ;
typedef int uint64_t ;
struct TYPE_4__ {int properties; } ;
typedef TYPE_1__ Settings ;
typedef int JsonVariant ;
typedef int JsonDispatchFlags ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ,int ,char*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,char*,char*,int ) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(const char *VAR_3, JsonVariant *VAR_4, JsonDispatchFlags VAR_5, void *VAR_6) {
        Settings *VAR_7 = VAR_6;
        uintmax_t VAR_8;
        int VAR_9;

        FUNC_1(VAR_7);

        VAR_8 = FUNC_4(VAR_4);
        if (VAR_8 < VAR_1 || VAR_8 > VAR_0)
                return FUNC_3(VAR_4, VAR_5, FUNC_0(VAR_2),
                                "Block I/O weight out of range.");

        VAR_9 = FUNC_6(VAR_7);
        if (VAR_9 < 0)
                return VAR_9;

        VAR_9 = FUNC_5(VAR_7->properties, "(sv)", "BlockIOWeight", "t", (uint64_t) VAR_8);
        if (VAR_9 < 0)
                return FUNC_2(VAR_9);

        return 0;
}
