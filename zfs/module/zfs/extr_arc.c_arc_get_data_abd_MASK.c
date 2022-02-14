
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int arc_buf_hdr_t ;
typedef scalar_t__ arc_buf_contents_t ;
typedef int abd_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,void*) ;

__attribute__((used)) static abd_t *
FUNC_4(arc_buf_hdr_t *VAR_4, uint64_t VAR_5, void *VAR_6)
{
 arc_buf_contents_t VAR_7 = FUNC_2(VAR_4);

 FUNC_3(VAR_4, VAR_5, VAR_6);
 if (VAR_7 == VAR_1) {
  return (FUNC_1(VAR_5, VAR_3));
 } else {
  FUNC_0(VAR_7 == VAR_0);
  return (FUNC_1(VAR_5, VAR_2));
 }
}
