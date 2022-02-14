
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t total_out; int workspace; void* avail_out; void* next_out; void* avail_in; int * next_in; } ;
typedef TYPE_1__ z_stream ;
typedef void* uInt ;
typedef int Byte ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int
FUNC_5(void *VAR_6, size_t *VAR_7, const void *VAR_8,
    size_t VAR_9, int VAR_10)
{
 z_stream VAR_11;
 int VAR_12;

 VAR_11.next_in = (Byte *)VAR_8;
 VAR_11.avail_in = (uInt)VAR_9;
 VAR_11.next_out = VAR_6;
 VAR_11.avail_out = (uInt)*VAR_7;

 if ((size_t)VAR_11.avail_out != *VAR_7)
  return (VAR_1);

 VAR_11.workspace = FUNC_3(VAR_0);
 if (!VAR_11.workspace)
  return (VAR_3);

 VAR_12 = FUNC_2(&VAR_11, VAR_10);
 if (VAR_12 != VAR_4) {
  FUNC_4(VAR_11.workspace);
  return (VAR_12);
 }

 VAR_12 = FUNC_0(&VAR_11, VAR_2);
 if (VAR_12 != VAR_5) {
  FUNC_1(&VAR_11);
  FUNC_4(VAR_11.workspace);
  return (VAR_12 == VAR_4 ? VAR_1 : VAR_12);
 }
 *VAR_7 = VAR_11.total_out;

 VAR_12 = FUNC_1(&VAR_11);
 FUNC_4(VAR_11.workspace);

 return (VAR_12);
}
