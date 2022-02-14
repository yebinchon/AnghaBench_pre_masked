
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* ifname; int mac; } ;
typedef TYPE_1__ Link ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *,char*) ;
 int FUNC_3 (TYPE_1__*,char*,char*) ;
 int FUNC_4 (char*,TYPE_1__*) ;

void FUNC_5(Link *VAR_1, FILE *VAR_2) {
        char VAR_3[VAR_0];

        FUNC_0(VAR_1);
        FUNC_0(VAR_2);

        FUNC_4("[Match]\n", VAR_2);

        if (!FUNC_1(&VAR_1->mac))
                FUNC_3(VAR_2, "MACAddress=%s\n", FUNC_2(&VAR_1->mac, VAR_3));

        FUNC_3(VAR_2,
                "\n[Link]\n"
                "Name=%s\n",
                VAR_1->ifname);
}
