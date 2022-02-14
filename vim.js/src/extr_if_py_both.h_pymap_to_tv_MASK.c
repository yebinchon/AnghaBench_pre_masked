
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


struct TYPE_15__ {TYPE_4__* v_dict; } ;
struct TYPE_16__ {TYPE_1__ vval; int v_type; } ;
typedef TYPE_2__ typval_T ;
struct TYPE_14__ {scalar_t__ v_lock; } ;
struct TYPE_17__ {int di_key; TYPE_13__ di_tv; } ;
typedef TYPE_3__ dictitem_T ;
struct TYPE_18__ {int dv_refcount; } ;
typedef TYPE_4__ dict_T ;
typedef scalar_t__ char_u ;
typedef int PyObject ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int VAR_2 ;
 scalar_t__* FUNC_8 (int *,int **) ;
 int VAR_3 ;
 int FUNC_9 (int *,TYPE_13__*,int *) ;
 scalar_t__ FUNC_10 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_11 (TYPE_4__*) ;
 TYPE_3__* FUNC_12 (scalar_t__*) ;
 int FUNC_13 (TYPE_3__*) ;
 TYPE_4__* FUNC_14 () ;
 int FUNC_15 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_16(PyObject *VAR_4, typval_T *VAR_5, PyObject *VAR_6)
{
    dict_T *VAR_7;
    char_u *VAR_8;
    dictitem_T *VAR_9;
    PyObject *VAR_10;
    PyObject *VAR_11;
    PyObject *VAR_12;
    PyObject *VAR_13;

    if (!(VAR_7 = FUNC_14()))
 return -1;

    VAR_5->v_type = VAR_3;
    VAR_5->vval.v_dict = VAR_7;

    if (!(VAR_10 = FUNC_2(VAR_4)))
    {
 FUNC_11(VAR_7);
 return -1;
    }

    if (!(VAR_11 = FUNC_4(VAR_10)))
    {
 FUNC_11(VAR_7);
 FUNC_5(VAR_10);
 return -1;
    }
    FUNC_5(VAR_10);

    while ((VAR_12 = FUNC_1(VAR_11)))
    {
 PyObject *VAR_14;

 if (!(VAR_8 = FUNC_8(VAR_12, &VAR_14)))
 {
     FUNC_5(VAR_12);
     FUNC_5(VAR_11);
     FUNC_11(VAR_7);
     return -1;
 }

 if (*VAR_8 == VAR_1)
 {
     FUNC_5(VAR_12);
     FUNC_5(VAR_11);
     FUNC_6(VAR_14);
     FUNC_11(VAR_7);
     VAR_2;
     return -1;
 }

 if (!(VAR_13 = FUNC_3(VAR_4, VAR_12)))
 {
     FUNC_5(VAR_12);
     FUNC_5(VAR_11);
     FUNC_6(VAR_14);
     FUNC_11(VAR_7);
     return -1;
 }

 VAR_9 = FUNC_12(VAR_8);

 FUNC_5(VAR_12);
 FUNC_6(VAR_14);

 if (VAR_9 == ((void*)0))
 {
     FUNC_5(VAR_11);
     FUNC_5(VAR_13);
     FUNC_11(VAR_7);
     FUNC_0();
     return -1;
 }
 VAR_9->di_tv.v_lock = 0;

 if (FUNC_9(VAR_13, &VAR_9->di_tv, VAR_6) == -1)
 {
     FUNC_5(VAR_11);
     FUNC_5(VAR_13);
     FUNC_15(VAR_9);
     FUNC_11(VAR_7);
     return -1;
 }

 FUNC_5(VAR_13);

 if (FUNC_10(VAR_7, VAR_9) == VAR_0)
 {
     FUNC_7(VAR_9->di_key);
     FUNC_5(VAR_11);
     FUNC_13(VAR_9);
     FUNC_11(VAR_7);
     return -1;
 }
    }
    FUNC_5(VAR_11);
    --VAR_7->dv_refcount;
    return 0;
}
