
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Link ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int ,char*,char*,char*) ;

__attribute__((used)) static int FUNC_3(Link *VAR_1) {
        int VAR_2;

        if (!FUNC_0(VAR_1))
                return 0;
        VAR_2 = FUNC_2(VAR_0, "all", "forwarding", "1");
        if (VAR_2 < 0)
                FUNC_1(VAR_1, VAR_2, "Cannot configure IPv6 packet forwarding, ignoring: %m");

        return 0;
}
