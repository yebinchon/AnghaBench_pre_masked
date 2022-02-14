
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* runner ) (int ,void*,int *) ;
typedef int (* rangeinitializer ) (void*) ;
typedef int char_u ;
typedef int PyObject ;
typedef int PyGILState_STATE ;
typedef scalar_t__ Ptr ;
typedef int GrafPtr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 int * FUNC_4 (int *,char*,int ) ;
 int * FUNC_5 (char const*,int ,char*,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int FUNC_12 (int ) ;
 scalar_t__ VAR_4 ;
 char* FUNC_13 (int ,char*) ;
 int FUNC_14 (char const*) ;
 int FUNC_15 (char*) ;
 scalar_t__ FUNC_16 (int *) ;

__attribute__((used)) static void
FUNC_17(const char *VAR_5, rangeinitializer VAR_6, runner VAR_7, void *VAR_8)
{






    PyObject *VAR_9;
    PyObject *VAR_10;
    PyGILState_STATE VAR_11;







    if (FUNC_7())
 goto theend;

    VAR_6(VAR_8);

    FUNC_10();
    VAR_11 = FUNC_2();



    VAR_9 = FUNC_5(VAR_5, FUNC_14(VAR_5),
     (char *)VAR_1, VAR_0);
    VAR_10 = FUNC_4(VAR_9, "utf-8", VAR_0);
    FUNC_6(VAR_9);

    VAR_7(FUNC_1(VAR_10), VAR_8, &VAR_11);
    FUNC_6(VAR_10);

    FUNC_3(VAR_11);
    FUNC_9();
    FUNC_8();




theend:
    return;
}
