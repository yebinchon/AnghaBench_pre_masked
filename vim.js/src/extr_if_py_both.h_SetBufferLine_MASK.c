
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int win_T ;
typedef int tabpage_T ;
typedef scalar_t__ linenr_T ;
typedef int char_u ;
typedef int buf_T ;
typedef int PyObject ;
typedef int PyInt ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *) ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 () ;
 int * VAR_7 ;
 int FUNC_9 (scalar_t__,long) ;
 scalar_t__ FUNC_10 (scalar_t__,int ) ;
 scalar_t__ FUNC_11 (scalar_t__,int *,int ) ;
 int FUNC_12 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_13 (int *,int *,int *) ;
 int FUNC_14 (int *,int **,int **,int **) ;
 scalar_t__ FUNC_15 (scalar_t__,long) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 int FUNC_17 (char*) ;

__attribute__((used)) static int
FUNC_18(buf_T *VAR_8, PyInt VAR_9, PyObject *VAR_10, PyInt *VAR_11)
{
    buf_T *VAR_12 = ((void*)0);
    win_T *VAR_13 = ((void*)0);
    tabpage_T *VAR_14 = ((void*)0);







    if (VAR_10 == VAR_3 || VAR_10 == ((void*)0))
    {
 FUNC_2();
 FUNC_14(VAR_8, &VAR_13, &VAR_14, &VAR_12);

 FUNC_6();

 if (FUNC_15((linenr_T)VAR_9, 1L) == VAR_0)
     VAR_6;
 else if (FUNC_10((linenr_T)VAR_9, VAR_1) == VAR_0)
     VAR_4;
 else
 {
     if (VAR_8 == VAR_7)
  FUNC_12((linenr_T)VAR_9, (linenr_T)VAR_9 + 1, (linenr_T)-1);
     if (VAR_12 == ((void*)0))


  FUNC_9((linenr_T)VAR_9, 1L);
 }

 FUNC_13(VAR_13, VAR_14, VAR_12);

 if (FUNC_5())
     return VAR_0;

 if (VAR_11)
     *VAR_11 = -1;

 return VAR_2;
    }
    else if (FUNC_0(VAR_10) || FUNC_3(VAR_10))
    {
 char *VAR_15 = FUNC_4(VAR_10);

 if (VAR_15 == ((void*)0))
     return VAR_0;

 FUNC_6();


 FUNC_2();
 FUNC_14(VAR_8, &VAR_13, &VAR_14, &VAR_12);

 if (FUNC_16((linenr_T)VAR_9) == VAR_0)
 {
     VAR_6;
     FUNC_17(VAR_15);
 }
 else if (FUNC_11((linenr_T)VAR_9, (char_u *)VAR_15, VAR_1) == VAR_0)
 {
     VAR_5;
     FUNC_17(VAR_15);
 }
 else
     FUNC_7((linenr_T)VAR_9, 0);

 FUNC_13(VAR_13, VAR_14, VAR_12);


 if (VAR_8 == VAR_7)
     FUNC_8();

 if (FUNC_5())
     return VAR_0;

 if (VAR_11)
     *VAR_11 = 0;

 return VAR_2;
    }
    else
    {
 FUNC_1();
 return VAR_0;
    }
}
