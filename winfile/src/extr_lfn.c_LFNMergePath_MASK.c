
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ TCHAR ;
typedef scalar_t__* LPTSTR ;
typedef int INT ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__*) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (scalar_t__*,int ,scalar_t__*,scalar_t__) ;
 int VAR_3 ;
 int FUNC_4 (scalar_t__*) ;
 int VAR_4 ;
 int FUNC_5 (scalar_t__*,scalar_t__*) ;
 int FUNC_6 (scalar_t__*) ;

BOOL
FUNC_7(LPTSTR VAR_5, LPTSTR VAR_6)
{
   TCHAR VAR_7[VAR_3*2];
   INT VAR_8;





   FUNC_5( VAR_7, VAR_5 );
   FUNC_4( VAR_7 );




   FUNC_0(VAR_7);







   if (!( VAR_0 == VAR_6[0] && VAR_2 == VAR_6[1] )) {

      VAR_8 = FUNC_6( VAR_7 );

      FUNC_3(VAR_6,
         FUNC_2( VAR_5 ),
         VAR_7 + VAR_8,
         FUNC_1(VAR_7) - VAR_8);



      VAR_8 = FUNC_6( VAR_7 );
      if ((VAR_8 != 0) && VAR_1 == VAR_7[VAR_8 - 1])
         VAR_7[ VAR_8-1 ] = VAR_2;
   }

   FUNC_5(VAR_5, VAR_7);
   return VAR_4;
}
