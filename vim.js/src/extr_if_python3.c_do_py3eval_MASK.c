
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int v_number; int v_string; TYPE_2__* v_list; TYPE_1__* v_dict; } ;
struct TYPE_9__ {int v_type; TYPE_3__ vval; } ;
typedef TYPE_4__ typval_T ;
typedef int runner ;
typedef int rangeinitializer ;
typedef int char_u ;
struct TYPE_7__ {int lv_refcount; } ;
struct TYPE_6__ {int dv_refcount; } ;


 int FUNC_0 (char*,int ,int ,void*) ;



 int VAR_0 ;

 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

void
FUNC_2 (char_u *VAR_3, typval_T *VAR_4)
{
    FUNC_0((char *) VAR_3,
     (rangeinitializer) VAR_1,
     (runner) VAR_2,
     (void *) VAR_4);
    switch(VAR_4->v_type)
    {
 case 131: ++VAR_4->vval.v_dict->dv_refcount; break;
 case 129: ++VAR_4->vval.v_list->lv_refcount; break;
 case 130: FUNC_1(VAR_4->vval.v_string); break;
 case 128:
     VAR_4->v_type = VAR_0;
     VAR_4->vval.v_number = 0;
     break;
    }
}
