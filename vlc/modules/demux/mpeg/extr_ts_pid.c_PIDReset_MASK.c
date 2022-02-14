
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ i_refcount; int i_cc; int prevpktbytes; int type; int i_flags; scalar_t__ i_dup; } ;
typedef TYPE_1__ ts_pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2( ts_pid_t *VAR_3 )
{
    FUNC_0(VAR_3->i_refcount == 0);
    VAR_3->i_cc = 0xff;
    VAR_3->i_dup = 0;
    VAR_3->i_flags &= ~VAR_0;
    VAR_3->type = VAR_2;
    FUNC_1(VAR_3->prevpktbytes, 0, VAR_1);
}
