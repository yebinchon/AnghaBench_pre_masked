
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 char*** VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_4 ;

int FUNC_1( char *VAR_5 )
{ int VAR_6;

  FUNC_0( VAR_4, "%s", VAR_3 );

  FUNC_0( VAR_4, "Current default <COMPILER>: %s\n",
     VAR_1[VAR_0][0] );

  FUNC_0( VAR_4, "Acceptable parameters for <COMPILER> are:\n" );
  for (VAR_6=1; VAR_6 < VAR_2; VAR_6++)
      FUNC_0( VAR_4, "     %-15.15s     %s\n",
         VAR_1[VAR_6][0],
         VAR_1[VAR_6][1] );
  FUNC_0(VAR_4, "%s", VAR_5);
  return 0;
}
