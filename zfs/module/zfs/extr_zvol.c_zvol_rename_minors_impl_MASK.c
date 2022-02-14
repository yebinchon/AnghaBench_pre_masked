
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* zv_name; int zv_state_lock; } ;
typedef TYPE_1__ zvol_state_t ;
struct TYPE_9__ {int (* zv_rename_minor ) (TYPE_1__*,char*) ;} ;


 int VAR_0 ;
 char* FUNC_0 (char*,char const*,char,char*) ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_4__* VAR_1 ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (char*,char const*) ;
 int FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (char*,char const*,int) ;
 int FUNC_11 (TYPE_1__*,char const*) ;
 int FUNC_12 (TYPE_1__*,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_13(const char *VAR_5, const char *VAR_6)
{
 zvol_state_t *VAR_7, *VAR_8;
 int VAR_9, VAR_10;

 if (VAR_2)
  return;

 VAR_9 = FUNC_9(VAR_5);
 VAR_10 = FUNC_9(VAR_6);

 FUNC_6(&VAR_4, VAR_0);

 for (VAR_7 = FUNC_2(&VAR_3); VAR_7 != ((void*)0); VAR_7 = VAR_8) {
  VAR_8 = FUNC_3(&VAR_3, VAR_7);

  FUNC_4(&VAR_7->zv_state_lock);

  if (FUNC_8(VAR_7->zv_name, VAR_5) == 0) {
   VAR_1->zv_rename_minor(VAR_7, VAR_6);
  } else if (FUNC_10(VAR_7->zv_name, VAR_5, VAR_9) == 0 &&
      (VAR_7->zv_name[VAR_9] == '/' ||
      VAR_7->zv_name[VAR_9] == '@')) {
   char *VAR_11 = FUNC_0("%s%c%s", VAR_6,
       VAR_7->zv_name[VAR_9],
       VAR_7->zv_name + VAR_9 + 1);
   VAR_1->zv_rename_minor(VAR_7, VAR_11);
   FUNC_1(VAR_11);
  }

  FUNC_5(&VAR_7->zv_state_lock);
 }

 FUNC_7(&VAR_4);
}
