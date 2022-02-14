
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_45__ TYPE_8__ ;
typedef struct TYPE_44__ TYPE_7__ ;
typedef struct TYPE_43__ TYPE_6__ ;
typedef struct TYPE_42__ TYPE_5__ ;
typedef struct TYPE_41__ TYPE_4__ ;
typedef struct TYPE_40__ TYPE_3__ ;
typedef struct TYPE_39__ TYPE_2__ ;
typedef struct TYPE_38__ TYPE_1__ ;


typedef void* varnumber_T ;
struct TYPE_40__ {void* v_number; scalar_t__ v_float; int v_string; TYPE_2__* v_list; TYPE_1__* v_dict; } ;
struct TYPE_41__ {TYPE_3__ vval; void* v_type; } ;
typedef TYPE_4__ typval_T ;
typedef scalar_t__ float_T ;
typedef int char_u ;
struct TYPE_45__ {TYPE_1__* dict; } ;
struct TYPE_44__ {int * name; } ;
struct TYPE_43__ {TYPE_2__* list; } ;
struct TYPE_42__ {int ob_type; } ;
struct TYPE_39__ {int lv_refcount; } ;
struct TYPE_38__ {int dv_refcount; } ;
typedef TYPE_5__ PyObject ;
typedef TYPE_6__ ListObject ;
typedef TYPE_7__ FunctionObject ;
typedef TYPE_8__ DictionaryObject ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_5__*,char**,int *) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 () ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (TYPE_5__*) ;
 scalar_t__ FUNC_7 (TYPE_5__*) ;
 scalar_t__ FUNC_8 (TYPE_5__*) ;
 scalar_t__ FUNC_9 (TYPE_5__*) ;
 scalar_t__ FUNC_10 (TYPE_5__*) ;
 scalar_t__ FUNC_11 (TYPE_5__*) ;
 scalar_t__ FUNC_12 (TYPE_5__*) ;
 scalar_t__ FUNC_13 (TYPE_5__*) ;
 scalar_t__ FUNC_14 (TYPE_5__*) ;
 TYPE_5__* FUNC_15 (TYPE_5__*) ;
 scalar_t__ FUNC_16 (TYPE_5__*,char*) ;
 scalar_t__ FUNC_17 (TYPE_5__*) ;
 scalar_t__ FUNC_18 (int ,int *) ;
 TYPE_5__* FUNC_19 (TYPE_5__*,int ,int *) ;
 scalar_t__ FUNC_20 (TYPE_5__*) ;
 int FUNC_21 (TYPE_5__*) ;
 int FUNC_22 (TYPE_5__*) ;
 int FUNC_23 (TYPE_5__*) ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int FUNC_24 (TYPE_5__*,TYPE_4__*,int ,TYPE_5__*) ;
 int FUNC_25 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_26 (int *,TYPE_4__*) ;

__attribute__((used)) static int
FUNC_27(PyObject *VAR_14, typval_T *VAR_15, PyObject *VAR_16)
{
    if (FUNC_18(VAR_14->ob_type, &VAR_0))
    {
 VAR_15->v_type = VAR_5;
 VAR_15->vval.v_dict = (((DictionaryObject *)(VAR_14))->dict);
 ++VAR_15->vval.v_dict->dv_refcount;
    }
    else if (FUNC_18(VAR_14->ob_type, &VAR_3))
    {
 VAR_15->v_type = VAR_8;
 VAR_15->vval.v_list = (((ListObject *)(VAR_14))->list);
 ++VAR_15->vval.v_list->lv_refcount;
    }
    else if (FUNC_18(VAR_14->ob_type, &VAR_2))
    {
 if (FUNC_26(((FunctionObject *) (VAR_14))->name, VAR_15) == -1)
     return -1;

 VAR_15->v_type = VAR_7;
 FUNC_25(VAR_15->vval.v_string);
    }
    else if (FUNC_2(VAR_14))
    {
 char_u *VAR_17;

 if (FUNC_1(VAR_14, (char **) &VAR_17, ((void*)0)) == -1)
     return -1;
 if (VAR_17 == ((void*)0))
     return -1;

 if (FUNC_26(VAR_17, VAR_15) == -1)
     return -1;

 VAR_15->v_type = VAR_10;
    }
    else if (FUNC_20(VAR_14))
    {
 PyObject *VAR_18;
 char_u *VAR_19;

 VAR_18 = FUNC_19(VAR_14, VAR_1, ((void*)0));
 if (VAR_18 == ((void*)0))
     return -1;

 if(FUNC_1(VAR_18, (char **) &VAR_19, ((void*)0)) == -1)
     return -1;
 if (VAR_19 == ((void*)0))
     return -1;

 if (FUNC_26(VAR_19, VAR_15))
 {
     FUNC_23(VAR_18);
     return -1;
 }
 FUNC_23(VAR_18);

 VAR_15->v_type = VAR_10;
    }

    else if (FUNC_9(VAR_14))
    {
 VAR_15->v_type = VAR_9;
 VAR_15->vval.v_number = (varnumber_T) FUNC_8(VAR_14);
 if (FUNC_5())
     return -1;
    }

    else if (FUNC_12(VAR_14))
    {
 VAR_15->v_type = VAR_9;
 VAR_15->vval.v_number = (varnumber_T) FUNC_11(VAR_14);
 if (FUNC_5())
     return -1;
    }
    else if (FUNC_3(VAR_14))
 return FUNC_24(VAR_14, VAR_15, VAR_11, VAR_16);







    else if (FUNC_16(VAR_14, "keys"))
 return FUNC_24(VAR_14, VAR_15, VAR_12, VAR_16);

    else if (FUNC_10(VAR_14) || FUNC_17(VAR_14))
 return FUNC_24(VAR_14, VAR_15, VAR_13, VAR_16);
    else if (FUNC_13(VAR_14))
 return FUNC_24(VAR_14, VAR_15, VAR_12, VAR_16);
    else if (FUNC_14(VAR_14))
    {
 PyObject *VAR_20;

 if (!(VAR_20 = FUNC_15(VAR_14)))
     return -1;

 VAR_15->v_type = VAR_9;
 VAR_15->vval.v_number = (varnumber_T) FUNC_11(VAR_20);

 FUNC_21(VAR_20);
    }
    else
    {
 FUNC_4(VAR_4,
  FUNC_0("unable to convert %s to vim structure"),
  FUNC_22(VAR_14));
 return -1;
    }
    return 0;
}
