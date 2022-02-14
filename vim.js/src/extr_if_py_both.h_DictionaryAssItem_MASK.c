
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int v_type; scalar_t__ v_lock; } ;
typedef TYPE_1__ typval_T ;
typedef int hashitem_T ;
struct TYPE_18__ {TYPE_1__ di_tv; int di_key; } ;
typedef TYPE_2__ dictitem_T ;
struct TYPE_19__ {int dv_hashtab; scalar_t__ dv_lock; } ;
typedef TYPE_3__ dict_T ;
typedef scalar_t__ char_u ;
struct TYPE_20__ {TYPE_3__* dict; } ;
typedef int PyObject ;
typedef int PyInt ;
typedef TYPE_4__ DictionaryObject ;


 int FUNC_0 (int *,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__* FUNC_5 (int *,int **) ;
 int VAR_5 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_9 (TYPE_3__*,scalar_t__*,int) ;
 TYPE_2__* FUNC_10 (scalar_t__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int * FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (TYPE_2__*) ;

__attribute__((used)) static PyInt
FUNC_15(
 DictionaryObject *VAR_6, PyObject *VAR_7, PyObject *VAR_8)
{
    char_u *VAR_9;
    typval_T VAR_10;
    dict_T *VAR_11 = VAR_6->dict;
    dictitem_T *VAR_12;
    PyObject *VAR_13;

    if (VAR_11->dv_lock)
    {
 VAR_3;
 return -1;
    }

    if (!(VAR_9 = FUNC_5(VAR_7, &VAR_13)))
 return -1;

    if (*VAR_9 == VAR_1)
    {
 VAR_4;
 FUNC_3(VAR_13);
 return -1;
    }

    VAR_12 = FUNC_9(VAR_11, VAR_9, -1);

    if (VAR_8 == ((void*)0))
    {
 hashitem_T *VAR_14;

 if (VAR_12 == ((void*)0))
 {
     FUNC_3(VAR_13);
     FUNC_2(VAR_2, VAR_7);
     return -1;
 }
 VAR_14 = FUNC_12(&VAR_11->dv_hashtab, VAR_12->di_key);
 FUNC_13(&VAR_11->dv_hashtab, VAR_14);
 FUNC_11(VAR_12);
 FUNC_3(VAR_13);
 return 0;
    }

    if (FUNC_0(VAR_8, &VAR_10) == -1)
    {
 FUNC_3(VAR_13);
 return -1;
    }

    if (VAR_12 == ((void*)0))
    {
 if (!(VAR_12 = FUNC_10(VAR_9)))
 {
     FUNC_3(VAR_13);
     FUNC_1();
     return -1;
 }
 VAR_12->di_tv.v_lock = 0;
 VAR_12->di_tv.v_type = VAR_5;

 if (FUNC_8(VAR_11, VAR_12) == VAR_0)
 {
     FUNC_14(VAR_12);
     FUNC_11(VAR_12);
     FUNC_4(VAR_9);
     FUNC_3(VAR_13);
     return -1;
 }
    }
    else
 FUNC_6(&VAR_12->di_tv);

    FUNC_3(VAR_13);

    FUNC_7(&VAR_10, &VAR_12->di_tv);
    FUNC_6(&VAR_10);
    return 0;
}
