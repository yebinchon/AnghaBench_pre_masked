
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zpool_handle_t ;
typedef scalar_t__ uint_t ;
struct TYPE_4__ {int cb_name_flags; } ;
typedef TYPE_1__ status_cbdata_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int *,TYPE_1__*,char*,int *,int,int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int ,int *,int *,int ) ;

__attribute__((used)) static void
FUNC_5(zpool_handle_t *VAR_2, status_cbdata_t *VAR_3, nvlist_t **VAR_4,
    uint_t VAR_5)
{
 uint_t VAR_6;
 char *VAR_7;

 if (VAR_5 == 0)
  return;

 (void) FUNC_3(FUNC_1("\tspares\n"));

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  VAR_7 = FUNC_4(VAR_1, VAR_2, VAR_4[VAR_6],
      VAR_3->cb_name_flags);
  FUNC_2(VAR_2, VAR_3, VAR_7, VAR_4[VAR_6], 2, VAR_0);
  FUNC_0(VAR_7);
 }
}
