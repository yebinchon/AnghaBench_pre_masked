
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ avail_in; size_t total_out; int workspace; void* avail_out; void* next_out; int * next_in; } ;
typedef TYPE_1__ z_stream ;
typedef void* uInt ;
typedef int Byte ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int
FUNC_5(void *VAR_8, size_t *VAR_9, const void *VAR_10, size_t VAR_11)
{
 z_stream VAR_12;
 int VAR_13;

 VAR_12.next_in = (Byte *)VAR_10;
 VAR_12.avail_in = (uInt)VAR_11;
 VAR_12.next_out = VAR_8;
 VAR_12.avail_out = (uInt)*VAR_9;

 if ((size_t)VAR_12.avail_out != *VAR_9)
  return (VAR_1);

 VAR_12.workspace = FUNC_3(VAR_0);
 if (!VAR_12.workspace)
  return (VAR_4);

 VAR_13 = FUNC_2(&VAR_12);
 if (VAR_13 != VAR_6) {
  FUNC_4(VAR_12.workspace);
  return (VAR_13);
 }

 VAR_13 = FUNC_0(&VAR_12, VAR_3);
 if (VAR_13 != VAR_7) {
  FUNC_1(&VAR_12);
  FUNC_4(VAR_12.workspace);

  if (VAR_13 == VAR_5 ||
      (VAR_13 == VAR_1 && VAR_12.avail_in == 0))
   return (VAR_2);

  return (VAR_13);
 }
 *VAR_9 = VAR_12.total_out;

 VAR_13 = FUNC_1(&VAR_12);
 FUNC_4(VAR_12.workspace);

 return (VAR_13);
}
