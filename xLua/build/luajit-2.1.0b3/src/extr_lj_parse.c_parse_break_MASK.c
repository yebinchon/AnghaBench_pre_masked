
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* bl; } ;
struct TYPE_7__ {TYPE_5__* fs; } ;
struct TYPE_6__ {int flags; } ;
typedef TYPE_2__ LexState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(LexState *VAR_3)
{
  VAR_3->fs->bl->flags |= VAR_0;
  FUNC_1(VAR_3, VAR_1, VAR_2, FUNC_0(VAR_3->fs));
}
