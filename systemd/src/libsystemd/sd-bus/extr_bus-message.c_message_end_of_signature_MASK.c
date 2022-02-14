
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bus_container {scalar_t__* signature; size_t index; } ;
typedef int sd_bus_message ;


 int FUNC_0 (int *) ;
 struct bus_container* FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(sd_bus_message *VAR_0) {
        struct bus_container *VAR_1;

        FUNC_0(VAR_0);

        VAR_1 = FUNC_1(VAR_0);
        return !VAR_1->signature || VAR_1->signature[VAR_1->index] == 0;
}
