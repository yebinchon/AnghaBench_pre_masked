
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lpBuf ;
typedef scalar_t__ WORD ;
typedef int TCHAR ;
typedef int* PDWORD ;
typedef int* LPTSTR ;
typedef int INT ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int,int *,int,scalar_t__,int*,int,int *) ;
 int* FUNC_2 (int) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_8 ;
 int FUNC_5 (int ,int,int*,int) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_7 (int*,int*,int,int *,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_8 (int*) ;

DWORD
FUNC_9(
   BOOL VAR_14,
   LPTSTR VAR_15,
   INT VAR_16,
   DWORD VAR_17)
{
   INT VAR_18;
   DWORD VAR_19 = 0;
   PDWORD VAR_20;
   INT VAR_21 = 0;

   WORD VAR_22;
   BOOL VAR_23;




   if (!VAR_17)
      return 0;

   if (VAR_14)
      VAR_15[0] = 0;

   VAR_18 = FUNC_8(VAR_15);

   VAR_15 += VAR_18;
   VAR_16 -= VAR_18;

   if (VAR_16 <=0)
      return 0;




   VAR_20 = FUNC_2( VAR_17 );







   if ( !(VAR_17 & VAR_2) &&
      !(VAR_20 && VAR_20[1] & VAR_10) ) {


      if ( VAR_3 == VAR_17 ) {
         DWORD VAR_24;
         TCHAR VAR_25[128];


         if (VAR_11) {



            FUNC_7( &VAR_24, VAR_15, VAR_16, VAR_25,
               FUNC_0(VAR_25));
         }

         return FUNC_8(VAR_15);
      }
      VAR_22 = FUNC_4(VAR_13);

      do {
         VAR_19 = FUNC_1(
            VAR_5 |
               VAR_6 |
               VAR_7,
            ((void*)0), VAR_17, VAR_22,
            VAR_15, VAR_16*sizeof(VAR_15[0]), ((void*)0) );

         VAR_23 = !VAR_19 &&
            FUNC_6(VAR_8, VAR_9) != VAR_22 &&
            VAR_4 == FUNC_3();

         VAR_22 = FUNC_6(VAR_8, VAR_9);

      } while (VAR_23);

      VAR_21 = 2;
   }




   if (!VAR_19) {
      VAR_15[0] = VAR_1;
   }




   if (VAR_20 && VAR_20[2]) {

      DWORD VAR_26 = 0;



      VAR_15 += VAR_19 + VAR_21;
      VAR_16 -= VAR_19 + VAR_21;

      if (!VAR_16)
         goto SuggestPunt;





      for(;VAR_21; VAR_21--)
         VAR_15[-VAR_21] = VAR_0;

      VAR_26 = FUNC_5 ( VAR_12, VAR_20[2], VAR_15, VAR_16 );

      return VAR_26+VAR_19+VAR_21;
   }

SuggestPunt:




   if ( VAR_19 ) {
      if ( VAR_0 == VAR_15[VAR_19-1] ) {
         VAR_15[VAR_19-1] = VAR_1;
      }

      if ( VAR_19 > 1 ) {
         if ( 0x000D == VAR_15[VAR_19-2] ) {
            VAR_15[VAR_19-2] = VAR_1;
         }
      }
   }

   return VAR_19;
}
