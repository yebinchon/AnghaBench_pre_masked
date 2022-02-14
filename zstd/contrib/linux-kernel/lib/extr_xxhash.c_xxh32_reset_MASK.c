
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct xxh32_state {scalar_t__ v4; scalar_t__ v3; scalar_t__ v2; scalar_t__ v1; } ;
typedef int state ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 int FUNC_0 (struct xxh32_state*,struct xxh32_state*,int) ;
 int FUNC_1 (struct xxh32_state*,int ,int) ;

void FUNC_2(struct xxh32_state *VAR_2, const uint32_t VAR_3)
{

 struct xxh32_state VAR_4;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.v1 = VAR_3 + VAR_0 + VAR_1;
 VAR_4.v2 = VAR_3 + VAR_1;
 VAR_4.v3 = VAR_3 + 0;
 VAR_4.v4 = VAR_3 - VAR_0;
 FUNC_0(VAR_2, &VAR_4, sizeof(VAR_4));
}
