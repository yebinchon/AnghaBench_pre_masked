
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* llmnr_hostname; struct TYPE_4__* manager; } ;
typedef TYPE_1__ DnssdService ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 char* FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(char VAR_1, const void *VAR_2, const void *VAR_3, char **VAR_4) {
        DnssdService *VAR_5 = (DnssdService *) VAR_3;
        char *VAR_6;

        FUNC_0(VAR_5);
        FUNC_0(VAR_5->manager);
        FUNC_0(VAR_5->manager->llmnr_hostname);

        VAR_6 = FUNC_1(VAR_5->manager->llmnr_hostname);
        if (!VAR_6)
                return -VAR_0;

        *VAR_4 = VAR_6;
        return 0;
}
