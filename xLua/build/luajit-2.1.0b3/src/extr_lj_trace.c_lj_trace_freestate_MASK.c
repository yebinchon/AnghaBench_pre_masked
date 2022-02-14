
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ptrdiff_t ;
struct TYPE_6__ {scalar_t__ traceno; } ;
struct TYPE_7__ {scalar_t__ sizetrace; scalar_t__ trace; scalar_t__ irbotlim; scalar_t__ irtoplim; scalar_t__ irbuf; scalar_t__ sizesnap; scalar_t__ snapbuf; scalar_t__ sizesnapmap; scalar_t__ snapmapbuf; TYPE_1__ cur; } ;
typedef TYPE_2__ jit_State ;
typedef int global_State ;


 TYPE_2__* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (int) ;
 int * FUNC_4 (TYPE_2__*,int) ;

void FUNC_5(global_State *VAR_4)
{
  jit_State *VAR_5 = FUNC_0(VAR_4);







  FUNC_1(VAR_5);
  FUNC_2(VAR_4, VAR_5->snapmapbuf, VAR_5->sizesnapmap, VAR_2);
  FUNC_2(VAR_4, VAR_5->snapbuf, VAR_5->sizesnap, VAR_3);
  FUNC_2(VAR_4, VAR_5->irbuf + VAR_5->irbotlim, VAR_5->irtoplim - VAR_5->irbotlim, VAR_1);
  FUNC_2(VAR_4, VAR_5->trace, VAR_5->sizetrace, VAR_0);
}
