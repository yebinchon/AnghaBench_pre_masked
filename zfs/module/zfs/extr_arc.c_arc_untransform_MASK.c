
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zbookmark_phys_t ;
typedef int spa_t ;
typedef scalar_t__ boolean_t ;
typedef int arc_fill_flags_t ;
typedef int arc_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int const*,int ) ;
 int FUNC_2 (int *,int const*) ;
 int FUNC_3 (int ,int *,int *,int const*,int *,int ,int ) ;

int
FUNC_4(arc_buf_t *VAR_4, spa_t *VAR_5, const zbookmark_phys_t *VAR_6,
    boolean_t VAR_7)
{
 int VAR_8;
 arc_fill_flags_t VAR_9 = 0;

 if (VAR_7)
  VAR_9 |= VAR_0;

 VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_6, VAR_9);
 if (VAR_8 == VAR_1) {




  VAR_8 = FUNC_0(VAR_2);
  FUNC_2(VAR_5, VAR_6);
  FUNC_3(VAR_3,
      VAR_5, ((void*)0), VAR_6, ((void*)0), 0, 0);
 }

 return (VAR_8);
}
