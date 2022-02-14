
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ usec_t ;
struct TYPE_3__ {scalar_t__ type; scalar_t__ llt_time; } ;
typedef scalar_t__ DUIDType ;
typedef TYPE_1__ DUID ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int,char*,int,char*,int ,char const*,TYPE_1__*,int *) ;
 int FUNC_2 (int,char*,char const*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(const char *VAR_1, int VAR_2, DUIDType VAR_3, usec_t VAR_4) {
        DUID VAR_5 = {};
        int VAR_6;

        VAR_6 = FUNC_1("network", "filename", 1, "section", 1, "lvalue", 0, VAR_1, &VAR_5, ((void*)0));
        FUNC_2(VAR_6, "\"%s\" → %d (%m)", VAR_1, VAR_5.type);
        FUNC_0(VAR_6 == VAR_2);
        FUNC_0(VAR_3 == VAR_5.type);
        if (VAR_3 == VAR_0)
                FUNC_0(VAR_4 == VAR_5.llt_time);
}
