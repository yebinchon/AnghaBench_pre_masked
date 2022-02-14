
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* PVOID ;
typedef int * HANDLE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,int ,int) ;
 int VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;

BOOL
FUNC_4()
{



   if (VAR_7 < (HANDLE)32) {
      VAR_7 = FUNC_2(VAR_13);
      if (VAR_7 < (HANDLE)32) {

         FUNC_3(VAR_8, VAR_2, VAR_1, VAR_4 | VAR_3 | VAR_5);
         VAR_7 = ((void*)0);
         return VAR_0;
      }
      else {
         VAR_10 = (PVOID)FUNC_1(VAR_7, "Format");
         VAR_11 = (PVOID)FUNC_1(VAR_7, "QuerySupportedMedia");

         VAR_12 = (PVOID)FUNC_1(VAR_7, "SetLabel");
         VAR_9 = (PVOID)FUNC_1(VAR_7, "DiskCopy");
         if (!VAR_10 || !VAR_11 ||
            !VAR_12 || !VAR_9) {

            FUNC_3(VAR_8, VAR_2, VAR_1, VAR_4 | VAR_3 | VAR_5);
            FUNC_0(VAR_7);
            VAR_7 = ((void*)0);
            return VAR_0;
         }
      }
   }
   return VAR_6;
}
