
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s; } ;
typedef TYPE_1__ stream_t ;
typedef int input_item_t ;
typedef int input_item_node_t ;


 int * FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 char* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(stream_t *VAR_1, input_item_node_t *VAR_2)
{
    char *VAR_3;

    while ((VAR_3 = FUNC_4(VAR_1->s)) != ((void*)0))
    {
        input_item_t *VAR_4 = FUNC_0(VAR_3);
        FUNC_1(VAR_3);
        if (VAR_4 == ((void*)0))
            continue;

        FUNC_3(VAR_2, VAR_4);
        FUNC_2(VAR_4);
    }

    return VAR_0;
}
