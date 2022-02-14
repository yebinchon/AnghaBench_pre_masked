
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;
struct TYPE_3__ {scalar_t__ ne_guid; char* ne_name; scalar_t__ ne_num_labels; scalar_t__ ne_order; struct TYPE_3__* ne_next; } ;
typedef TYPE_1__ name_entry_t ;
typedef int libpc_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,char*) ;
 scalar_t__ FUNC_1 (int *,int ,int ***,size_t*) ;
 scalar_t__ FUNC_2 (int *,int ,char**) ;
 scalar_t__ FUNC_3 (int *,int ,scalar_t__*) ;
 scalar_t__ FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int
FUNC_8(libpc_handle_t *VAR_3, nvlist_t *VAR_4, name_entry_t *VAR_5)
{
 nvlist_t **VAR_6;
 uint_t VAR_7, VAR_8;
 uint64_t VAR_9;
 name_entry_t *VAR_10, *VAR_11;
 char *VAR_12;

 if (FUNC_1(VAR_4, VAR_0,
     &VAR_6, &VAR_8) == 0) {
  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
   if (FUNC_8(VAR_3, VAR_6[VAR_7], VAR_5) != 0)
    return (-1);
  return (0);
 }
 FUNC_7(FUNC_3(VAR_4, VAR_1, &VAR_9) == 0);
 if (FUNC_2(VAR_4, VAR_2, &VAR_12) != 0)
  VAR_12 = ((void*)0);

 VAR_11 = ((void*)0);
 for (VAR_10 = VAR_5; VAR_10 != ((void*)0); VAR_10 = VAR_10->ne_next) {
  if (VAR_10->ne_guid == VAR_9) {
   if (VAR_12 == ((void*)0)) {
    VAR_11 = VAR_10;
    break;
   }

   if ((FUNC_4(VAR_12) == FUNC_4(VAR_10->ne_name)) &&
       FUNC_5(VAR_12, VAR_10->ne_name, FUNC_4(VAR_12)) == 0) {
    VAR_11 = VAR_10;
    break;
   }

   if (VAR_11 == ((void*)0)) {
    VAR_11 = VAR_10;
    continue;
   }


   if (VAR_10->ne_num_labels > VAR_11->ne_num_labels) {
    VAR_11 = VAR_10;
    continue;
   }


   if (VAR_10->ne_num_labels == VAR_11->ne_num_labels &&
       VAR_10->ne_order < VAR_11->ne_order) {
    VAR_11 = VAR_10;
    continue;
   }
  }
 }

 if (VAR_11 == ((void*)0))
  return (0);

 if (FUNC_0(VAR_4, VAR_2, VAR_11->ne_name) != 0)
  return (-1);

 FUNC_6(VAR_4);

 return (0);
}
