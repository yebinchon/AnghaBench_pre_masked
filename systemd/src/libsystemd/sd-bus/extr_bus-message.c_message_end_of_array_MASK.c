
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bus_container {scalar_t__ enclosing; size_t end; size_t begin; int * array_size; } ;
typedef int sd_bus_message ;


 size_t FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *) ;
 struct bus_container* FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4(sd_bus_message *VAR_1, size_t VAR_2) {
        struct bus_container *VAR_3;

        FUNC_2(VAR_1);

        VAR_3 = FUNC_3(VAR_1);
        if (VAR_3->enclosing != VAR_0)
                return 0;

        if (FUNC_1(VAR_1))
                return VAR_2 >= VAR_3->end;
        else {
                FUNC_2(VAR_3->array_size);
                return VAR_2 >= VAR_3->begin + FUNC_0(VAR_1, *VAR_3->array_size);
        }
}
