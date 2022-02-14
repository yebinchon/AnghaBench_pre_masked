
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_8__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_9__ {scalar_t__ spa_ena; int spa_load_state; TYPE_8__ spa_loaded_ts; int spa_refcount; int spa_minref; } ;
typedef TYPE_1__ spa_t ;
typedef int spa_load_state_t ;
typedef int spa_import_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_8__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ,char**) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char*,TYPE_1__*,int *,int *,int *,int ,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(spa_t *VAR_5, spa_load_state_t VAR_6, spa_import_type_t VAR_7)
{
 char *VAR_8 = VAR_2;
 int VAR_9;

 VAR_5->spa_load_state = VAR_6;
 (void) FUNC_3(FUNC_2(VAR_5),
     FUNC_5(VAR_5));

 FUNC_0(&VAR_5->spa_loaded_ts);
 VAR_9 = FUNC_4(VAR_5, VAR_7, &VAR_8);





 FUNC_1(VAR_5);
 VAR_5->spa_minref = FUNC_7(&VAR_5->spa_refcount);
 if (VAR_9) {
  if (VAR_9 != VAR_1) {
   VAR_5->spa_loaded_ts.tv_sec = 0;
   VAR_5->spa_loaded_ts.tv_nsec = 0;
  }
  if (VAR_9 != VAR_0) {
   FUNC_6(VAR_8, VAR_5, ((void*)0), ((void*)0), ((void*)0), 0, 0);
  }
 }
 VAR_5->spa_load_state = VAR_9 ? VAR_3 : VAR_4;
 VAR_5->spa_ena = 0;

 (void) FUNC_3(FUNC_2(VAR_5),
     FUNC_5(VAR_5));

 return (VAR_9);
}
