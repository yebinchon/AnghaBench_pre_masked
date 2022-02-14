
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int objset_t ;
struct TYPE_3__ {int * db_data; } ;
typedef TYPE_1__ dmu_buf_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int *) ;

void
FUNC_4(dmu_buf_t *VAR_0, void *VAR_1, uint64_t VAR_2,
    objset_t *VAR_3, uint64_t VAR_4)
{
 uint64_t *VAR_5;

 FUNC_0(FUNC_1((char *)VAR_1 - (char *)VAR_0->db_data, 8));

 for (VAR_5 = VAR_0->db_data; VAR_5 < (uint64_t *)VAR_1; VAR_5++) {
  uint64_t VAR_6 = FUNC_2(VAR_2, FUNC_3(VAR_3),
      VAR_4, VAR_5 - (uint64_t *)VAR_0->db_data);
  *VAR_5 = VAR_6;
 }
}
