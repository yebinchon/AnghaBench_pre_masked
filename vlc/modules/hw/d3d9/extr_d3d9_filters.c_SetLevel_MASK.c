
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filter_level {int Range; int level; } ;


 int FUNC_0 (struct filter_level*,int *,float) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct filter_level *VAR_0, float VAR_1)
{
    FUNC_1( &VAR_0->level, FUNC_0( VAR_0, &VAR_0->Range, VAR_1 ) );
}
