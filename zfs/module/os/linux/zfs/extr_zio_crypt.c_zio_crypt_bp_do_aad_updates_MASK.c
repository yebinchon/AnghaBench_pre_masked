
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint_t ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int boolean_t ;
typedef int blkptr_t ;
typedef int blkptr_auth_buf_t ;


 int FUNC_0 (int *,int *,scalar_t__) ;
 int FUNC_1 (int ,int ,int *,int *,scalar_t__*) ;

__attribute__((used)) static void
FUNC_2(uint8_t **VAR_0, uint_t *VAR_1, uint64_t VAR_2,
    boolean_t VAR_3, blkptr_t *VAR_4)
{
 uint_t VAR_5;
 blkptr_auth_buf_t VAR_6;

 FUNC_1(VAR_2, VAR_3, VAR_4, &VAR_6, &VAR_5);
 FUNC_0(&VAR_6, *VAR_0, VAR_5);
 *VAR_0 += VAR_5;
 *VAR_1 += VAR_5;
}
