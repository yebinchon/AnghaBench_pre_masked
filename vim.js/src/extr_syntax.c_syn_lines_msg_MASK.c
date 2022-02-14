
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* w_s; } ;
struct TYPE_3__ {scalar_t__ b_syn_sync_maxlines; scalar_t__ b_syn_sync_minlines; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void
FUNC_3()
{
    if (VAR_0->w_s->b_syn_sync_maxlines > 0
          || VAR_0->w_s->b_syn_sync_minlines > 0)
    {
 FUNC_0("; ");
 if (VAR_0->w_s->b_syn_sync_minlines > 0)
 {
     FUNC_0(FUNC_1("minimal "));
     FUNC_2(VAR_0->w_s->b_syn_sync_minlines);
     if (VAR_0->w_s->b_syn_sync_maxlines)
  FUNC_0(", ");
 }
 if (VAR_0->w_s->b_syn_sync_maxlines > 0)
 {
     FUNC_0(FUNC_1("maximal "));
     FUNC_2(VAR_0->w_s->b_syn_sync_maxlines);
 }
 FUNC_0(FUNC_1(" lines before top line"));
    }
}
