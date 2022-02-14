
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int router_preference; } ;
typedef TYPE_1__ Network ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char const*,char*,char*,char*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (char const*,int ,char const*,unsigned int,int ,char*,char const*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

int FUNC_4(const char *VAR_5,
                                   const char *VAR_6,
                                   unsigned VAR_7,
                                   const char *VAR_8,
                                   unsigned VAR_9,
                                   const char *VAR_10,
                                   int VAR_11,
                                   const char *VAR_12,
                                   void *VAR_13,
                                   void *VAR_14) {
        Network *VAR_15 = VAR_14;

        FUNC_1(VAR_6);
        FUNC_1(VAR_8);
        FUNC_1(VAR_10);
        FUNC_1(VAR_12);
        FUNC_1(VAR_13);

        if (FUNC_3(VAR_12, "high"))
                VAR_15->router_preference = VAR_2;
        else if (FUNC_0(VAR_12, "medium", "normal", "default"))
                VAR_15->router_preference = VAR_4;
        else if (FUNC_3(VAR_12, "low"))
                VAR_15->router_preference = VAR_3;
        else
                FUNC_2(VAR_5, VAR_1, VAR_6, VAR_7, -VAR_0, "Router preference '%s' is invalid, ignoring assignment: %m", VAR_12);

        return 0;
}
