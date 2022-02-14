
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int char_u ;
struct TYPE_4__ {void* b_p_iminsert; } ;
struct TYPE_3__ {scalar_t__ in_use; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static void
FUNC_7()
{
    if (FUNC_3((char_u *)"", VAR_4, VAR_3))
    {

 if (VAR_5 & VAR_4)
 {
     VAR_7->b_p_iminsert = VAR_2;
     VAR_5 &= ~VAR_4;
 }
 else
 {
     VAR_7->b_p_iminsert = VAR_1;
     VAR_5 |= VAR_4;



 }
    }
    FUNC_4();
    FUNC_5();
}
