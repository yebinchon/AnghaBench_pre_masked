
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int blkptr_t ;
typedef int blkbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int,int *) ;

__attribute__((used)) static void
FUNC_3(blkptr_t *VAR_2, int VAR_3)
{
 char VAR_4[VAR_0];

 if (VAR_3 & VAR_1)
  FUNC_0((void *)VAR_2, sizeof (blkptr_t));

 FUNC_2(VAR_4, sizeof (VAR_4), VAR_2);
 (void) FUNC_1("%s\n", VAR_4);
}
