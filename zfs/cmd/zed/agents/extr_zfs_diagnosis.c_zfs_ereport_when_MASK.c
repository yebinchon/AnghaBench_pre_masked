
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint_t ;
typedef int nvlist_t ;
typedef void* int64_t ;
typedef int fmd_hdl_t ;
struct TYPE_3__ {void* ertv_nsec; void* ertv_sec; } ;
typedef TYPE_1__ er_timeval_t ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,void***,int*) ;

__attribute__((used)) static void
FUNC_1(fmd_hdl_t *VAR_2, nvlist_t *VAR_3, er_timeval_t *VAR_4)
{
 int64_t *VAR_5;
 uint_t VAR_6;

 if (FUNC_0(VAR_3, VAR_0, &VAR_5,
     &VAR_6) == 0 && VAR_6 == 2) {
  VAR_4->ertv_sec = VAR_5[0];
  VAR_4->ertv_nsec = VAR_5[1];
 } else {
  VAR_4->ertv_sec = VAR_4->ertv_nsec = VAR_1;
 }
}
