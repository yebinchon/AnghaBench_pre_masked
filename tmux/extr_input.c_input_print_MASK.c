
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct screen_write_ctx {int dummy; } ;
struct TYPE_4__ {int attr; int data; } ;
struct TYPE_3__ {int g0set; int g1set; TYPE_2__ cell; int set; } ;
struct input_ctx {TYPE_1__ cell; int ch; int last; scalar_t__ utf8started; struct screen_write_ctx ctx; } ;


 int VAR_0 ;
 int FUNC_0 (struct screen_write_ctx*,TYPE_2__*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int
FUNC_2(struct input_ctx *VAR_1)
{
 struct screen_write_ctx *VAR_2 = &VAR_1->ctx;
 int VAR_3;

 VAR_1->utf8started = 0;

 VAR_3 = VAR_1->cell.set == 0 ? VAR_1->cell.g0set : VAR_1->cell.g1set;
 if (VAR_3 == 1)
  VAR_1->cell.cell.attr |= VAR_0;
 else
  VAR_1->cell.cell.attr &= ~VAR_0;

 FUNC_1(&VAR_1->cell.cell.data, VAR_1->ch);
 FUNC_0(VAR_2, &VAR_1->cell.cell);
 VAR_1->last = VAR_1->ch;

 VAR_1->cell.cell.attr &= ~VAR_0;

 return (0);
}
