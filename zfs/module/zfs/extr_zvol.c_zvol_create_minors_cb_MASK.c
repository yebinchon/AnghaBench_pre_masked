
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_5__ {char* name; scalar_t__ error; int * list; } ;
typedef TYPE_1__ minors_job_t ;
typedef int list_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char const*,int ,void*,int ) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*,char*,scalar_t__*,int *) ;
 TYPE_1__* FUNC_5 (int,int ) ;
 char* FUNC_6 (char const*) ;
 int FUNC_7 (int *,TYPE_1__*) ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (char const*,char) ;
 int VAR_5 ;
 int FUNC_9 (int ,int ,TYPE_1__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_10(const char *VAR_8, void *VAR_9)
{
 uint64_t VAR_10;
 int VAR_11;
 list_t *VAR_12 = VAR_9;

 FUNC_0(FUNC_1(&VAR_4));

 VAR_11 = FUNC_4(VAR_8, "snapdev", &VAR_10, ((void*)0));
 if (VAR_11)
  return (0);
 if (FUNC_8(VAR_8, '@') == 0) {
  minors_job_t *VAR_13;
  char *VAR_14 = FUNC_6(VAR_8);
  if (VAR_14 == ((void*)0))
   return (0);

  VAR_13 = FUNC_5(sizeof (minors_job_t), VAR_1);
  VAR_13->name = VAR_14;
  VAR_13->list = VAR_12;
  VAR_13->error = 0;
  FUNC_7(VAR_12, VAR_13);

  FUNC_9(VAR_5, VAR_7, VAR_13,
      VAR_2);

  if (VAR_10 == VAR_3) {




   VAR_11 = FUNC_2(VAR_8,
       VAR_6, (void *)VAR_13,
       VAR_0);
  }
 } else {
  FUNC_3("zvol_create_minors_cb(): %s is not a zvol name\n",
      VAR_8);
 }

 return (0);
}
