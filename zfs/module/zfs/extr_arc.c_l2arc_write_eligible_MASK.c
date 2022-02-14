
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int boolean_t ;
struct TYPE_6__ {scalar_t__ b_spa; } ;
typedef TYPE_1__ arc_buf_hdr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static boolean_t
FUNC_3(uint64_t VAR_2, arc_buf_hdr_t *VAR_3)
{







 if (VAR_3->b_spa != VAR_2 || FUNC_0(VAR_3) ||
     FUNC_1(VAR_3) || !FUNC_2(VAR_3))
  return (VAR_0);

 return (VAR_1);
}
