
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seat_data {scalar_t__ version; int seat; int * xkb; int node; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct seat_data*) ;
 int FUNC_1 (struct seat_data*) ;
 int FUNC_2 (struct seat_data*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct seat_data *VAR_1)
{
    FUNC_3(&VAR_1->node);







    FUNC_2(VAR_1);

    if (VAR_1->version >= VAR_0)
        FUNC_5(VAR_1->seat);
    else
        FUNC_4(VAR_1->seat);
    FUNC_0(VAR_1);
}
