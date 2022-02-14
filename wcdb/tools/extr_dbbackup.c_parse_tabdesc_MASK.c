
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* table; char* condition; } ;
typedef TYPE_1__ mm_backup_tabdesc ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (char*,int,int *) ;
 int * FUNC_6 (char const*,char*) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 char* VAR_5 ;
 scalar_t__ FUNC_9 (long) ;
 int FUNC_10 (int ,char*) ;

__attribute__((used)) static void FUNC_11(const char *VAR_6)
{
 FILE *VAR_7 = FUNC_6(VAR_6, "r");
 if (!VAR_7) goto bail;


 FUNC_7(VAR_7, 0, VAR_1);
 long VAR_8 = FUNC_8(VAR_7) + 1;
 FUNC_7(VAR_7, 0, VAR_2);


 VAR_5 = (char *) FUNC_9(VAR_8);
 if (!VAR_5) goto bail;
 char *VAR_9 = VAR_5;
 int VAR_10 = 0;
 while (!FUNC_3(VAR_7) && !FUNC_4(VAR_7) && VAR_9 - VAR_5 < VAR_8)
 {
  char *VAR_11 = FUNC_5(VAR_9, VAR_5 + VAR_8 - VAR_9, VAR_7);
  if (VAR_11)
  {
   VAR_10++;
   char VAR_12;
   while ((VAR_12 = *VAR_9++))
   {
    if (VAR_12 == '\n')
    {
     *(VAR_9 - 1) = '\0';
     break;
    }
   }
  }
 }
 FUNC_2(VAR_7);
 VAR_7 = ((void*)0);


 VAR_4 = (mm_backup_tabdesc *) FUNC_0(VAR_10, sizeof(mm_backup_tabdesc));
 if (!VAR_4) goto bail;

 VAR_9 = VAR_5;

 int VAR_13;
 for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++)
 {
  VAR_4[VAR_13].table = VAR_9;
  char VAR_14;
  while ((VAR_14 = *VAR_9++))
  {
   if (VAR_14 == '|')
   {
    *(VAR_9 - 1) = '\0';
    VAR_4[VAR_13].condition = VAR_9;
   }
  }
 }
 VAR_3 = VAR_10;
 return;

bail:
 FUNC_10(VAR_0, "Cannot parse table descriptor.");
 if (VAR_7) FUNC_2(VAR_7);
 FUNC_1(1);
}
