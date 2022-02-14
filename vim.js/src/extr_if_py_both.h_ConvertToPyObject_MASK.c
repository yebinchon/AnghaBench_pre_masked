
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * v_string; int v_dict; int v_list; scalar_t__ v_float; scalar_t__ v_number; } ;
struct TYPE_5__ {int v_type; TYPE_1__ vval; } ;
typedef TYPE_2__ typval_T ;
typedef int char_u ;
typedef int PyObject ;


 int * FUNC_0 (int ) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (double) ;
 int * FUNC_7 (long) ;
 int FUNC_8 (int *) ;
 int * VAR_0 ;
__attribute__((used)) static PyObject *
FUNC_9(typval_T *VAR_1)
{
    if (VAR_1 == ((void*)0))
    {
 FUNC_5(FUNC_3("internal error: NULL reference passed"));
 return ((void*)0);
    }
    switch (VAR_1->v_type)
    {
 case 129:
     return FUNC_4(VAR_1->vval.v_string == ((void*)0)
         ? "" : (char *)VAR_1->vval.v_string);
 case 130:
     return FUNC_7((long) VAR_1->vval.v_number);




 case 131:
     return FUNC_2(VAR_1->vval.v_list);
 case 134:
     return FUNC_0(VAR_1->vval.v_dict);
 case 132:
     return FUNC_1(VAR_1->vval.v_string == ((void*)0)
       ? (char_u *)"" : VAR_1->vval.v_string);
 case 128:
     FUNC_8(VAR_0);
     return VAR_0;
 default:
     FUNC_5(FUNC_3("internal error: invalid value type"));
     return ((void*)0);
    }
}
