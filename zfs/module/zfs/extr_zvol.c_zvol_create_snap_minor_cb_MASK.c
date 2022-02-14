
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* name; scalar_t__ error; int * list; } ;
typedef TYPE_1__ minors_job_t ;
typedef int list_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (char*,char const*) ;
 TYPE_1__* FUNC_3 (int,int ) ;
 char* FUNC_4 (char const*) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (char const*,char) ;
 scalar_t__ FUNC_7 (char const*,char const*) ;
 int VAR_3 ;
 int FUNC_8 (int ,int ,TYPE_1__*,int ) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_9(const char *VAR_5, void *VAR_6)
{
 minors_job_t *VAR_7 = VAR_6;
 list_t *VAR_8 = VAR_7->list;
 const char *VAR_9 = VAR_7->name;

 FUNC_0(FUNC_1(&VAR_2));


 if (VAR_9 && FUNC_7(VAR_5, VAR_9) == 0)
  return (0);


 if (FUNC_6(VAR_5, '@') == 0) {
  FUNC_2("zvol_create_snap_minor_cb(): "
      "%s is not a snapshot name\n", VAR_5);
 } else {
  minors_job_t *VAR_10;
  char *VAR_11 = FUNC_4(VAR_5);
  if (VAR_11 == ((void*)0))
   return (0);

  VAR_10 = FUNC_3(sizeof (minors_job_t), VAR_0);
  VAR_10->name = VAR_11;
  VAR_10->list = VAR_8;
  VAR_10->error = 0;
  FUNC_5(VAR_8, VAR_10);

  FUNC_8(VAR_3, VAR_4, VAR_10,
      VAR_1);
 }

 return (0);
}
