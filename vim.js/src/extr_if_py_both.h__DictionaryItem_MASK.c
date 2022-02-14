
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int hashitem_T ;
struct TYPE_7__ {int di_tv; } ;
typedef TYPE_1__ dictitem_T ;
struct TYPE_8__ {int dv_hashtab; scalar_t__ dv_lock; } ;
typedef TYPE_2__ dict_T ;
typedef scalar_t__ char_u ;
struct TYPE_9__ {TYPE_2__* dict; } ;
typedef int PyObject ;
typedef TYPE_3__ DictionaryObject ;


 int * FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *,char*,int **,int **) ;
 int FUNC_3 (int ,int *) ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int * VAR_6 ;
 int FUNC_5 (int *) ;
 int * VAR_7 ;
 int * VAR_8 ;
 int FUNC_6 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__* FUNC_7 (int *,int **) ;
 TYPE_1__* FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*) ;
 int * FUNC_10 (int *,scalar_t__*) ;
 int FUNC_11 (int *,int *) ;

__attribute__((used)) static PyObject *
FUNC_12(DictionaryObject *VAR_11, PyObject *VAR_12, int VAR_13)
{
    PyObject *VAR_14;
    PyObject *VAR_15 = ((VAR_13 & VAR_1)? VAR_7 : ((void*)0));
    PyObject *VAR_16;
    char_u *VAR_17;
    dictitem_T *VAR_18;
    dict_T *VAR_19 = VAR_11->dict;
    hashitem_T *VAR_20;
    PyObject *VAR_21;

    if (VAR_13 & VAR_0)
    {
 if (!FUNC_2(VAR_12, "O|O", &VAR_14, &VAR_15))
     return ((void*)0);
    }
    else
 VAR_14 = VAR_12;

    if (VAR_13 & VAR_3)
 VAR_15 = VAR_6;

    if (!(VAR_17 = FUNC_7(VAR_14, &VAR_21)))
 return ((void*)0);

    if (*VAR_17 == VAR_4)
    {
 VAR_10;
 FUNC_6(VAR_21);
 return ((void*)0);
    }

    VAR_20 = FUNC_10(&VAR_19->dv_hashtab, VAR_17);

    FUNC_6(VAR_21);

    if (FUNC_1(VAR_20))
    {
 if (VAR_15)
 {
     FUNC_5(VAR_15);
     return VAR_15;
 }
 else
 {
     FUNC_3(VAR_5, VAR_14);
     return ((void*)0);
 }
    }
    else if (VAR_13 & VAR_3)
    {
 FUNC_5(VAR_8);
 return VAR_8;
    }

    VAR_18 = FUNC_8(VAR_20);

    if (!(VAR_16 = FUNC_0(&VAR_18->di_tv)))
 return ((void*)0);

    if (VAR_13 & VAR_2)
    {
 if (VAR_19->dv_lock)
 {
     VAR_9;
     FUNC_4(VAR_16);
     return ((void*)0);
 }

 FUNC_11(&VAR_19->dv_hashtab, VAR_20);
 FUNC_9(VAR_18);
    }

    return VAR_16;
}
