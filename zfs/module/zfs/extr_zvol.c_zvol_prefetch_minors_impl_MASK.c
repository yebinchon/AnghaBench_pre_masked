
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int objset_t ;
struct TYPE_2__ {char* name; scalar_t__ error; } ;
typedef TYPE_1__ minors_job_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 (char*,int ,int ,int ,int ,int **) ;
 int FUNC_2 (int *,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_5)
{
 minors_job_t *VAR_6 = VAR_5;
 char *VAR_7 = VAR_6->name;
 objset_t *VAR_8 = ((void*)0);

 VAR_6->error = FUNC_1(VAR_7, VAR_1, VAR_0, VAR_0,
     VAR_2, &VAR_8);
 if (VAR_6->error == 0) {
  FUNC_2(VAR_8, VAR_4, 0, 0, 0, VAR_3);
  FUNC_0(VAR_8, VAR_0, VAR_2);
 }
}
