
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seat_data {scalar_t__ version; int * pointer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct seat_data *VAR_1)
{
    if (VAR_1->pointer == ((void*)0))
        return;

    if (VAR_1->version >= VAR_0)
        FUNC_1(VAR_1->pointer);
    else
        FUNC_0(VAR_1->pointer);

    VAR_1->pointer = ((void*)0);
}
