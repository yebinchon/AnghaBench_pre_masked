
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; char* help; } ;


 unsigned int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int FUNC_0 (int ,char*,char*,char*) ;
 int VAR_2 ;

void FUNC_1(void) {
        unsigned VAR_3;

        for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
                if (VAR_1[VAR_3])
                        FUNC_0(VAR_2, "  %-14s  %s\n", VAR_1[VAR_3]->name, VAR_1[VAR_3]->help);
}
