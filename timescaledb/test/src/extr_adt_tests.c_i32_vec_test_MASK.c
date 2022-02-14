
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_10__ {int num_elements; int max_elements; int data; } ;
typedef TYPE_1__ int32_vec ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int* FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_1__*,int,int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_11(void)
{
 int32_vec *VAR_2 = FUNC_6(VAR_0, 0);
 int VAR_3;
 uint32 VAR_4;
 for (VAR_3 = 0; VAR_3 < 100; VAR_3++)
  FUNC_3(VAR_2, VAR_3);

 FUNC_0(VAR_2->num_elements, 100);

 if (VAR_2->max_elements < 100)
  FUNC_2(VAR_1, "vec capacity %d, should be at least 100", VAR_2->max_elements);

 for (VAR_3 = 0; VAR_3 < 100; VAR_3++)
  FUNC_0(*FUNC_4(VAR_2, VAR_3), VAR_3);

 FUNC_1(FUNC_10(VAR_2), FUNC_4(VAR_2, VAR_2->num_elements - 1));

 VAR_4 = VAR_2->max_elements;
 FUNC_7(VAR_2, 30, 19);
 FUNC_0(VAR_2->num_elements, 81);
 FUNC_0(VAR_2->max_elements, VAR_4);

 for (VAR_3 = 0; VAR_3 < 30; VAR_3++)
  FUNC_0(*FUNC_4(VAR_2, VAR_3), VAR_3);

 for (; VAR_3 < 51; VAR_3++)
  FUNC_0(*FUNC_4(VAR_2, VAR_3), VAR_3 + 19);

 FUNC_1(FUNC_10(VAR_2), FUNC_4(VAR_2, VAR_2->num_elements - 1));

 FUNC_5(VAR_2);
 FUNC_0(VAR_2->num_elements, 0);
 FUNC_0(VAR_2->max_elements, VAR_4);

 FUNC_9(VAR_2);
 FUNC_0(VAR_2->num_elements, 0);
 FUNC_0(VAR_2->max_elements, 0);
 FUNC_1(VAR_2->data, ((void*)0));


 FUNC_9(VAR_2);
 FUNC_0(VAR_2->num_elements, 0);
 FUNC_0(VAR_2->max_elements, 0);
 FUNC_1(VAR_2->data, ((void*)0));

 FUNC_8(VAR_2);
}
