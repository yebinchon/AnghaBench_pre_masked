
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int * LPXDTALINK ;
typedef int LPWSTR ;
typedef char* LPWCH ;
typedef scalar_t__ INT ;
typedef int HWND ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,char*,char*,int ,int ,int **,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ,long) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 char FUNC_6 (char) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (char*,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_8 (char*,int ,char*,int ) ;

INT
FUNC_9(HWND VAR_9, LPWSTR VAR_10, BOOL VAR_11, BOOL VAR_12)
{
   INT VAR_13;
   INT VAR_14;
   WCHAR VAR_15[VAR_3+1];
   WCHAR VAR_16[VAR_3+1];
   WCHAR VAR_17[20];
   LPWCH VAR_18;
   LPWCH VAR_19;
   LPXDTALINK VAR_20 = ((void*)0);




   FUNC_7(VAR_15, VAR_10);
   FUNC_7(VAR_16, VAR_10);

   FUNC_5(VAR_15);
   FUNC_4(VAR_16);

   VAR_19 = VAR_15;

   VAR_8 = 0;

   VAR_7 = 1;
   VAR_6 = 0;
   VAR_13 = 0;
   VAR_14 = 0;




   while (*VAR_19) {
   VAR_18 = VAR_19;


   while ((*VAR_19) && (*VAR_19) != ';')
   VAR_19++;



   if (*VAR_19 == ';') {
    *VAR_19 = FUNC_6('\0');
    VAR_19++;
   }


      FUNC_8(VAR_17, FUNC_0(VAR_17), VAR_18, VAR_5);

   FUNC_1(VAR_17);

   VAR_13 = FUNC_2(VAR_9,
    VAR_16,
    VAR_17,
    VAR_11,
    VAR_12,
    &VAR_20,
    VAR_14,
    VAR_4);

      VAR_14 = VAR_13;
   }




   if (VAR_0 == FUNC_3(VAR_9, VAR_1, 0, 0L))
      FUNC_3(VAR_9, VAR_2, VAR_4, 0L);

   return(VAR_13);
}
