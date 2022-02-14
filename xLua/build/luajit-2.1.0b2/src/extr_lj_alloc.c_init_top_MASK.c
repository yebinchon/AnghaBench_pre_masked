
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* mstate ;
typedef TYPE_2__* mchunkptr ;
struct TYPE_10__ {int head; } ;
struct TYPE_9__ {size_t head; } ;
struct TYPE_8__ {size_t topsize; int trim_check; TYPE_2__* top; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_5__* FUNC_2 (TYPE_2__*,size_t) ;

__attribute__((used)) static void FUNC_3(mstate VAR_3, mchunkptr VAR_4, size_t VAR_5)
{

  size_t VAR_6 = FUNC_0(FUNC_1(VAR_4));
  VAR_4 = (mchunkptr)((char *)VAR_4 + VAR_6);
  VAR_5 -= VAR_6;

  VAR_3->top = VAR_4;
  VAR_3->topsize = VAR_5;
  VAR_4->head = VAR_5 | VAR_1;

  FUNC_2(VAR_4, VAR_5)->head = VAR_2;
  VAR_3->trim_check = VAR_0;
}
