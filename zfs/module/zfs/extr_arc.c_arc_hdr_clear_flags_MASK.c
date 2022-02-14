
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int arc_flags_t ;
struct TYPE_4__ {int b_flags; } ;
typedef TYPE_1__ arc_buf_hdr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static inline void
FUNC_2(arc_buf_hdr_t *VAR_0, arc_flags_t VAR_1)
{
 FUNC_0(FUNC_1(VAR_0));
 VAR_0->b_flags &= ~VAR_1;
}
