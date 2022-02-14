
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * methods; } ;
typedef int Path ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 TYPE_1__* FUNC_1 (int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static inline bool
FUNC_2(Path *VAR_2)
{
 return FUNC_0(VAR_2, VAR_0) && FUNC_1(VAR_0, VAR_2)->methods == &VAR_1;
}
