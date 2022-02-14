
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ifindex; } ;
typedef TYPE_1__ Link ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (char*,char*,char**) ;
 int FUNC_3 (char*,char*,int ) ;

char *FUNC_4(const Link *VAR_0) {
        char *VAR_1, VAR_2[FUNC_0(VAR_0->ifindex)];
        int VAR_3;

        FUNC_1(VAR_0);

        FUNC_3(VAR_2, "%i", VAR_0->ifindex);

        VAR_3 = FUNC_2("/org/freedesktop/resolve1/link", VAR_2, &VAR_1);
        if (VAR_3 < 0)
                return ((void*)0);

        return VAR_1;
}
