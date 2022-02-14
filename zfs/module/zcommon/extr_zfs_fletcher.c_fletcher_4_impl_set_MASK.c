
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_5__ {char* fis_name; size_t fis_sel; } ;
struct TYPE_4__ {char* name; } ;


 size_t FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int *,size_t) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__** VAR_4 ;
 size_t VAR_5 ;
 int FUNC_3 (char const) ;
 int FUNC_4 () ;
 size_t FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*,char const*,size_t) ;

int
FUNC_7(const char *VAR_6)
{
 int VAR_7 = -VAR_0;
 uint32_t VAR_8 = FUNC_1(VAR_1);
 size_t VAR_9, VAR_10;

 VAR_10 = FUNC_5(VAR_6);
 while ((VAR_10 > 0) && !!FUNC_3(VAR_6[VAR_10-1]))
  VAR_10--;


 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_2); VAR_9++) {
  const char *VAR_11 = VAR_2[VAR_9].fis_name;

  if (VAR_10 == FUNC_5(VAR_11) &&
      FUNC_6(VAR_6, VAR_11, VAR_10) == 0) {
   VAR_8 = VAR_2[VAR_9].fis_sel;
   VAR_7 = 0;
   break;
  }
 }

 if (VAR_7 != 0 && VAR_3) {

  for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
   const char *VAR_12 = VAR_4[VAR_9]->name;

   if (VAR_10 == FUNC_5(VAR_12) &&
       FUNC_6(VAR_6, VAR_12, VAR_10) == 0) {
    VAR_8 = VAR_9;
    VAR_7 = 0;
    break;
   }
  }
 }

 if (VAR_7 == 0) {
  FUNC_2(&VAR_1, VAR_8);
  FUNC_4();
 }

 return (VAR_7);
}
