
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int boolean_t ;
struct TYPE_9__ {TYPE_4__* b_hdr; int * b_data; } ;
typedef TYPE_2__ arc_buf_t ;
struct TYPE_8__ {int * b_pabd; } ;
struct TYPE_10__ {TYPE_1__ b_l1hdr; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;

__attribute__((used)) static inline boolean_t
FUNC_7(arc_buf_t *VAR_0)
{
 boolean_t VAR_1 = (VAR_0->b_data != ((void*)0) &&
     VAR_0->b_hdr->b_l1hdr.b_pabd != ((void*)0) &&
     FUNC_5(VAR_0->b_hdr->b_l1hdr.b_pabd) &&
     VAR_0->b_data == FUNC_6(VAR_0->b_hdr->b_l1hdr.b_pabd));
 FUNC_4(VAR_1, FUNC_3(VAR_0->b_hdr));
 FUNC_4(VAR_1, FUNC_2(VAR_0));
 FUNC_4(VAR_1, FUNC_0(VAR_0) || FUNC_1(VAR_0));






 return (VAR_1);
}
