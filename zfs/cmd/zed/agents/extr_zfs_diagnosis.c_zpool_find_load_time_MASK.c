
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zpool_handle_t ;
typedef int uint_t ;
typedef scalar_t__ uint64_t ;
struct load_time_arg {scalar_t__ lt_guid; TYPE_1__* lt_time; scalar_t__ lt_found; } ;
typedef int nvlist_t ;
struct TYPE_2__ {scalar_t__ ertv_nsec; scalar_t__ ertv_sec; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,scalar_t__**,int*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int ,int *) ;

__attribute__((used)) static int
FUNC_4(zpool_handle_t *VAR_3, void *VAR_4)
{
 struct load_time_arg *VAR_5 = VAR_4;
 uint64_t VAR_6;
 uint64_t *VAR_7;
 nvlist_t *VAR_8;
 uint_t VAR_9;

 if (VAR_5->lt_found) {
  FUNC_1(VAR_3);
  return (0);
 }

 VAR_6 = FUNC_3(VAR_3, VAR_2, ((void*)0));
 if (VAR_6 != VAR_5->lt_guid) {
  FUNC_1(VAR_3);
  return (0);
 }

 if ((VAR_8 = FUNC_2(VAR_3, ((void*)0))) == ((void*)0)) {
  FUNC_1(VAR_3);
  return (-1);
 }

 if (FUNC_0(VAR_8, VAR_1,
     &VAR_7, &VAR_9) == 0 && VAR_9 == 2) {
  VAR_5->lt_found = VAR_0;
  VAR_5->lt_time->ertv_sec = VAR_7[0];
  VAR_5->lt_time->ertv_nsec = VAR_7[1];
 }

 FUNC_1(VAR_3);

 return (0);
}
