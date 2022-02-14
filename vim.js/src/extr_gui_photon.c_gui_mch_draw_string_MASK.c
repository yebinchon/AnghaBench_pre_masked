
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef char char_u ;
struct TYPE_13__ {int norm_pixel; } ;
struct TYPE_12__ {int x; int member_1; int member_0; } ;
struct TYPE_10__ {void* y; void* x; } ;
struct TYPE_9__ {void* y; void* x; } ;
struct TYPE_11__ {TYPE_2__ lr; TYPE_1__ ul; } ;
typedef TYPE_3__ PhRect_t ;
typedef TYPE_4__ PhPoint_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (void*,void*,void*,void*,int ) ;
 int FUNC_3 (char*,int,TYPE_4__*,int ) ;
 int FUNC_4 (char*,int,TYPE_3__*,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int *,char*,int,int*,char*,int,int*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 scalar_t__ VAR_9 ;
 int * VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_5__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 char* FUNC_10 (char*,int) ;

void
FUNC_11(int VAR_15, int VAR_16, char_u *VAR_17, int VAR_18, int VAR_19)
{
    static char *VAR_20 = ((void*)0);
    static int VAR_21 = 0;

    PhPoint_t VAR_22 = { FUNC_8(VAR_16), FUNC_9(VAR_15) };
    PhRect_t VAR_23;

    if (VAR_13 == VAR_9)
 return;

    VAR_2;

    if (!(VAR_19 & VAR_3))
    {
 FUNC_2(
  FUNC_0(VAR_16), FUNC_1(VAR_15),
  FUNC_0(VAR_16 + VAR_18) - 1, FUNC_1(VAR_15 + 1) - 1,
  VAR_6);
    }

    if (VAR_19 & VAR_4)
 FUNC_5(VAR_12.norm_pixel, VAR_8, 0);

    if (VAR_10 != ((void*)0)



    )
    {
 int VAR_24, VAR_25;


 if (VAR_21 < VAR_18)
 {
     VAR_20 = FUNC_10(VAR_20, VAR_18 * VAR_5);
     VAR_21 = VAR_18;
 }

 FUNC_7(
  VAR_10,
  VAR_17,
  VAR_18,
  &VAR_24,
  VAR_20,
  VAR_21,
  &VAR_25);
 VAR_17 = VAR_20;
 VAR_18 = VAR_25;
    }

    FUNC_3(VAR_17, VAR_18, &VAR_22, 0);

    if (VAR_19 & VAR_0)
    {

 VAR_23.ul.x = FUNC_0(VAR_16) + 1;
 VAR_23.ul.y = FUNC_1(VAR_15);
 VAR_23.lr.x = FUNC_0(VAR_16 + VAR_18) - 1;
 VAR_23.lr.y = FUNC_1(VAR_15 + 1) - 1;
 VAR_23.lr.y -= (VAR_14 + 1) / 2;

 FUNC_4(VAR_17, VAR_18, &VAR_23, VAR_7);

    }

    if (VAR_19 & VAR_4)
 FUNC_5(VAR_8, VAR_8, 0);

    VAR_1;
}
