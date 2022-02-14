
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int boolean_t ;
struct TYPE_8__ {struct TYPE_8__* b_next; } ;
typedef TYPE_2__ arc_buf_t ;
struct TYPE_7__ {scalar_t__ b_state; TYPE_2__* b_buf; } ;
struct TYPE_9__ {TYPE_1__ b_l1hdr; } ;
typedef TYPE_3__ arc_buf_hdr_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static boolean_t
FUNC_3(arc_buf_hdr_t *VAR_3)
{
 FUNC_1(VAR_3->b_l1hdr.b_state == VAR_2 || FUNC_2(VAR_3));

 for (arc_buf_t *VAR_4 = VAR_3->b_l1hdr.b_buf; VAR_4 != ((void*)0); VAR_4 = VAR_4->b_next) {
  if (!FUNC_0(VAR_4)) {
   return (VAR_1);
  }
 }
 return (VAR_0);
}
